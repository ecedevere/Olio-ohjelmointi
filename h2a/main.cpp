#include <iostream>

#include"car.h"
#include"rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    //Car
    Car objCar1;
    objCar1.setBrand("Porsche");
    objCar1.setModel("Cayenne");
    objCar1.setYearModel(2025);

    objCar1.printData();

    //Rectangle
    Rectangle *objRectangle1=new Rectangle();
    objRectangle1->setHeight(4.32);
    objRectangle1->setWidth(2.22);
    cout<<"Area of rectangle is "<<objRectangle1->getArea()<<endl;
    cout<<"Perimeter of a rectangle is "<<objRectangle1->getCircum()<<endl;

    delete objRectangle1;
    objRectangle1=nullptr;

    //Student
    unique_ptr<Student> objStudent1 = make_unique<Student>();
    objStudent1->setName("Sheldon Cooper");
    objStudent1->setStudentNumber(368921);
    objStudent1->setAverage(4.9);
    cout<<"Student: "<<objStudent1->getName()<<",StudentID: "<<objStudent1->getStudentNumber()<<",Student's average: "<<objStudent1->getAverage()<<endl;


    return 0;
}
