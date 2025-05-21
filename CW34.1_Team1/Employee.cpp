//
//  Employee.cpp
//  CW34.1_Team1
//
//  Created by Valery on 20.05.2025.
//

#include "Employee.hpp"


Employee::Employee() { 
    name = "undefined";
    surname = "undefined";
    fatherName = "undefined";
    position = "undefined";
    salary = 0;
}

Employee::Employee(string name, string surname, string fatherName, string position, float salary) { 
    this->name = name;
    this->surname = surname;
    this->fatherName = fatherName;
    this->position = position;
    this->salary = salary;
}

void Employee::setName(string name) { 
    this->name = name;;
}

void Employee::setSurname(string surname) { 
    this->surname = surname;
}

void Employee::setFatherName(string fatherName) { 
    this->fatherName = fatherName;
}

void Employee::setPosition(string position) { 
    this->position = position;
}

void Employee::setSalary(float salary) { 
    this->salary = salary;
}

string Employee::getName() const { 
    return name;;
}

string Employee::getSurname() const { 
    return surname;;
}

string Employee::getFatherName() const {
    return fatherName;;
}

string Employee::getPosition() const {
    return position;;
}

float Employee::getSalary() const {
    return salary;;
}
