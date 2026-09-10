#include <iostream> 
using namespace std ;


class Add {
    public : 
        int sum(int x , int y){
            return x + y ; 
        }
        int sum(int x , int y , int z ){
            return x + y + z; 
        }
        //double add 
        double sum(double x , double y){
            return x + y ;
        }
};

class Complex{
    public : 
       int real ; 
       int imag ; 
       Complex(){
          real = imag = -1;
       }

       Complex(int r , int i ) : real(r) , imag(i){} ;
       //Ret_type operator <op> (args){
       //  return<>
       //}

       Complex operator + (const Complex &B){
        ///this -> A instance 
        Complex temp ;
        temp.real = this->real + B.real ; 
        temp.imag = this->imag + B.imag ;
        return temp ;
       }  

       bool  operator == (const Complex &B ){
        return (this->real == B.real) && (this->imag == B.imag) ;
       }

       void print(){
          printf("[%d + i%d] " , this->real , this->imag) ;
       }
};

 

int main(){
    int x = 5 , y = 5 ;
    int z = 2 ; 
    double p = 2.0 , q = 3.5 ;
    Complex A(2,5) ;
    A.print() ;
    Complex B(3,3) ;
    B.print();

    Complex C = A + B ;
    C.print();
    //Add add ; 
   // cout<<add.sum(x,y)<<'\n' ;
    //cout<<add.sum(x,y,z)<<'\n';
    //cout<<add.sum(p,q)<<'\n';
    return 0;
}
