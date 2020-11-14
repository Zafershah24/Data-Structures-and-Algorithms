
#include<iostream>
using namespace std;

LS(int a[],int n){
   int temp=-1;
for (int i=0;i<sizeof(a);i++)

{

 {if(a[i]==n)
cout<<"Element found at pos "<<i+1<<endl;
temp=0;
}
}
if (temp=-1) cout<<"element not found"<<endl;



}



int main(){
int *a;
int s;
int n;
cout<<"Enter the size of your array"<<endl;
cin>>s;
a=new int[s];
cout<<"Enter the values for the array"<<endl;
for (int i=0;i<s;i++){
   cin>> a[i];
}

cout<<"Enter the value you want to Search for"<<endl;
cin>>n;

LS(a,n);

}
