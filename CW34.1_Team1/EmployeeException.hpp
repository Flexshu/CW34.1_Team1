//
//  EmployeeException.hpp
//  CW34.1_Team1
//
//  Created by Valery on 21.05.2025.
//

#ifndef EmployeeException_hpp
#define EmployeeException_hpp

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class EmployeeException {
protected:
    string employeeName;

public:
    EmployeeException(const string& name) : employeeName(name) {}

    virtual string Message() const = 0;

    virtual ~EmployeeException() {}
};

#endif /* EmployeeException_hpp */
