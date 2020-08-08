#include<stdio.h>

void Swap(int *x,int *y)  //x & y stores the addresses of a & b
{               

    int temp ;
    temp=*x;                //*x is used in order to refer back to value of a , instead of address of a
    *x=*y;
    *y=temp;
}
 int main()
{
int a,b;
a=12;
b=3;
Swap(&a,&b);  //returns adrees of a & b
printf("%d  %d",a,b); //values are changed as actual parameters are  affected by formal parameters
 

}
