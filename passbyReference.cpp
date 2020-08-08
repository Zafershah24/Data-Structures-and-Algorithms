#include<iostream>
using namespace std;


//REFERENCING CAN BE USED ONLY IN C++

void Swap(int &x,int &y)          //ALIASING/REFERENCING MEANS ANOTHER NAME GIVEN TO THE VARIABLE
{

    int temp ;
    temp=x;
    x=y;
    y=temp;
}
 int main()
{
int a,b;
a=22;
b=3;
Swap(a,b);
cout<<a<<" "<<b; 

}
