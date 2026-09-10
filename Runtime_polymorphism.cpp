#include <iostream> 
using namespace std  ; 


class Shape {
    public : 
       void draw(){
        cout<<"generic Drawing.."<<'\n'; 
       }
};


class circle : public Shape
{
    public : 
       void draw(){
        cout<<"circle drawing.."<<'\n' ;
       }      
};
class rectangle : public Shape
{
    public : 
       void draw(){
        cout<<"rectangle drawing.."<<'\n' ;
       }      
};


void shapeDrawing(Shape *s){
    s->draw() ;
}
int main(){
    circle c ;
    rectangle r ; 
    //upcasting
    shapeDrawing(&c) ; 
    shapeDrawing(&r) ;
    return 0 ;
}