#ifndef Staff_hpp
#define Staff_hpp

#include <iostream>
#include <vector>
#include <string>
#include "Employee.hpp"
using namespace std;

class Staff{
    vector<Employee> staff;
    
public:
    Staff();
    Staff(vector<Employee> staff);
    
    void printInfo() const;
    
    void addNewEmployee(Employee e);
    void deleteEmployeeByIndex(int index);
};

#endif
