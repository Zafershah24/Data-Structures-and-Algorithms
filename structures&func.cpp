#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breath;
};

void initialize (struct Rectangle *r,int l,int b){
    r->length=l;
    r->breath=b;

}
int area(struct Rectangle r){
    return r.length*r.breath;

}
void changelength(struct Rectangle *r,int l){
     r->length =l;
}
 int main()
{
struct Rectangle r;
initialize (&r,10,5);
area(r);
changelength(&r,20);

}
