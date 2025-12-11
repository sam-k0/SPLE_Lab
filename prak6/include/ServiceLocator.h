#ifndef SERVICELOCATOR_H
#define SERVICELOCATOR_H

class RouteStrategy;

class ServiceLocator {
public:
    static ServiceLocator& getInstance() {
        static ServiceLocator instance;
        return instance;
    }

    void subscribe(long id, RouteStrategy* component) {
        myComps = component;
        myId = id;
    }

    RouteStrategy* getComponent(long id) const {
        if (myId == id) {
            return myComps;
        }
        return nullptr;
    }

private:
    ServiceLocator() : myComps(nullptr), myId(0) {}

    ~ServiceLocator() = default;

    ServiceLocator(const ServiceLocator&) = delete;
    ServiceLocator& operator=(const ServiceLocator&) = delete;

    RouteStrategy* myComps;
    long myId;
};

#endif // SERVICELOCATOR_H
