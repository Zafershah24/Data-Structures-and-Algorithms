#Using POINTERS

#include<iostream>
using namespace std;




struct Rectangle{

    int length;
    int breadth;
};

void changelength(struct  Rectangle *p, int l )
{
    p->length=l;
}

int main()
{
 struct  Rectangle r ={3,3};
// 

changelength(&r,5);

printf("%d",r.length);

 

}
