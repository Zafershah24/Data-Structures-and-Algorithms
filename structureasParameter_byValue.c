#include<stdio.h>

struct Rectangle{

    int length;
    int breadth;
};

int area(struct Rectangle r1)
{
    return r1.length*r1.breadth;
}


int main()
{
 struct  Rectangle r ={3,13};
// 

printf("%d",area(r));

 

}

