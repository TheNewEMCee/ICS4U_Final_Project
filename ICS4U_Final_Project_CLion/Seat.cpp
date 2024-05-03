#include <iostream>
#include "Seat.h"
#include <utility>

int Seat::setX(int theX) {
    this->x = theX;
}
int Seat::setY(int theY) {
    this->y = theY;
}
int Seat::setFloor(int theFloor) {
    this->floor = theFloor;
}
std::string Seat::setClassOfSeat(std::string theClassOfSeat) {
    this->classOfSeat = std::move(theClassOfSeat);
}
int Seat::getX() {
    return this->x;
}
int Seat::getY() {
    return this->y;
}
int Seat::getFloor() {
    return this->floor;
}
std::string Seat::getClassOfSeat() {
    return this->classOfSeat;
}