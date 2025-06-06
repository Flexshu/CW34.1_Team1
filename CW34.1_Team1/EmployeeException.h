#ifndef EmployeeException_hpp
#define EmployeeException_hpp

#include <iostream>
#include <string>
using namespace std;

class EmployeeException{
protected:
    string text;
public:
    EmployeeException(string utext){text = utext;};
    virtual ~EmployeeException(){};
    virtual string showMessage()const = 0;
};

class NameException : public EmployeeException{
private:
    string name;
public:
    NameException(string utext, string uname) : EmployeeException(utext){
        name = uname;
    }
    string showMessage()const{
        return "NameException ( " + name + " ) " + text;
    }
};

class PrizeException : public EmployeeException{
private:
    string name;
public:
    PrizeException(string utext, string uname) : EmployeeException(utext){
        name = uname;
    }
    string showMessage()const{
        return "PrizeException ( " + name + " ) " + text;
    }
};

class SalaryException : public EmployeeException{
private:
    string name;
public:
    SalaryException(string utext, string uname) : EmployeeException(utext){
        name = uname;
    }
    string showMessage()const{
        return "SalaryException ( " + name + " ) " + text;
    }
};

#endif
