#include <iostream>
#include "chef.h"
#include "italianchef.h"



int main()
{
    Chef objChef("Gordon Ramsay");

    objChef.makeSalad();
    objChef.makeSoup();



    ItalianChef objItaChef("Anthone Bourdain");

    objItaChef.makeSalad();
    objItaChef.makeSoup();
    objItaChef.makePasta();
    cout<<"name of the Italian Chef is "<<objItaChef.getName()<<endl;


    return 0;
}
