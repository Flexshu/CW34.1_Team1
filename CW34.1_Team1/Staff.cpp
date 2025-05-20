#include "Staff.hpp"


Staff::Staff() { 
    staff.push_back(Employee());
}

Staff::Staff(vector<Employee> staff) { 
    this->staff = staff;
}

void Staff::printInfo() const { 
    for (int i=0; i<staff.size(); i++) {
        cout<<"Hello world!\n";
    }
}

void Staff::addNewEmployee(Employee e) { 
    staff.push_back(e);
}

void Staff::deleteEmployeeByIndex(int index) { 
    staff.erase(staff.begin() + index);
}
