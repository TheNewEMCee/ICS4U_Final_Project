#include <iostream>
#ifndef SEAT_H
#define SEAT_H
class Seat {

private:
    int x;
    int y;
    int floor;
    std::string classOfSeat;
public:
    Seat();
    Seat(int x, int y, int floor, std::string classOfSeat);
    int setX(int x);
    int setY(int y);
    int setFloor(int floor);
    std::string setClassOfSeat(std::string classOfSeat);
    int getX();
    int getY();
    int getFloor();
    std::string getClassOfSeat();
};
#endif