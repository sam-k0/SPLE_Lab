#include "../include/PassengerStrategy.h"
#include "../include/TruckStrategy.h"
#include "../include/DriverInfoSystem.h"

int main() {
    RouteStrategy* passengerStrategy = new PassengerStrategy();
    DriverInfoSystem dis1(passengerStrategy);
    dis1.newRoute();

    delete passengerStrategy;

    RouteStrategy* truckStrategy = new TruckStrategy();
    DriverInfoSystem dis2(truckStrategy);
    dis2.newRoute();

    delete truckStrategy;

    return 0;
}

