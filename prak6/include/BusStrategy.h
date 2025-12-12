
#ifndef BUSSTRATEGY_H
#define BUSSTRATEGY_H

#include "RouteStrategy.h"
#include <iostream>

class BusStrategy : public RouteStrategy {
public:
    void calculate() override {
        std::cout << "Bus brum" << std::endl;
    }
};

#endif // BUSSTRATEGY_H