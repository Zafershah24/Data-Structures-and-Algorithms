
#include <iostream>

using namespace std;



class Bun{
private:
    int regVar;
    const int consVar;
public:
   Bun(int a,int b);
   void print();
};
 Bun::Bun(int a,int b):regVar(a),consVar(b){
    cout<<"Reg Var is "<<regVar<<" \nConst Var is "<<consVar<<endl;
    
}

void Bun::print(){                              
     cout<<"Reg Var is "<<regVar<<" \nConst Var is "<<consVar<<endl;
    
}
int main()
{
    Bun b1(3,6);
    b1.print();
    
    return 0;
}
