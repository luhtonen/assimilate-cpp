clean:
	rm -f *.o *.a *.so *.out *.gch *.exe *.app *.ast

ast:
	clang++ -std=c++11 -emit-ast CalculatorTutorial.cpp Calculator.cpp

build:
	clang++ -std=c++11 -o CalculatorTutorial.app CalculatorTutorial.cpp Calculator.cpp

all: clean build
