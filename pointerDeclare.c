#include<stdio.h>

void main()
{
    int a=10; //variable declaration
    int *p;  //pointer declaration
    p=&a;  //holds the address of a
    printf("%d \n",a);
    printf("%d",*p); //deferancing of pointer 

    q=(int*)malloc(5*sizeof(int));  //pointer refercing for heap memory in C program
    q=new int[7]; //pointer refercing for heap memory in C++ program

}
