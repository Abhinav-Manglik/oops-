#include<iostream> 
#include<string>
#include<bits/stdc++.h>
using namespace std ;
class base {
    public : 
        base(){
            std::cout<<"base constructor"<<'\n';
        }
        ~base(){
            std::cout<<"base destructor"<<'\n';
        }
    public : 
       int m_base_public ;
    protected:
        int m_base_protected ;
    private : 
        int m_base_private ;
};

class derived : public  base{
    public : 
        derived(){
            std::cout<<"derived constructor"<<'\n';
            m_base_protected = 77 ;
        }
        ~derived(){
            std::cout<<"derived destructor"<<'\n';
        }
};

class vehicle { 
    public : 
        std::string name ;
        std::string model ;
        int nooftyres;
        vehicle(string name , string model , int nooftyres){
            cout<<"I am inside vehicle cstr"<<'\n';
            this->name = name ; 
            this->model = model ;
            this->nooftyres = nooftyres ;
        }
    public : 
        void start_E(){
            std :: cout<<"engine is startin"<<name<<model<<'\n';

        } 
        void stop_E(){
            std::cout<<"engine is stopping"<<'\n';
        }
        ~vehicle(){
            cout<<"i am inside vehicle dtor"<<'\n';
        }
};
class car : public vehicle { 
    public : 
       int noofdoors ; 
       string transmissionType ;
       car(string name , string model , int nooftyres , int noofdoors , string transmissionType) : vehicle(name , model , nooftyres){
         cout<<"derived cstr"<<'\n';
         this->noofdoors = noofdoors;
         this->transmissionType = transmissionType;
       }
       void StartAC(){
         cout << "AC has started "<< name <<'\n';
       }
       ~car(){
        cout<<"i am inside car dtor"<<'\n';
       }
};

class Motorcycle : public vehicle{
    protected : 
       std :: string handlebarstyle ; 
       std :: string suspensiontype ;
    public : 
       Motorcycle(string _name , string _model , int _nooftyres , string _handlebarstyle , string _suspensionType) : vehicle(_name , _model , _nooftyres){
        cout<<"Motorcycle cstr called"<<'\n';
         this->handlebarstyle = _handlebarstyle ; 
         this->suspensiontype = _suspensionType ;
       };
       void wheelie(){
        cout<<"wheelie kar rhi hai"<<'\n';
       }
       ~Motorcycle(){
        cout<<"I am inside motorcycle dtor"<<'\n';
       }
};

int main(){
    car A("Maruti" ,"LXI" , 4 , 4  , "Manual");
    A.StartAC() ;
    Motorcycle M("BMW" , "350" , 2 , "U" , "Hard") ;
    M.wheelie() ;
    return 0 ;
}