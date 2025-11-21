#include "dog.h"

Dog::Dog() {
    cout <<"Konstruktori Dog"<<endl;
}

void Dog::callOut()
{
    cout<< "Koira haukkuu!"<<endl;
}

Dog::~Dog()
{
    cout<<"Dekonstruktori Dog"<<endl;
}
