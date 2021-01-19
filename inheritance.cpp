#include <iostream>
#include<string>
using namespace std;

class Mother {
public:
void dispName(){
    
    cout<<"Robinson"<<endl;
}
};

class Daughter:public Mother{
    
};

int main() {
  Daughter hannah;
  hannah.dispName();

    return 0;
}
