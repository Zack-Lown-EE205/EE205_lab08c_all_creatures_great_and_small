///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  EE205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Zack Lown <zacklown@hawaii.edu>
/// @date   13_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Animal.h"

int main() {
    Animal myFirstAnimal = Animal( "Felis catus" );
    myFirstAnimal.setGender( MALE );
    myFirstAnimal.setWeightGrams(19);
    myFirstAnimal.printInfo();
    return 0;
}
