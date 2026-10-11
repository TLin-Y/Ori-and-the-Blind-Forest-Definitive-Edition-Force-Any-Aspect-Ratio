# Ori-and-the-Blind-Forest-Definitive-Edition-Force-Any-Aspect-Ratio

An ASI plugin designed to force a native 4:3 (default) aspect ratio in *Ori and the Blind Forest* (2015). This removes the hardcoded horizontal black bars (letterboxing) and scales the 3D rendering perfectly to fit 4:3 displays. 

*Known issue: The 2D menu gets cropped. On x86 PCs, the game launches too quickly, so it takes about 10 seconds for the aspect ratio change to apply.*

## Installation
1. Place `version.dll`, `Ori1_ARFix.asi`, and `Ori1_ARFix.ini` directly into your game's root folder (where `oriDE.exe` is located).
2. Linux / Android Winlator / Proton Users
*   **Winlator or Armada:** Go to Container Settings (or Armada Settings) -> Environment Variables -> Add: `WINEDLLOVERRIDES="version=n,b"` (If you used `winmm.dll`, change it to `version,winmm=n,b`).
*   **Steam (Proton):** Add `WINEDLLOVERRIDES="version=n,b" %command%` to your game's Launch Options.

## Usage & Hotkeys

*   **Auto-Patch:** The plugin will automatically scan and patch the game memory after launch.
*   **Manual Override (F11):** Because JIT memory in theory can occasionally be re-allocated (I can't repro) by the engine, your aspect ratio might suddenly revert to 16:9 with black bars. If this happens, simply **press F11 on your keyboard**. The plugin will instantly re-scan the memory and fix the aspect ratio.

## Configuration (Optional)
You can customize the target aspect ratio by editing the `Ori1_ARFix.ini` file located in your game folder:

```ini
[AspectRatio]
TargetWidth = 4.0
TargetHeight = 3.0
```

*A log file (`Ori1_ARFix.log`) will be generated in the game directory to help you verify that the plugin has loaded and successfully patched the JIT cameras.*
