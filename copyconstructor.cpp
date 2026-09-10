#include <iostream> 
#include <string> 
class vector3{
    public : 
       float x, y , z ; 
} ;

class array{
    public : 
       array(){
        data  = new int[10] ;
        for(int i = 0 ;i<10;i++){
            data[i]  = i*i ;
        }
       }
       ~array(){
        delete[] data ;
       }
       //copy constructor 
       array(const array& rhs){
         std::cout<<"copy constructor"<<'\n' ;
         data = new int[10] ;
         for(int i = 0 ;i<10;i++){
            data[i] = rhs.data[i];
         }
       }
       //copy assignment oerator
       //object is already constructed , we are just 
       //making a copy later (e.g. myArray2 = myArray)

       array& operator = (const array& rhs){
            std::cout<<"Copy assignment"<<'\n';
            if(&rhs == this){
                return *this ;
            }
            delete[] data ;
            data = new int[10];
            for(int i = 0 ;i<10 ;i++){
                data[i] = rhs.data[i];
            } 

            return *this ;
       }

       void printData(){
        for(int i = 0 ;i<10 ;i++){
            std::cout<<data[i] << '\n';
        }
       }
       void SetData(int index , int value){
        data[index] = value ;
       }
    private :
        int* data ;    
};
int main(){
    array myArray ; 
    myArray.SetData(0,100000) ;
    myArray.SetData(1,99);
    array myArray2;
    myArray2 = myArray ;
    myArray.printData() ;
    myArray2.printData() ;

    return 0 ;
}