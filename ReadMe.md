Building with cmd:

mkdir build
cd build
cmake ..
cmake --build . --config Debug
Debug\NumberLearnerExe.exe


To debug with intergrated console in vscode, adjust .vscode/settings.json with either of these:
```json
"cmake.debugConfig": {
    "console": "integratedTerminal"
}
// OR ------------------
"cmake.debugConfig": {
    "externalConsole": true
}
``` 