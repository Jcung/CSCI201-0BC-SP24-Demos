all: product clock main.cpp
	g++ -pedantic-errors -g  -fdiagnostics-color=always main.cpp product clock -o main
product: product.h product.cpp
	g++ -pedantic-errors -g -c -fdiagnostics-color=always product.cpp -o product
clock: clock.h clock.cpp
	g++ -pedantic-errors -g -c -fdiagnostics-color=always clock.cpp -o clock
