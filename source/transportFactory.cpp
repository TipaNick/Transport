#include "transportFactory.h"

unique_ptr<Transport> TransportFactory::createBike(int wheelCount, int maxSpeed, string fuelType)
{
    return make_unique<Bike>(wheelCount, maxSpeed, move(fuelType));
}

unique_ptr<Transport> TransportFactory::createScooter(int wheelCount, int maxSpeed)
{
    return make_unique<Scooter>(wheelCount, maxSpeed);
}

unique_ptr<Transport> TransportFactory::createCar(int wheelCount, int maxSpeed, int luggageVolume)
{
    return make_unique<Car>(wheelCount, maxSpeed, luggageVolume);
}

unique_ptr<Transport> TransportFactory::createBus(int wheelCount, int maxSpeed, int maxSeats)
{
    return make_unique<Bus>(wheelCount, maxSpeed, maxSeats);
}
