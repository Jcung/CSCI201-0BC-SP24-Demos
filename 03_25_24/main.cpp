/* Program name: Character.cpp
* Author: John Cung
* Date last updated: 3/28/2024
* Purpose: to create rgb characters and le them do their special attacks
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "character.h"

//main
int main() {

    std::string fighterName, rogueName, magicianName, clericName;

    std::cout << "What is your fighter's name: ";
    std::getline(std::cin, fighterName);
    fighter fighter(fighterName);

    std::cout << "\nWhat is your rogue's name: ";
    std::getline(std::cin, rogueName);
    Rogue rogue(rogueName);

    std::cout << "\nWhat is your magician's name: ";
    std::getline(std::cin, magicianName);
    magician magician(magicianName);

    std::cout << "\nWhat is your cleric's name: ";
    std::getline(std::cin, clericName);
    cleric cleric(clericName);

    std::cout << "\nTesting\n";

    std::cout << "Fighter Starting Stats\n";
    std::cout << fighter.toString() << std::endl;
    std::cout << ""<<std::endl;
   

    std::cout << "\nRogue Starting Stats\n";
    std::cout << rogue.toString() << std::endl;
    std::cout << ""<<std::endl;

    //calling the special attacks classes
    fighter.specialAbility(rogue);
    rogue.specialAbility(fighter);

    std::cout << "\nMagician Starting Stats\n";
    std::cout << magician.toString() << std::endl;
    std::cout << ""<<std::endl;
    

    std::cout << "\nCleric Starting Stats\n";
    std::cout << cleric.toString() << std::endl;
    std::cout << ""<<std::endl;

  //calling the special attacks classes
    magician.specialAbility(rogue);
    cleric.specialAbility(rogue);

    return 0;
}

