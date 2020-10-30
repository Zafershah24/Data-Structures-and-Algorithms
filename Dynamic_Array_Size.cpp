#include <iostream>

using namespace std;

int main()
{
    int *ptr;
    int n;
    
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    ptr=new int[n];
    cout<<"enter the size of your array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ptr[i];
        
    }
    cout<<"Values of your array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ptr[i];
        
    }
    return 0;
}
