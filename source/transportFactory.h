#pragma once

#include "transport.h"

using namespace std;

class TransportFactory
{
public:
	static unique_ptr<Transport> createBike(int wheelCount, int maxSpeed, string fuelType);
	static unique_ptr<Transport> createScooter(int wheelCount, int maxSpeed);
	static unique_ptr<Transport> createCar(int wheelCount, int maxSpeed, int luggageVolume);
	static unique_ptr<Transport> createBus(int wheelCount, int maxSpeed, int maxSeats);
};

