#include <iostream>
#include <fstream>
#include <sstream>
#include "Plane.h"
#ifndef FLIGHT_H
#define FLIGHT_H
class Flight {
private:
    Plane plane;
    int totalSeats;
    int fcSeats;
    int bcSeats;
    int peSeats;
    int ecSeats;
public:
    Plane getPlane();
    void setPlane(Plane plane);
    void setTotalSeats();
    void setFCSeats(int fcSeats);
    void setBCSeats(int bcSeats);
    void setPESeats(int peSeats);
    void setECSeats(int ecSeats);
    int getFCSeats();
    int getBCSeats();
    int getPESeats();
    int getECSeats();


};
#endif