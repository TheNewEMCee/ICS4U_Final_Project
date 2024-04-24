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
Plane::Plane(std::string flightID, std::FILE textFile) {
    if (this->)
}
Plane::~Plane() {

}
std::string Plane::getFlightID() {
    return this->flightID;
}
std::string Plane::getTextFileDirectory() {
    return this->textFileDirectory;
}
void Plane::setFlightID(std::string flightID) {
    this->flightID = flightID;
}
void Plane::setTextFileDirectory(std::string textFileDirectory) {
    this->textFileDirectory = textFileDirectory;
}