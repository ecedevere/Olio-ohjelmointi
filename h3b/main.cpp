#include <iostream>
#include "animal.h"
#include "dog.h"
#include <memory>

using namespace std;

int main()
{
    //tavallinen olio
    cout <<" Tavallinen:"<<endl;
    Animal objAnimal;
    Dog objDog;

    //funktioiden kutsu ylikirjoittamisen avulla
    cout<<" Kutsutaan funktiot:"<<endl;
    objAnimal.callOut();
    objDog.callOut();

    //smart pointer ja polymorfinen olio
    cout <<" Polymorfinen olio:"<<endl;
    unique_ptr<Animal> objAnimal2 = make_unique<Dog>();
    objAnimal2->callOut();

    return 0;
}
