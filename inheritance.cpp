#include <iostream> 


class Dog{ //base class
    public: 
       Dog(){
       }

       void Bark(){
        std::cout<<"bark"<<'\n';
       }
       void Walk(){
         x+=1 ;
         y+=1;
       }

       float x , y ;
};

class Golden : public Dog{
    public : 
        Golden(){
            m_sticksRetrived = 0 ;
        }
        void Retrieve(){
            std::cout<<"Retrieving a stick"<<'\n';
            m_sticksRetrived++;
        }

        float m_sticksRetrived ;
};

class Husky : public Dog{

};

int main(){
    Golden dog1 ;
    dog1.Bark();
    dog1.Walk();

    Husky dog2 ;
    dog2.Bark() ;
}