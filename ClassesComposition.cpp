
#include <iostream>
#include<string>
using namespace std;

class DOB{
private:
    int day;
    int mon;
    int year;
public:
  DOB(int d,int m,int y);
  void print();
};
DOB::DOB(int d,int m,int y){
    day=d;
    mon=m;
    year=y;
}
void DOB::print(){
    cout<<day<<":"<<mon<<":"<<year<<endl;
}


class People{
private:
    string name;
    DOB d;
public:

    People(string x,DOB dob);
 void printinfo();
};
People::People(string x,DOB dob):name(x),d(dob){

}
void People::printinfo(){
    cout<<"Person Name is  "<<name;
    d.print();
}


int main()
{
    DOB d(2,12,1997);
    d.print();
    People zafer("zafer",d);
    zafer.printinfo();

    return 0;
}
