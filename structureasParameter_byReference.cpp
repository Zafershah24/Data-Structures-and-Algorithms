**References are not Allowed in C language**

#include<iostream>
using namespace std;




struct Rectangle{

    int length;
    int breadth;
};

int area(struct Rectangle &r1)
{
    return r1.length*r1.breadth;
}

int main()
{
 struct  Rectangle r ={3,3};
// 

printf("%d",area(r));

 

}
