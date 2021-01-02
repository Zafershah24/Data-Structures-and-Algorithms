#include <iostream>
using namespace std;
void printNum(int a){
    cout<<a<<endl;
}
void printNum(float b){
    cout<<b<<endl;
}
void printNum(double b){
    cout<<b<<endl;
}
int main() {
    int a =56;
    float b=67.899;
    double x=23.3;
  printNum(a);
  printNum(b);
  printNum(x);
    return 0;
}
