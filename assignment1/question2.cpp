// Q2. Create a class Circle that is derived from Shape. Implement its constructor
// and override the computeArea(), computePerimeter(), and draw() functions. How
// does this class demonstrate inheritance?

#include <iostream>
#include <cmath>
using namespace std;

class Shape{
    protected:
    double area, perimeter;

    public:
    void draw(){
        cout<<"Drwaing a generic shape"<<endl;
    }
    
    void computeArea(){
        area=0;
    }

    void computePerimeter(){
        perimeter=0;
    }

    void display(){
        cout<<"Area: "<<area<<", Perimeter: "<<perimeter<<endl;
    }
};

class Circle : public Shape{
    private:
    double radius;

    public:
    Circle(double r){
        radius=r;
    }

    void computeArea(){
        area=M_PI*radius*radius;
    }

    void computePerimeter(){
        perimeter=2*M_PI*radius;
    }

    void draw(){
        cout<<"Drawing a circle"<<endl;
    }
};

int main(){
    Circle c(5);

    c.draw();
    c.computeArea();
    c.computePerimeter();
    c.display();
}