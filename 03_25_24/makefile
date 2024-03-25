all: product main.cpp
	g++ -pedantic-errors -g  -fdiagnostics-color=always main.cpp product -o main
product: product.h product.cpp
	g++ -pedantic-errors -g -c -fdiagnostics-color=always product.cpp -o product
