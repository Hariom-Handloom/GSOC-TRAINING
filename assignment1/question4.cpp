// Q4. Create a class Rectangle that inherits from Shape. Implement its constructor
// and override the computeArea(), computePerimeter(), and draw() functions. How
// does function overriding work in this example?

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

class Rectangle : public Shape{
    private:
    double length,breadth;

    public:
    Rectangle(double l, double b){
        length=l;
        breadth=b;
    }

    void draw(){
        cout<<"Drawing a rectangle with length "<<length<<" and breadth "<<breadth<<endl;
    }

    void computeArea(){
        area=length*breadth;
    }

    void computePerimeter(){
        perimeter=2*(length+breadth);
    }

};

int main(){
    Rectangle r(4,5);

    r.draw();
    r.computeArea();
    r.computePerimeter();
    r.display();
}