/******************************************************************************
POLYMORPHISM

*******************************************************************************/

#include <iostream>
#include<string>
using namespace std;

class Enemy{
   
public:
 int p;
void attaccPower(int a){
    p=a;
}
};

class Ninja:public Enemy{
public:
 void attacked(){
     cout<<"Ninja Chops -"<<p<<endl;
 }
};

class Monster:public Enemy{
public:
  void attacked(){
     cout<<"Monster Eats -"<<p<<endl;
 }
};

int main() {
Ninja n;
Monster m;
Enemy *e1;
Enemy *e2;
e1=&n;
e2=&m;
e1->attaccPower(10);  // CAVEAT 
e2->attaccPower(55);      // CAVEAT 
n.attacked();
m.attacked();
}
