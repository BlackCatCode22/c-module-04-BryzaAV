//hashMapsAndJSON.cpp
//BAV 10/01/2025

#include <iostream>
#include <string>
#include "nlohmann/json.hpp"
#include <unordered_map>
#include <map>

using json = nlohmann::json;
using namespace std;

int main() {
    cout << "\n Hello welcome to my JSON program! \n " << endl;

    //Creat a jSon object
    json myPetList = {
        {"Chloe", 2020},
        {"Princess", 2024},
        {"Lily", 2025}
    };

    //Access the values like a hash map
    cout << "\n Chloe: (This is the key of my key/value pair's value)" << myPetList ["Chloe"] << endl;

    cout << "\n Chloe's year she was born: " << myPetList ["Chloe"] << endl;
    cout << "\n Princess's year she was born: " << myPetList ["Princess"] << endl;
    cout << "\n Lily's year she was born: " << myPetList ["Lily"] << endl;

    //Creat a C++ hash map that uses three pet names and the int value for
    //Their age - name (string) : age (int)
    unordered_map<string, int> myPetAge;
    myPetAge["Chloe"] = 5;
    myPetAge["Princess"] = 2;
    myPetAge["Lily"] = 1;

    cout << "\n Chloe's age is: " << myPetAge["Chloe"] << endl;
    cout << "\n Princess's age is: " << myPetAge["Princess"] << endl;
    cout << "\n Lily's age is: " << myPetAge["Lily"] << endl;

    //Loop through my hash map with a C++ programing idiom!
    for (auto &pair : myPetAge) {
        cout << pair.first << ": " << pair.second << endl;
    }

    //Create an ordered hash map using map
    map<string, int> myOrderedPetAges;
    myOrderedPetAges["Chloe"] = 5;
    myOrderedPetAges["Princess"] = 2;
    myOrderedPetAges["Lily"] = 1;

    //Output the ordered list
    int myPairInt = 1;
    for (auto &pair : myOrderedPetAges) {
        cout << "\n pair number " << myPairInt << " is: " << pair.first << ": " << pair.second << endl;
        myPairInt++;
    }

    return 0;
}