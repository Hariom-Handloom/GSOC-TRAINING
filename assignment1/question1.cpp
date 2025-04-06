//Create a class Shape that demonstrates encapsulation by having protected
// data members area and perimeter. Define public member functions
//trial

#include <iostream>
using namespace std;

class Shape{
    protected:
    double area,perimeter;

    public:
    void computeArea(){
        area=0;
    }

    void computePerimeter(){
        perimeter=0;
    }

    void draw(){
        cout<<"Drawing a generic shape"<<endl;
    }

    void display(){
        cout<<"Area: "<<area<<", Perimeter: "<<perimeter<<endl;
    }
};

int main(){
    Shape s;
    s.computeArea();
    s.computePerimeter();
    s.draw();
    s.display();
}
