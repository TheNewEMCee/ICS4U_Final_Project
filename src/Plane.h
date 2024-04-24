#include <cstdio>
#include <iostream>
#include <fstream>
#include <sstream>
#include "Seat.h"
#ifndef PLANE_H
#define PLANE_H
class Plane {
private:
    std::string flightID;
    std::string textFileDirectory;
public:
    Plane();
    Plane(std::string flightID, std::FILE textFile);
    ~Plane();
    std::string getFlightID();
    std::string getTextFileDirectory();
    bool isValidID();
    void setFlightID(std::string flightID);
    void setTextFileDirectory(std::string textFileDirectory);
};
#endif