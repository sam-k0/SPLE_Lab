# Service Locator Pattern Implementation Summary
g++ -std=c++17 -I./include src/servicemain.cpp -o service_locator_demo
## Overview
The Service Locator pattern has been implemented following the class diagram provided. This pattern allows for loose coupling between components and provides a central registry for service discovery.

## Implemented Classes

### 1. ServiceLocator (ServiceLocator.h)
- **Singleton Pattern**: Uses static getInstance() method for single instance
- **subscribe(long id, RouteStrategy* component)**: Registers a component with a given ID
- **getComponent(long id)**: Retrieves a registered component by ID
- **Single Component Storage**: Stores only one component at a time (as requested)

Key Features:
- Thread-safe singleton implementation
- Prevents copying and assignment
- Stores component reference with its ID

### 2. Component (Component.h)
- Base interface class for components
- Virtual subscribe() method for future extensibility
- Virtual destructor for proper cleanup

### 3. Updated DriverInfoSystem (DriverInfoSystem.h)
- Constructor now takes a component ID instead of a direct strategy reference
- Fetches the strategy from ServiceLocator in the constructor
- Calls calculate() immediately upon instantiation
- Calls ServiceLocator::getInstance().getComponent(id) to retrieve the strategy

## Program Flow (servicemain.cpp)

1. **First Strategy Registration**:
   - Create PassengerStrategy instance
   - Register it with ServiceLocator using ID 12345
   - Create DriverInfoSystem(12345) - fetches and uses PassengerStrategy
   - Output: "Passenger"

2. **Strategy Exchange**:
   - Delete previous strategy
   - Create TruckStrategy instance
   - Register it with ServiceLocator using same ID 12345
   - Create DriverInfoSystem(12345) - fetches and uses TruckStrategy
   - Output: "Truck"

## Design Benefits

1. **Loose Coupling**: DriverInfoSystem doesn't need to know about concrete strategy implementations
2. **Runtime Strategy Exchange**: Can swap strategies at runtime using the same ID
3. **Centralized Service Registry**: All components go through ServiceLocator
4. **Easy to Test**: Can register mock strategies for testing

## Test Output
```
Using PassengerStrategy:
Passenger
Passenger

Using TruckStrategy:
Truck
Truck
```

The pattern successfully demonstrates the ability to exchange strategies at runtime through the Service Locator mechanism.
