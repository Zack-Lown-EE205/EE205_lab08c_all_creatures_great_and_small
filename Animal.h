///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  EE205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Zack Lown <zacklown@hawaii.edu>
/// @date   13_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
#define EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H

#include <string>

enum Gender {
    UNKNOWN_GENDER, MALE, FEMALE
};

const float UNKNOWN_WEIGHT = -1;

class Animal {
public:
    Animal(const std::string &newSpecies);

    Animal(const std::string &species, Gender gender);

    Animal(const std::string &newSpecies, Gender gender, float newWeight);

    Animal(const std::string &species, float newWeight);

    static const std::string &getKingdom();

    const std::string &getSpecies() const;

    Gender getGender() const;

    void setGender(Gender gender);

    float getWeight() const;

    void setWeightGrams(float weight);

    void printInfo();

    bool isValid();

protected:
    static const std::string kingdom;
    std::string species; // Required
    enum Gender gender = UNKNOWN_GENDER;
    float weight = UNKNOWN_WEIGHT;

    bool validateWeight( const float newWeight );
    bool validateSpecies( const std::string newSpecies );

private:
    void setSpecies( const std::string newSpecies );
};


#endif //EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
