#include <iostream>
using namespace std;


class Base {
    public:
   virtual void show(){
        cout<<"Base Class Called"<<endl;
    }
};

class D1:public Base {
    public:
    void show(){
        cout<<"D1 Class Called"<<endl;
    }
};
class D2:public Base {
    public:
    void show(){
        cout<<"D2 Class Called"<<endl;
    }
};

int main() {
    // Write C++ code here
    Base *b;
    D1 d1;
    b=&d1;
    b->show();
    D2 d2;
    b=&d2;
    b->show();

    return 0;
}



/******************************************************************************
Virtual Functions
CALL SAME FUNCTIONS BUT HAVE DIFFERENT RESULTS

*******************************************************************************/

#include <iostream>
#include<string>
using namespace std;

class Enemy{
   
public:

virtual void attaccPower(){};
};

class Ninja:public Enemy{
public:
 void attaccPower(){
     cout<<"Ninja Chops -"<<endl;
 }
};

class Monster:public Enemy{
public:
  void attaccPower(){
     cout<<"Monster Eats -"<<endl;
 }
};

int main() {
Ninja n;
Monster m;
Enemy *e1;
Enemy *e2;
e1=&n;;
e2=&m;
e1->attaccPower();
e2->attaccPower();

}
