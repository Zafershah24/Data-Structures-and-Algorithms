/******************************************************************************
A CLASS CONTAINING PURE VIRTUAL FUNCTION IS AN ABSTRACT CLASS

*******************************************************************************/

#include <iostream>
using namespace std;


class Shape {
    public:
   virtual void area()=0;
};

class Circle:public Shape{
    int r;
    public:
    void area(){
       cout<<"Enter Value of R"<<endl;
       cin>>r;
       cout<<"Area of the Circle : "<<3.14*r*r<<endl;
   }
};
class Rectangle:public Shape {
       int l,b;
    public:
    void area(){
       cout<<"Enter Value of Length and Breadth"<<endl;
       cin>>l>>b;
       cout<<"Area of the Rectangle : "<<l*b<<endl;
   }
};

int main() {
    // Write C++ code here
    Shape *s;
    Circle c;
    s=&c;;
    s->area();
    Rectangle r;
    s=&r;
    s->area();

    return 0;
}
