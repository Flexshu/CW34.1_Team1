#include "Staff.hpp"

int main() {
    Staff s;
    Employee e;
    
    s.addNewEmployee(e);
    s.addNewEmployee(e);
    s.printInfo();
    cout<<endl;
    
    s.deleteEmployeeByIndex(0);
    s.printInfo();
    cout<<endl;
    
    return 0;
}
