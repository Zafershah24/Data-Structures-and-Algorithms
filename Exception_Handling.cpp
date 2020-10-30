#include <iostream>

using namespace std;

int main()
{
    int n,d,r;
    cout<<"Enter Numerator and Divider"<<endl;
    cin>>n>>d;
    try{
        if(d==0)
        throw d;
    r=n/d;
    cout<<"result: "<<r<<endl;
    }
    catch(int exception)
    {cout<<"Exception Caught!!"<<d<<endl;
        
    }
    
    
    return 0;
}
