// Q9. Modify the program to allow user input for dimensions of different shapes.
// Create objects dynamically and call the appropriate functions. How does this
// make the program more flexible?

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
    protected:
    double area,perimeter;

    public:
    virtual void draw() = 0;

    virtual void input() = 0;

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
    Circle(double r=0){
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

    void input(){
        cout<<"Enter the radius of the circle: ";
        cin>>radius;
    }
};

class Triangle: public Shape{
    private:
    double a,b,c;

    public:
    Triangle(double x=0, double y=0, double z=0){
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

    void input(){
        cout<<"Enter the sides of the triangle: ";
        cin>>a>>b>>c;
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

    void input(){
        cout<<"Enter the length and width of the rectangle: ";
        cin>>l>>w;
    }
};

class Square : public Rectangle{
    private:
    double side;

    public:
    Square(double s=0){
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

    void input(){
        cout<<"Enter the side of the square: ";
        cin>>side;
    }
};

int main(){
    Square s;
    Circle c;
    Triangle t;
    Rectangle r;


    c.input();
    c.draw();
    c.computeArea();
    c.computePerimeter();
    c.display();

    t.input();
    t.draw();
    t.computeArea();
    t.computePerimeter();
    t.display();

    r.input();
    r.draw();
    r.computeArea();
    r.computePerimeter();
    r.display();

    s.input();
    s.draw();
    s.computeArea();
    s.computePerimeter();
    s.display();

    return 0;
}