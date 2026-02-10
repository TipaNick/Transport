#pragma once
#include <string>
#include <iostream>

using namespace std;

//Base class
class Transport
{
protected:
	const int wheelCount;
	const int maxSpeed;

public:
	Transport(int wheelCount, int maxSpeed)
		: wheelCount(wheelCount), maxSpeed(maxSpeed) {
	}
	virtual ~Transport() = default;

	virtual void printInfo() const = 0;
};

//Heir class
class Bike : public Transport {
private: 
	const string fuelType; //extra property
public:
	Bike(int wheelCount, int maxSpeed, string fuelType)
		: Transport(wheelCount, maxSpeed), fuelType(move(fuelType)) {
	}

	void printInfo() const override {
		cout << "Наименование транспорта: мотоцикл" << "\n";
		cout << "Кол-во колес: " << wheelCount << "\n";
		cout << "Максимальная скорость: " << maxSpeed << "км/ч" << "\n";
		cout << "Тип топлива: " << fuelType << "\n";
	}
};

//Heir class
class Scooter : public Transport {
public:
	Scooter(int wheelCount, int maxSpeed)
		: Transport(wheelCount, maxSpeed) {
	}

	void printInfo() const override {
		cout << "Наименование транспорта: самокат" << "\n";
		cout << "Кол-во колес: " << wheelCount << "\n";
		cout << "Максимальная скорость: " << maxSpeed << "км/ч" << "\n";
	}
};

//Heir class
class Car : public Transport {
private:
	const int luggageVolume; //Extra property
public:
	Car(int wheelCount, int maxSpeed, int luggageVolume)
		: Transport(wheelCount, maxSpeed), luggageVolume(luggageVolume) {
	}

	void printInfo() const override {
		cout << "Наименование транспорта: автомобиль" << "\n";
		cout << "Кол-во колес: " << wheelCount << "\n";
		cout << "Максимальная скорость: " << maxSpeed << "км/ч" << "\n";
		cout << "Объем багажника: " << luggageVolume << "кг" << "\n";
	}
};

//Heir class
class Bus : public Transport {
private:
	const int maxSeats; //Extra property
public:
	Bus(int wheelCount, int maxSpeed, int maxSeats)
		: Transport(wheelCount, maxSpeed), maxSeats(maxSeats) {
	}

	void printInfo() const override {
		cout << "Наименование транспорта: автобус" << "\n";
		cout << "Кол-во колес: " << wheelCount << "\n";
		cout << "Максимальная скорость: " << maxSpeed << "км/ч" << "\n";
		cout << "Кол-во мест: " << maxSeats << "\n";
	}
};
