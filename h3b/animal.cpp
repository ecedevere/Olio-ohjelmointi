#include "animal.h"

Animal::Animal() {
    cout <<"Konstruktori Animal"<<endl;
}

void Animal::callOut()
{
    cout<<"Elain aantelee"<<endl;
}

Animal::~Animal()
{
    cout<<"Dekonstruktori Animal"<<endl;
}
