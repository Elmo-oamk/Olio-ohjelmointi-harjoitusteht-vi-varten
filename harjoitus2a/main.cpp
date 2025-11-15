#include <iostream>
#include <memory>
#include "Car.h"
#include "Rectangle.h"
#include "Student.h"

int main() {

    Car car;
    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(2020);
    car.printData();


    Rectangle* rect = new Rectangle();
    rect->setWidth(4.0);
    rect->setHeight(3.0);
    std::cout << "Area: " << rect->getArea() << std::endl;
    std::cout << "Circumference: " << rect->getCircum() << std::endl;
    delete rect;


    std::shared_ptr<Student> student = std::make_shared<Student>();
    student->setName("Elmo");
    student->setStudentNumber(12345);
    student->setAverage(4.5);
    std::cout << "Student: " << student->getName() << ", "
              << student->getStudentNumber() << ", "
              << student->getAverage() << std::endl;

    return 0;
}
