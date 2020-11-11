#include <iostream>

using namespace std;

int main()
{
    int *ptr;
    int n;
    
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    ptr=new int[n];
    cout<<"enter the values of your array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ptr[i];
        
    }
    cout<<"Values of your array"<<endl;
      for(int i=0;i<n;i++)
    {
        cout<<ptr[i]<<endl;
        
    }
    
    
    delete[] ptr; //to release your memory
    
    return 0;
}
