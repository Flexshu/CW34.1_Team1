#include "Staff.hpp"


Staff::Staff() { 
    premium = 0;
}

Staff::Staff(string name, string surname, string fatherName, string position, float salary, float premium) : Employee(name, surname, fatherName, position, salary) {
    if (salary < 0) {
        this->salary = 0;
        throw SalaryException("salary is negative", this->name);
    }
    this->premium = premium;
}

void Staff::setPremium(float premium) { 
    this->premium = premium;
}

float Staff::getPremium() const { 
    return premium;
}

void Staff::printInfo() const { 
    cout<<"Name: "<<name<<endl
    <<"Surname: "<<surname<<endl
    <<"Father name: "<<fatherName<<endl
    <<"Position: "<<position<<endl
    <<"Salary: "<<salary<<endl
    <<"Premium: "<<premium<<endl;
}

float Staff::calcSalary() const {
    if (premium < 0) {
        throw PrizeException("prize is negative", name);
    }
    else{
        return salary + premium;
    }
}
