#include<stdio.h>

struct Rectangle{

    int length;
    int breadth;
};
int main()
{
 struct  Rectangle *p;

 p=(struct Rectangle *)malloc( sizeof(struct Rectangle));


 
p->length =5;
p->breadth=5;

printf("%d",p->length*p->breadth);

 

}
