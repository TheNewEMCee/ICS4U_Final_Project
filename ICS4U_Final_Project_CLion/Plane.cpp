#include <iostream>
#include <fstream>
#include <ostream>
#include <sstream>
#include "Plane.h"
#include "Seat.h"

Plane::Plane() {
    std::string flightId = "AB1234";
    flightId[0] = 'A' + rand()%26;
    flightId[1] = 'A' + rand()%26;
    flightId[2] = '0' + rand()%10;
    flightId[3] = '0' + rand()%10;
    flightId[4] = '0' + rand()%10;
    flightId[5] = '0' + rand()%10;
    this->setFlightID(flightId);
    std::stringstream sts;
    sts << "../Planes/" << flightId << ".txt";
    this->setTextFileDirectory(sts.str());
}
Plane::Plane(std::string flightID, std::string textFileDirectory) {
    if (!this->isValidID()) {
        std::cout << "Plane Built" << std::endl;
    } else {
        std::cout << "Invalid ID. Plane not created" << std::endl;
    }

}
Plane::~Plane() {
    std::cout << "Flight " << this->flightID << " crashed." << std::endl;
}
std::string Plane::getFlightID() {
    return this->flightID;
}
std::string Plane::getTextFileDirectory() {
    return this->textFileDirectory;
}
bool Plane::isValidID() {
    bool isChar0 = false;
    bool isChar1 = false;
    bool isNum2 = false;
    bool isNum3 = false;
    bool isNum4 = false;
    bool isNum5 = false;
    bool isValidBool[6] = {isChar0, isChar1, isNum2, isNum3, isNum4, isNum5};
    bool isValid = true;
    for (int i = 0; i < 2; i++) {
        char letter = 'A';
        while (!isValidBool[i]) {
            if (this->flightID[i] == letter) {
                isValidBool[i] = true;
            }
            letter++;
        }
    }
    for (int i = 2; i < 6; i++) {
        char number = '0';
        while (!isValidBool[i]) {
            if (this->flightID[i] == number) {
                isValidBool[i] = true;
            }
            number++;
        }
    }
    int count = 0;
    while (isValid) {
        if (!isValidBool[count]) {
            isValid = false;
        }
        count++;
    }
    return isValid;
}
void Plane::setFlightID(std::string flightID) {
    this->flightID = flightID;
}
void Plane::setTextFileDirectory(std::string textFileDirectory) {
    this->textFileDirectory = textFileDirectory;
}