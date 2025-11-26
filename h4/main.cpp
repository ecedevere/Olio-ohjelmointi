#include <iostream>
#include "car.h"
#include "engine.h"
#include "wheel.h"

using namespace std;

int main()
{
    Car objCar1("Toyota","Corolla");

    objCar1.setEngine();

    objCar1.setWeels();

    objCar1.printDetails();

    return 0;
}
