#include <iostream>
#include <string>

using namespace std;

//Struct Input
struct Dwarf {
    string firstName;
    string lastName;
    string streetAddress;
    string city;
    string zipCode;
};

int main() {
    //New Dwarf Struct
    Dwarf senshiDarkstout;
    senshiDarkstout.firstName = "Senshi";
    senshiDarkstout.lastName = "Darkstout";
    senshiDarkstout.streetAddress = "Iron Hills";
    senshiDarkstout.city = "321, Ironforge";
    senshiDarkstout.zipCode = "3501154";

    //Requested Output
    cout << "CSC450: Module 1 Critical Thinking" << endl;
    cout << "1. First Name: " << senshiDarkstout.firstName << endl;
    cout << "2. Last Name: " << senshiDarkstout.lastName << endl;
    cout << "3. Street Address: " << senshiDarkstout.streetAddress << endl;
    cout << "4. City: " << senshiDarkstout.city << endl;
    cout << "5. Zip Code: " << senshiDarkstout.zipCode << endl;

    return 0;
}