#ifndef Outstaff_hpp
#define Outstaff_hpp

#include "Employee.hpp"
using namespace std;

class Outstaff : public Employee{
protected:
    int workedDays;
    
public:
    Outstaff();
    Outstaff(string name, string surname, string fatherName, string position, float salary, int workedDays);
    
    void setDaysWorked(int workedDays);
    float getDaysWorked() const;
    
    void printInfo() const;
    float calcSalary() const;
};

#endif
