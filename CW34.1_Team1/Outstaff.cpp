#include "Outstaff.hpp"


Outstaff::Outstaff() { 
    workedDays = 0;
}

Outstaff::Outstaff(string name, string surname, string fatherName, string position, float salary, int workedDays) : Employee(name, surname, fatherName, position, salary) {
    if (salary < 0) {
        this->salary = 0;
        throw SalaryException("salary is negative", this->name);
    }
    this->workedDays = workedDays;
}

void Outstaff::setDaysWorked(int workedDays) { 
    this->workedDays = workedDays;
}

float Outstaff::getDaysWorked() const { 
    return workedDays;
}

void Outstaff::printInfo() const { 
    cout<<"Name: "<<name<<endl
    <<"Surname: "<<surname<<endl
    <<"Father name: "<<fatherName<<endl
    <<"Position: "<<position<<endl
    <<"Salary: "<<salary<<endl
    <<"Worked days: "<<workedDays<<endl;
}

float Outstaff::calcSalary() const { 
    return salary * workedDays / 30;
}
