#include <iostream>
using namespace std;

class Complex {
    int r,i;
    public:
        Complex(){
            
            r=0;
            i=0;
        }
        Complex(int a,int b){
           
            r=a;
            i=b;
        }
        void disp(){
            cout<<r<<"+"<<i<<"i"<<endl;
        }
        Complex operator +(Complex c ){
            Complex t;
            t.r=r+c.r;
            t.i=i+c.i;
            return t;
        }
        
        Complex operator ++(){
            Complex t;
            t.r=++r;
            t.i=++i;
            return t;
        }
         Complex operator --(){
            Complex t;
            t.r=--r;
            t.i=--i;
            return t;
        }
    
};

int main() {
    Complex c1(1,3);
    Complex c2(5,-6);
    Complex c3;
    c3=c1+c2;
    c3.disp();
    ++c3;
    c3.disp();
    Complex c4;
    c4=--c3;
    c4.disp();
    

    return 0;
}
