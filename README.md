# assimilate-cpp
Build C++ template

## Lesson 1

### Getting started

__References:__
[Reference VS Code Docs](https://code.visualstudio.com/docs/languages/cpp)<br>
[Codespaces for C++](https://devblogs.microsoft.com/cppblog/customizing-github-codespaces-for-cpp-projects/)<br>
[Microsoft C++ Tutorials](https://learn.microsoft.com/en-us/cpp/cpp/?view=msvc-170)


#### Build a hello world C++

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

### Build a console calculator app in C++

To compile execute following command:
```bash
clang++ CalculatorTutorial.cpp Calculator.cpp -o calculator.app
```

To execute compile program execute this:
```bash
./calculator.app
```

## Lesson 2

* Can I speed up compilation? Why do I need all of this terminal commands? Can use a `Makefile`?
* Build a phrase repeater in C++.

__References:__
[Simple C++ Makefile](https://stackoverflow.com/questions/2481269/how-to-make-a-simple-c-makefile)
[Clang Static Analyzer v11](https://releases.llvm.org/11.0.1/tools/clang/docs/ClangStaticAnalyzer.html)
