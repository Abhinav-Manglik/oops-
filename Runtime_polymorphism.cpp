#include <iostream> 
using namespace std  ; 


class Shape {
    public : 
        virtual void draw(){
        cout<<"generic Drawing.."<<'\n'; 
       }
};


class circle : public Shape
{
    public : 
       void draw() override {
        cout<<"circle drawing.."<<'\n' ;
       }      
};
class rectangle : public Shape
{
    public : 
       void draw() override {
        cout<<"rectangle drawing.."<<'\n' ;
       }      
};


void shapeDrawing(Shape *s){
    s->draw() ; //draw is polymorphic 
}
int main(){
    circle c ;
    rectangle r ; 
    //upcasting
    shapeDrawing(&c) ; 
    shapeDrawing(&r) ;

    // without virtual keyword 
    
    return 0 ;
}