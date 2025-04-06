#include <iostream>
#include <cmath>
using namespace std;

// Abstract Base class: Shape
class Shape 
{
protected:
    double area, perimeter;

public:
    // Pure virtual functions
    virtual void computeArea() = 0;
    virtual void computePerimeter() = 0;
    
    virtual void draw() 
    { 
        cout << "Drawing a generic shape." << endl;
    }

    void display() 
    {
        cout << "Area: " << area << ", Perimeter: " << perimeter << endl;
    }
    
    // Virtual destructor
    virtual ~Shape() {}
};

// Derived class: Circle
class Circle : public Shape
{
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    void computeArea() override
    {
        area = M_PI * radius * radius;
    }

    void computePerimeter() override
    {
        perimeter = 2 * M_PI * radius;
    }

    void draw() override
    { 
        cout << "Drawing a Circle." << endl;
    }
};

// Derived class: Triangle
class Triangle : public Shape 
{
    double a, b, c;

public:
    Triangle(double x, double y, double z) 
    {
        a = x;
        b = y;
        c = z;
    }

    void computeArea() override
    {
        double s = (a + b + c) / 2; // Semi-perimeter
        area = sqrt(s * (s - a) * (s - b) * (s - c));
    }

    void computePerimeter() override
    {
        perimeter = a + b + c;
    }

    void draw() override
    { 
        cout << "Drawing a Triangle." << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape 
{
    double length, width;

public:
    Rectangle(double l, double w) 
    {
        length = l;
        width = w;
    }

    void computeArea() override
    {
        area = length * width;
    }

    void computePerimeter() override
    {
        perimeter = 2 * (length + width);
    }

    void draw() override
    { 
        cout << "Drawing a Rectangle." << endl;
    }
};

// Main function
int main() 
{
    Circle c(5);
    Triangle t(3, 4, 5);
    Rectangle r(4, 6);
    
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