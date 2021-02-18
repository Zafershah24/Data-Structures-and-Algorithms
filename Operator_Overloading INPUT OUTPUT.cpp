#include <iostream>
#include<string>
using namespace std;

class Employee{
   private:
   string name;
   int eid;
   public:
  friend void operator >>(istream &input,Employee &e){
      cout<<"Enter Emp name & ID";
     input>>e.name>>e.eid;
   }
   friend void operator <<(ostream &output,Employee &e){
     
     output<<"Emp name :"<<e.name<<endl;
  output<<"Emp ID :"<<e.eid<<endl;  
   }
};


int main()
{
 Employee e1;
 cin>>e1;
 cout<<e1;

    return 0;
}
