#pragma once

/////////////////////////////////////////////////////////////////////////////
// Internals
int   Stricmp(const char* s1, const char* s2);
int   Strnicmp(const char* s1, const char* s2, int n);
char* Strdup(const char* s);
void  Strtrim(char* s);

class GuiConfig
{
public:
    struct
    {
        int bind1 = VK_OEM_3;
        int bind2 = VK_INSERT;
    } CGameConsoleConfig;

    struct
    {
        int bind1 = VK_HOME;
        int bind2 = VK_F10;
    } CCompanionConfig;

    void Load()
    {
        std::filesystem::path path = std::filesystem::current_path() /= "gui.config"; // Get current path + gui.config

        nlohmann::json in;
        std::ifstream configFile(path, std::ios::in); // Parse config file.

        if (configFile.good() && configFile) // Check if it parsed.
        {
            configFile >> in;
            configFile.close();

            if (!in.is_null())
            {
                if (!in["config"].is_null())
                {
                    // CGameConsole
                    CGameConsoleConfig.bind1 = in["config"]["CGameConsole"]["bind1"].get<int>();
                    CGameConsoleConfig.bind2 = in["config"]["CGameConsole"]["bind2"].get<int>();

                    // CCompanion
                    CCompanionConfig.bind1 = in["config"]["CCompanion"]["bind1"].get<int>();
                    CCompanionConfig.bind2 = in["config"]["CCompanion"]["bind2"].get<int>();
                }
            }
        }
    }

    void Save()
    {
        nlohmann::json out;

        // CGameConsole
        out["config"]["CGameConsole"]["bind1"] = CGameConsoleConfig.bind1;
        out["config"]["CGameConsole"]["bind2"] = CGameConsoleConfig.bind2;

        // CCompanion
        out["config"]["CCompanion"]["bind1"] = CCompanionConfig.bind1;
        out["config"]["CCompanion"]["bind2"] = CCompanionConfig.bind2;

        std::filesystem::path path = std::filesystem::current_path() /= "gui.config"; // Get current path + gui.config
        std::ofstream outFile(path, std::ios::out | std::ios::trunc); // Write config file..

        outFile << out.dump(4); // Dump it into config file..

        outFile.close(); // Close the file handle.
    };
};

extern GuiConfig g_GuiConfig;
