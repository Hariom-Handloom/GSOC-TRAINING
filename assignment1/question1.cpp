//Create a class Shape that demonstrates encapsulation by having protected
// data members area and perimeter. Define public member functions
// computeArea(), computePerimeter(), and draw() in this class. Why are area and
// perimeter kept as protected members instead of public?

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