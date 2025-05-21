#include "Departament.h"


int main() {
    Staff yehor("Yehor", "Kovalenko", "Dmytrovych", "team leader", 1000.1, 500.5);
    Outstaff yevhen("Yevhen", "Ponomarenko", "Stanislavovych", "VS code developer", 750, 2);
    Staff valeria("Valeria", "Holovina", "Andriyivna", "leader's helper", 900.99, 99.01);
    Departament team("Team 1");
    
    team.addEmployee(&yehor);
    team.addEmployee(&valeria);
    team.addEmployee(&yevhen);
    
    team.showEmployees();
    cout<<"———————————————————————————————\n";
    team.findEmployeeByName("Valeria");
    cout<<"———————————————————————————————\n";
    team.deleteEmployeeByName("Yevhen");
    team.showEmployees();
    cout<<"———————————————————————————————\n";
    team.addEmployee(&yevhen);
    
    try{
        Staff outsider("Biba", "Abobenko", "Bobovych", "random noob", -10, 10);
    }
    catch (const SalaryException& e){
        cout<<e.showMessage()<<endl;
    }
    
    try{
        Staff outsider("Biba", "Abobenko", "Bobovych", "random noob", 10, -10);
        int s = outsider.calcSalary();
        cout<<"Result: "<<s<<endl;
    }
    catch (const PrizeException& e){
        cout<<e.showMessage()<<endl;
    }
    
    return 0;
}
