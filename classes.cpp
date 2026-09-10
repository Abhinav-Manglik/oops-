#include <iostream>
#include <string>
#include "student.hpp"

student::student() {
    m_name = "no_name" ;
    std::cout<<"constructor"<<'\n';
    std::cout<<"m_name is "<<m_name<<'\n';
}
student::student(std::string name) {
    m_name = name ;
    std::cout<<"constructor"<<'\n';
    std::cout<<"m_name is "<<m_name<<'\n';
}

student::~student(){
    std::cout<<"Destructor"<<'\n';
}

void student::printName(){
    std::cout<<"name is "<<m_name<<'\n';
}
