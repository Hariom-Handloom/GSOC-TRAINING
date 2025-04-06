// Q3. Create a class Triangle that is derived from Shape. Implement a constructor
// that takes three sides as arguments. Override the computeArea() function using
// Heron&#39;s formula and implement the computePerimeter() function. Why is it
// necessary to override these functions instead of using the base class
// implementation?

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

class Triangle:public Shape{
    private:
    double a,b,c;

    public:
    Triangle (double x,double y,double z){
        a=x;
        b=y;
        c=z;
    }

    void computeArea(){
        double s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
    }

    void computePerimeter(){
        perimeter=a+b+c;
    }

    void draw(){
        cout<<"Drawing a triangle"<<endl;
    }
};

int main(){
    Triangle t(3,4,5);

    t.draw();
    t.computeArea();
    t.computePerimeter();
    t.display();
}