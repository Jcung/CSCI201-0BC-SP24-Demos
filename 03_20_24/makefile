all: clock drink drinkOrder
	g++ -pedantic-errors -g  -fdiagnostics-color=always main.cpp clock drink drinkOrder -o main
clock: clock.h clock.cpp
	g++ -pedantic-errors -g -c -fdiagnostics-color=always clock.cpp -o clock
drink: drink.h drink.cpp
	g++ -pedantic-errors -g -c -fdiagnostics-color=always drink.cpp -o drink
drinkOrder: drinkOrder.cpp drinkOrder.h
	g++ -pedantic-errors -g -c -fdiagnostics-color=always drinkOrder.cpp -o drinkOrder