
#include <iostream>

using namespace std;



class Bun{
    
    public:
    void func1();
    void func2() const;
};
void Bun::func1(){
    cout<<"thisd is a normal func"<<endl;
    
}
void Bun::func2() const{                                //Constant Object declaration
    cout<<"thisd is a const func"<<endl;
    
}
int main()
{
    Bun b1;
    Bun *b;  //Pointer to Object
    b=&b1;
    b->func1();
    const Bun b2; //Constant Object
    b2.func2();

    return 0;
}
