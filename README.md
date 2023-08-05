# assimilate-cpp
Build C++ template

## Lesson 1

[Reference VS Code Docs](https://code.visualstudio.com/docs/languages/cpp)
[Codespaces for C++](https://devblogs.microsoft.com/cppblog/customizing-github-codespaces-for-cpp-projects/)

* Build a hello world C++
* create `helloworld.cpp` with the following content:
```cpp
#include <iostream>

int main()
{
    std::cout << "Hello World" << std::endl;
}
```
* compile by
    * pressing the play button in the top right corner of the editor 
    * or selecting from menu __Terminal__ > __Run Build Task...__
    * or pressing _Shift + Command + B_ buttons
* select `/usr/bin/clang++` compiler
* build executable can be run with: `./helloworld`

Alternatevely can do the following:
```bash
clang++ helloworld.cpp -o helloworld.app
./helloworld.app
```
