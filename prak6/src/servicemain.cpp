#include "../include/PassengerStrategy.h"
#include "../include/TruckStrategy.h"
#include "../include/DriverInfoSystem.h"
#include "../include/ServiceLocator.h"

int main() {
    // Register PassengerStrategy with ID 12345
    RouteStrategy* passengerStrategy = new PassengerStrategy();
    ServiceLocator::getInstance().subscribe(12345, passengerStrategy);
    
    // Create DriverInfoSystem which fetches the strategy from ServiceLocator
    std::cout << "Using PassengerStrategy:" << std::endl;
    DriverInfoSystem dis1(12345);
    dis1.newRoute();

    delete passengerStrategy;

    // Register TruckStrategy with ID 12345
    RouteStrategy* truckStrategy = new TruckStrategy();
    ServiceLocator::getInstance().subscribe(12345, truckStrategy);
    
    // Create another DriverInfoSystem which fetches the new strategy from ServiceLocator
    std::cout << "\nUsing TruckStrategy:" << std::endl;
    DriverInfoSystem dis2(12345);
    dis2.newRoute();

    delete truckStrategy;

    return 0;
}
