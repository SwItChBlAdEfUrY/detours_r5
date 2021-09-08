#pragma once

/////////////////////////////////////////////////////////////////////////////
// Internals
BOOL FileExists(LPCTSTR szPath);
MODULEINFO GetModuleInfo(const char* szModule);

/////////////////////////////////////////////////////////////////////////////
// Utility
void DbgPrint(LPCSTR sFormat, ...);
void HexDump(const char* szHeader, int nFunc, const void* pData, int nSize);
void PatchNetVarConVar();

/////////////////////////////////////////////////////////////////////////////
// Loggers
inline auto g_spddefault_logger = spdlog::basic_logger_mt("default_logger", "platform\\log\\default_r5.log");
inline auto g_spdnetchan_logger = spdlog::basic_logger_mt("netchan_logger", "platform\\log\\netchan_r5.log");

/////////////////////////////////////////////////////////////////////////////

std::string base64_encode(const std::string& in);
std::string base64_decode(const std::string& in);