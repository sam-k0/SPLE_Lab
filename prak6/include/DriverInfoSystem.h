#ifndef DRIVERINFOSYSTEM_H
#define DRIVERINFOSYSTEM_H

#include "RouteStrategy.h"

class DriverInfoSystem {
public:
    DriverInfoSystem(RouteStrategy* strategy) : myRS(strategy) {}
    void newRoute() {
        myRS->calculate();
    }

private:
    RouteStrategy* myRS;
};

#endif // DRIVERINFOSYSTEM_H