#ifndef Department_hpp
#define Department_hpp

#include <vector>
#include "Staff.hpp"
#include "Outstaff.hpp"
#include "EmployeeException.h"
using namespace std;

class Departament{
private:
    string name;
    vector<Employee*> arr;
public:
    Departament(string name){
		if(name.size() < 2) throw new NameException("Коротко(менее двух символов).", name);
        this->name = name;
    }
    void showEmployees(){
        for (int i = 0; i < arr.size(); i++){
            arr[i]->printInfo();
        }
    }
    void addEmployee(Employee* obj){
        arr.push_back(obj);
    }
    void deleteEmployeeByName(string name){
		for (int i = 0; i < arr.size(); i++){
			if(arr[i]->getName() == name){
				arr.erase(arr.begin()+i);
				break;
			}
		}
	};
    void findEmployeeByName(string name){
		for (int i = 0; i < arr.size(); i++){
			if(arr[i]->getName() == name){
				arr[i]->printInfo();
				break;
			}
		}
	};
};

#endif
