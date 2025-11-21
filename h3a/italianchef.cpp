#include "italianchef.h"

ItalianChef::ItalianChef(string a) : Chef (a) {

    cout <<"ItalianChef "<<name<<" konstruktori"<<endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout <<"ItalianChef "<<name<<" makes pasta"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef "<<name<<" dekonstruktori"<<endl;
}
