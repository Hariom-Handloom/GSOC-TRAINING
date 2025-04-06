#include <iostream>
#include <cmath>
using namespace std;

// Base class: Shape
class Shape 
{
protected:
    double area, perimeter;

public:
    virtual void computeArea() =0;

    virtual void computePerimeter() =0;

    void draw() 
    { 

        cout << "Drawing a generic shape." << endl;
    }

    void display() 
    {
        cout << "Area: " << area << ", Perimeter: " << perimeter << endl;
    }
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

    void draw() 
    { 
        // Overriding draw() method
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

    void draw() 
    { 
        // Overriding draw() method
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

    void draw() 
    { 
        // Overriding draw() method
        cout << "Drawing a Rectangle." << endl;
    }
};

// Main function
int main() 
{
    Shape* shapes[3];


    shapes[0] = new Circle(5);
    shapes[1] = new Triangle (3, 4, 5);
    shapes[2] = new Rectangle (4, 6);

    for(int i=0;i<3;i++){
        shapes[i]->computeArea();
        shapes[i]->computePerimeter();
        shapes[i]->draw();
        shapes[i]->display();
    }
    
    for (int i=0;i<3;i++){
        delete shapes[i];
    }

    return 0;
}