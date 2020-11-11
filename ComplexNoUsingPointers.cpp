#include<iostream>
using namespace std;

class ComplexNo{
int r;
int i;
public:
    ComplexNo(){

    }
    ComplexNo(int real,int img){

        r=real;
        i=img;
    }
    void display(){
    cout<<r<<"+("<<i<<")i"<<endl<<endl;
    }
    int getr(){
    return r;
    }
    int geti(){
    return i;
    }



};


ComplexNo sub(ComplexNo n1,ComplexNo n2){
int r =n1.getr()- n2.getr();
int i =n1.geti()- n2.geti();

ComplexNo temp(r,i);
return temp;

}


int main()
{
    ComplexNo c1(1,5),c2(4,7);
    c1.display();
    c2.display();
    ComplexNo c3;
    c3=sub(c1,c2);
    c3.display();
    ComplexNo *p;
    p=&c3;
    p->display();
    return 0;
}
