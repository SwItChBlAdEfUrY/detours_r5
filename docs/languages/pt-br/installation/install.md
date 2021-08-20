# **Installation**

## O que você vai precisar
1. A Build de Apex: `R5pc_r5launch_N1094_CL456479_2019_10_30_05_20_PM`
2. detours_r5 de: [Mauler125/detours_r5](https://github.com/Mauler125/detours_r5)
3. scripts_r5 de: [Mauler125/scripts_r5](https://github.com/Mauler125/scripts_r5)
4. O launcher da Origin instalado e logado em uma conta com Apex Legends na biblioteca.<br/> Veja: [Quais são os ricos de banimento?](../faq/faq#what-are-the-ban-risks)

## Antes de proceder, por favor...
- Leia o [FAQ](../faq/faq)
- Execute a versão atual de Apex Legends pelo ou menos uma vez. 
- Entre no nosso [Discord!](https://discord.com/invite/jqMkUdXrBr)

## Instalando
### 1. Crie um diretório
Crie um diretório para os seus arquivos. O diretório deve ter 45GB de espaço livre. Mova a sua build do jogo para essa pasta. Tenha em mãos um backup sem modificações, para garantir.

### 3. Copiar os arquivos binários
Agora você deve obter os arquivos de detours_r5 pelo link associado com o repositório ou [compilando você mesmo.](../installation/build) Com os arquivos `r5detours.dll` `dedicated.dll` e `launcher.exe` em mãos, copie-os para a sua pasta raiz da instalação. A instalação deve parecer como a representação seguinte. Alguns arquivos foram omitidos com o fim de manter a representação breve. Veja [o diretório todo](../installation/tree) se estiver confuso.
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
### 4. Copiar os Scripts
Agora você pode copiar os scripts. O conteúdo de scripts_r5 precisa ir na pasta scripts, que está dentro da pasta platform. Se você não tiver uma pasta scripts, você deve criá-la. 

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
|       10 Pastas foram omitidas...          
|               
+---shaders
|   |
|   ...
|           
\---support
    |
    ...
```

### 5. Mapas adicionais

Agora que você tem uma instalação funcional, se quiser instalar mapas adicionais, deve fazê-lo agora. Siga as instruções contidas dentro do arquivo zip contido com o mapa.

## Execução e Como utilizar

Para utilizar o R5Reloaded simplesmente abra o arquivo "Run R5 Reloaded.bat". Se fizer tudo corretamente, você deve ver a tela inicial do jogo. Logo após, o jogo tentará conectar aos servidores da EA e falhará. Daí você pode apertar "F10" e atualizar o navegador de servidores para encontrar um servidor para entrar ou [criar seu próprio servidor.](../servers/hosting)
