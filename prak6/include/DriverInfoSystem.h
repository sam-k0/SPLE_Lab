#ifndef DRIVERINFOSYSTEM_H
#define DRIVERINFOSYSTEM_H

#include "RouteStrategy.h"
#include "ServiceLocator.h"

class DriverInfoSystem {
public:
    DriverInfoSystem(long id) {
        myRS = ServiceLocator::getInstance().getComponent(id);
        if (myRS) {
            myRS->calculate();
        }
    }

    void newRoute() {
        if (myRS) {
            myRS->calculate();
        }
    }

private:
    RouteStrategy* myRS;
};

#endif // DRIVERINFOSYSTEM_H