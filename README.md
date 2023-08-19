## How to command

In the problem directory,

1. g++-13 -std=c++20 a.cpp
2. oj t -d ./tests/
3. oj submit https://atcoder.jp/contests/abs/tasks/abc081_b a.cpp (example)

#### Configuration

c_cpp_properties.json:

```json
{
  "configurations": [
    {
      "name": "Mac",
      "includePath": ["${workspaceFolder}/**"],
      "defines": [],
      "macFrameworkPath": [
        "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks"
      ],
      "compilerPath": "/opt/homebrew/bin/g++-13",
      "cStandard": "c23",
      "cppStandard": "c++20",
      "intelliSenseMode": "macos-gcc-arm64"
    }
  ],
  "version": 4
}
```
