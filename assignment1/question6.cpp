// Q6. Add a new class Square, which is derived from Shape. Implement the
// computeArea(), computePerimeter(), and draw() functions for this class. How
// does adding this class reinforce the concept of inheritance?

// Q5. Modify the main() function to create objects of Circle, Triangle, and
// Rectangle. Call their respective draw(), computeArea(), computePerimeter(), and
// display() functions. How does polymorphism allow different objects to call the
// same function but produce different outputs?

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
    protected:
    double area,perimeter;

    public:
    void draw(){
        cout<<"Drawing a generic shape"<<endl;
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

class Circle: public Shape{
    private:
    double radius;

    public:
    Circle(double r){
        radius=r;
    }

    void draw(){
        cout<<"Drawing a circle"<<endl;
    }

    void computeArea(){
        area=M_PI*radius*radius;
    }

    void computePerimeter(){
        perimeter=2*M_PI*radius;
    }
};

class Triangle: public Shape{
    private:
    double a,b,c;

    public:
    Triangle(double x, double y, double z){
        a=x;
        b=y;
        c=z;
    }

    void draw(){
        cout<<"Drawing a triangle"<<endl;
    }

    void computeArea(){
        double s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
    }

    void computePerimeter(){
        perimeter=a+b+c;
    }
};

class Rectangle: public Shape{
    protected:
    double l,w;

    public:
    Rectangle (double x=0, double y=0){
        l=x;
        w=y;
    }

    void draw(){
        cout<<"Drawing a rectangle"<<endl;
    }

    void computeArea(){
        area=l*w;
    }

    void computePerimeter(){
        perimeter=2*(l+w);
    }
};

class Square : public Rectangle{
    private:
    double side;

    public:
    Square(double s){
        side = s;
    }

    void computeArea(){
        area=side*side;
    }

    void computePerimeter(){
        perimeter=4*side;
    }

    void draw(){
        cout<<"Drawing a square"<<endl;
    }
};

int main(){
    Square s(6);

    s.draw();
    s.computeArea();
    s.computePerimeter();
    s.display();

    return 0;
}