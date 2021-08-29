# **安装**

## 你将需要的东西。
1. Apex构建: `R5pc_r5launch_N1094_CL456479_2019_10_30_05_20_PM`
2. detours_r5 来自: [Mauler125/detours_r5](https://github.com/Mauler125/detours_r5)
3. scripts_r5 来自: [Mauler125/scripts_r5](https://github.com/Mauler125/scripts_r5)
4. Origin启动器，并在库中有Apex英雄的账户。.<br/> 另见: [什么是封号风险?](../faq/faq#什么是封号风险)

## 在进行程序之前，请...
- 阅读 [FAQ](../faq/faq)
- 至少运行一次当前版本的《Apex英雄》. 
- 加入我们的 [Discord!](https://discord.com/invite/jqMkUdXrBr)

## 安装
### 1. 创建目录
为你的文件创建一个目录。它应该在一个至少有45GB空间的地方。现在你可以把你的APEX构建移到这个文件夹里。请确保保留一个未经修改的备份，以备不时之需。

### 2. 复制二进制文件
接下来你应该获得r5_detours的二进制文件，你可以通过链接的 repo的realeases部分或通过 [自己构造.](../installation/build) 一旦你获得了 `r5detours.dll` `dedicated.dll` 和 `launcher.exe` 将它们复制到你的安装文件夹的根部。你的安装目录应该如下所示。为了简洁起见，有些文件被省略了。如果你感到困惑的话参见 [完整的目录树](../installation/tree) 。
```
├───audio
├───paks
├───platform
├───stbsp
├───vpk
├───r5apex.exe
├───launcher.exe <-- 
├───dedicated.dll <-- 
├───r5detours.dll <-- 
└───... 
```
### 3. 复制脚本
现在你可以继续复制脚本了。scripts_r5的内容需要放到scripts文件夹中，它本身就在platform文件夹中。如果你没有scripts文件夹，你应该创建它。

```
platform
|
|   imgui.ini
|   playlists_r5_patch.txt
|   
+---cfg
|   |
|   ...
|           
+---log
|   |
|   ...
|
+---maps
|   |
|   ...
|           
+---scripts                                 <--
|   |   .gitattributes                      <--
|   |   enginevguilayout.res                <--
|   |   entitlements.rson                   <--
|   |   hudanimations.txt                   <--
|   |   hud_textures.txt                    <--
|   |   kb_act.lst                          <--
|   |   propdata.txt                        <--
|   |   status_effect_types.txt             <--
|   |   surfaceproperties.rson              <--
|   |   surfaceproperties_manifest.txt      <--
|   |   vgui_screens.txt                    <--
|       10 Folders were ommited...          
|               
+---shaders
|   |
|   ...
|           
\---support
    |
    ...
```

### 4. 额外的地图

在这一点上，你有一个安装的工作，如果你想安装额外的地图，你应该现在就弄好。
只需按照地图压缩包中的readme的指示即可。

## 运行和使用

要运行R5Reloaded，只需在你安装的根目录下执行`launcher.exe`。在 "detours_r5 "仓库的 "releases "部分也有一个bat文件，可以在客户端和开发模式之间轻松切换。在这里，你可以按F10键刷新服务器浏览器，找到一个可以加入的服务器。 [创建你自己的](../servers/hosting)
