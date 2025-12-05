#include "../include/RouteCalc.h"
#include <iostream>

#ifdef PASSENGER
void RouteCalc::calculate() {
    std::cout << "Passenger" << std::endl;
}
#else
void RouteCalc::calculate() {
    std::cout << "Truck" << std::endl;
}
#endif

