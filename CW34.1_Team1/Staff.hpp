#ifndef Staff_hpp
#define Staff_hpp

#include "Employee.hpp"
using namespace std;

class Staff : public Employee{
protected:
    float premium;
    
public:
    Staff();
    Staff(string name, string surname, string fatherName, string position, float salary, float premium);
    
    void setPremium(float premium);
    float getPremium() const;
    
    void printInfo() const;
    float calcSalary() const;
};

#endif
