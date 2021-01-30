#include <iostream>

using namespace std;
void swap(int *x,int *y){
    
   
    int temp=*x;
    *x=*y;
    *y=temp;
    
}
void SelectionSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for (int j=i+1;j<n;j++)
        {
            
            if(a[j]<a[min])
            {
            min=j;    
            }
        }
        if(min!=i)
        {
            swap(&a[i],&a[min]);
        }
    }
    
}

int main()
{
    cout<<"enter 5 integers in random order"<<endl;
    int a[5];
    int n = sizeof(a)/sizeof(a[0]);
    for (int i=0; i<n;i++)
    cin>>a[i];
    
    SelectionSort(a,n);
    for (int i=0; i<n;i++)
    cout<<a[i]<< " ";

    return 0;
}
