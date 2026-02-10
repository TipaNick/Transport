#include <iostream>

#ifdef _WIN32
    #include <windows.h>
#endif

#include "transportFactory.h"

int validateNumber(const char* str) {
    try {
        int num = stoi(str);
        return num;
    }
    catch (...) {
        return -1;
    }
}

int main(int argc, char* argv[])
{
    //for correct russian output in windows
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif
    

    auto bike = TransportFactory::createBike(2, 120, "Electric");
    auto scooter = TransportFactory::createScooter(2, 15);
    auto car = TransportFactory::createCar(4, 395, 120);
    auto bus = TransportFactory::createBus(4, 120, 32);

    for (int i = 1; i < argc; i++) {
        //check arg is not string
        int num = validateNumber(argv[i]);

        if (num == 0) { bike->printInfo(); }
        else if (num == 1) { scooter->printInfo(); }
        else if (num == 2) { car->printInfo(); }
        else if (num == 3) { bus->printInfo(); }
        else { cout << "НЕИЗВЕСТНЫЙ ТИП ТРАНСПОРТА" << endl; }

        cout << endl;
    }
}
