#ifndef STUDENT_HPP
#define STUDENT_HPP 

#include <string>

class student {
public:
    student() ;
    student(std::string name) ;
    ~student() ;

    void printName() ;
public:
    std::string m_name;
};


#endif