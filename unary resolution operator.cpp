#include <iostream>
using namespace std;

int x=56;
int main() {
    int x=90;
    cout << x<<endl;
    cout << ::x<<endl; // unary scope operator to access global variable

    return 0;
}
