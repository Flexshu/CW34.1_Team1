//
//  Employee.hpp
//  CW34.1_Team1
//
//  Created by Valery on 20.05.2025.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class Employee{
protected:
    string name;
    string surname;
    string fatherName;
    string position;
    float salary;
public:
    Employee();
    Employee(string name,string surname,string fatherName,string position,float salary);
    
    void setName(string name);
    void setSurname(string surname);
    void setFatherName(string fatherName);
    void setPosition(string position);
    void setSalary(float salary);
    
    string getName()const;
    string setSurname()const;
    string setFatherName()const;
    string setPosition()const;
    float setSalary()const;
    
    virtual void show()const=0;
    virtual float calc()const=0;
};

#endif /* Employee_hpp */
