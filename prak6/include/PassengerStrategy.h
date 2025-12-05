
#ifndef PASSENGERSTRATEGY_H
#define PASSENGERSTRATEGY_H

#include "RouteStrategy.h"
#include <iostream>

class PassengerStrategy : public RouteStrategy {
public:
    void calculate() override {
        std::cout << "Passenger" << std::endl;
    }
};

#endif // PASSENGERSTRATEGY_H