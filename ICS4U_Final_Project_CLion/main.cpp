#include <iostream>
#include <fstream>
#include <sstream>
#include "Seat.h"
#include "Flight.h"


int main() {
    std::cout << "Welcome to Fly-by-Night Airlines." << std::endl;
    std::fstream file;
    std::ifstream inFile;
    std::ofstream outFile;
    file.open("../Planes/plane1.txt", std::ios::in);
    inFile.open("../Planes/plane1.txt");
    outFile.open("../Planes/outFile.txt");
    std::string flightID;
    std::stringstream planeLayout;
    std::string planeModel;
    std::string seatLayout;
    std::string line;
    int count = 0;
    if (inFile.fail()) {
        std::cerr << "Failed" << std::endl;
        exit(1);
    }
    if (outFile.fail()) {
        std::cerr << "Failed" << std::endl;
        exit(1);
    }
    for (int i = 0; i < 15; i++) {
        while(getline(file, line)) {
            std::cout << line << std::endl;
        }
    }
    while(!inFile.eof()) {
        inFile >> flightID;
        count++;
    }
    std::cout << flightID << std::endl;
    inFile.close();
    outFile.close();
    return 0;
}