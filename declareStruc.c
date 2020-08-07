#include<stdio.h>

struct Rectangle
{
	int length;
	int breadth;
};

int main()
{
	struct Rectangle r={10,5};
	printf("area of rectangle is %d",r.length*r.breadth);
}
