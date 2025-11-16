#include <iostream>
#include "car.h"
#include <vector>

using namespace std;

int main()
{
    vector <Car> carList;

    carList.emplace_back("Audi", "Q7", 2025);
    carList.emplace_back("Porsche", "Cayenne", 2024);
    carList.emplace_back("Bugatti", "Chiron", 2025);

    //toisen alkion tiedot
    cout<<"Toinen alkio"<<endl;
    carList[1].printData();


    //kaikki tiedot
    cout<<"Kaikki alkiot: "<<endl;
    for(int x=0; x<=2; x++){
        carList[x].printData();
    }

    return 0;
}
