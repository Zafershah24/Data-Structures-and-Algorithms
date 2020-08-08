#include<stdio.h>

void Swap(int x,int y){

    int temp ;
    temp=x;
    x=y;
    y=temp;
}
 int main()
{
int a,b;
a=12;
b=3;
Swap(a,b);
printf("%d  %d",a,b); //values are not changed as actual parameters are not affected by formal parameters
 

}
