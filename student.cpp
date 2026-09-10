#include<iostream> 
#include"student.hpp"

int main() {
    //instance of a student 
    // i.e. (an object)
    std :: cout << "Program Starts"<<'\n';
    
        student mike ; 
        mike.m_name = "mike s";
        mike.printName() ;


    std :: cout<<"Program Ends"<<'\n';
    return 0;
}