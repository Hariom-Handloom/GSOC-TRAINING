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
    private:
    double l,w;

    public:
    Rectangle (double x, double y){
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

int main(){
    Circle c(5);
    Triangle t(3,4,5);
    Rectangle r(4,5);

    c.draw();
    c.computeArea();
    c.computePerimeter();
    c.display();

    t.draw();
    t.computeArea();
    t.computePerimeter();
    t.display();

    r.draw();
    r.computeArea();
    r.computePerimeter();
    r.display();

    return 0;
}