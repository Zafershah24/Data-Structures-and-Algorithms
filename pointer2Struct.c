#include<stdio.h>

struct Rectangle{

    int length;
    int breadth;
};
int main()
{
 struct  Rectangle r ={3,13};
struct Rectangle *p=&r;
r.length=4;
p->length =5;

printf("%d",r.length*r.breadth);

 

}
