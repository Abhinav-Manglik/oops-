#include <iostream>
#include <vector> 
using namespace std ; 

//Association 
class paymentGateway{
    public : 
       void processPayment(double amount){
        cout<<"Processing payment of $" <<amount<<'\n';
       }
};

class order {
    paymentGateway* gateway ;

    public : 
       order(paymentGateway * gateway){
          this->gateway = gateway ; 

       }
       void checkout(){
        gateway-> processPayment(100.0) ;
       }
};

//bidirectional 

class Developer { 
    private : 
      Team* team ; 
    public :
        void setTeam(Team* team){
            this->team = team ;
        } 
};

class Team{
    vector<Developer*> developer ; 
    public : 
       void addDeveloper(Developer* dev){
        developer.push_back(dev) ;
        dev->setTeam(this) ;
       }
};

//many to many
class Group ;  
class User {
    private:
      string name ; 
      vector<Group*> groups ;
    public : 
       User(const string& name) :  name(name){} 
       void joingroup(Group* group){} 
       string getName() const {return name ;}
       vector<Group*> getGroups() const {return groups ;} 
};


class Group{
    private:
      string name ; 
      vector<User*> users ; 
    public : 
       Group(const string& name) : name(name){}
       void addUser(User* user){
        for(auto u : users) if (u== user) return ;
        users.push_back(user) ;
        user->joingroup(this) ; 
       }
       string getName() const {return name ;}
       vector<User*> getUsers() const {return users ;}
};


void User:: joingroup(Group* group){
    for(auto g : groups) if (g==group) return ;
    groups.push_back(group) ;
    group->addUser(this) ;
}