//write a program using the cocept of OOPs (encapsulaton) and (abstraction) to bulid a class 'Complex'in which you have to define the following methods: 1)add 2)subtract 3)multiply 4)input 5)display and two data members that can be accessed only wothin the class (real and imag).

#include <iostream>
using namespace std;

class Complex{
    private:
    double real,imag;

    public:
    // Complex (double r = 0, double i = 0):real(r),imag(i){
    //     cout<<"Complex Number Created"<<endl;
    // }

    //Default Constructor:
    Complex(){
        cout<<"Default constructor called for "<<real<<"+"<<imag<<"i"<<endl;
    }

    //Parameterized Constructor:
    Complex (double r,double i){
        real=r;
        imag=i;
        cout<<"Parameterized constructor called for "<<real<<"+"<<imag<<"i"<<endl;
    }

    //Copy Constructor:
    Complex (Complex &c):real(c.real),imag(c.imag){
        cout<<"Copy constructor called for "<<real<<"+"<<imag<<"i"<<endl;
    }

    ~Complex(){
        cout<<"Destructor called for "<<real<<"+"<<imag<<"i"<<endl;
    }

    void input(){
        cout<<"Enter the real and imaginary part of the number: "<<endl;
        cin>>real>>imag;
    }

    void display(){
        if (imag>=0){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
        else{
            cout<<real<<imag<<"i"<<endl;
        }
    }

    Complex add(Complex c){
        Complex result;
        result.real = real+c.real;
        result.imag = imag+c.imag;
        return result;
    }

    Complex subtract (Complex c){
        Complex result;
        result.real = real-c.real;
        result.imag = imag-c.imag;
        return result;   
    }

    Complex multiply(Complex c){
        Complex result;
        result.real = real*c.imag - imag * c.real;
        result.imag = real*c.real + imag * c.imag;
        return result;
    }
};

int main(){
    Complex c1,c2,result;
    Complex c3(5,6);
    // Complex c4 = c3;
    Complex c4(c3);

    cout<<"Enter the first complex number: "<<endl;
    c1.input();

    cout<<"Enter the second complex number: "<<endl;
    c2.input();

    result = c1.add(c2);
    cout<<"Addition: ";
    result.display();

    result = c3.add(c4);
    cout<<"Addition of copy and parametrized constructor: ";
    result.display();

    result = c1.subtract(c2);
    cout<<"Subtraction: ";
    result.display();

    result = c1.multiply(c2);
    cout<<"Multiplication: ";
    result.display();

    return 0;
}