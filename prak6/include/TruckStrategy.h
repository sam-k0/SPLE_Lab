#ifndef TRUCKSTRATEGY_H
#define TRUCKSTRATEGY_H

#include "RouteStrategy.h"
#include <iostream>

class TruckStrategy : public RouteStrategy {
public:
    void calculate() override {
        std::cout << "Truck" << std::endl;
    }
};

#endif // TRUCKSTRATEGY_H