#include <iostream>

using namespace std;

int main()
{
    //osoitin

    int a = 5;
    cout << "a:n arvo on:" << a<<" ja osoite on:"<<&a<<endl;

    int *pointerA;
    pointerA=&a;
    cout<<"Pointterin osoittama osoite on:"<<pointerA <<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on:"<<*pointerA<<endl;

    //referenssi

    int &refA=a;
    cout<<"refA osoittaa osoitteeseen on:"<<&refA <<endl;
    cout<<"refA:n osoittaman muistipaikan arvo on:"<<refA<<endl;

    int b = 6;
    /* tässä tapahtuu virhe -> int &refA=b;
    cout<<"refA osoittaa osoitteeseen on:"<<&refA <<endl;
    cout<<"refA:n osoittaman muistipaikan arvo on:"<<refA<<endl;
    */

    pointerA=&b;
    cout<<"Pointterin osoittama osoite on:"<<pointerA <<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on:"<<*pointerA<<endl;


    return 0;
}
