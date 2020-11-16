#include <iostream>
using namespace std;

int BS(int arr[],int left,int right,int x)
{
 while (left <= right) {
    int mid = left + (right - left) / 2;
 
    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
 
  return -1;
}

int main() {

int *ptr;
int s;
cout<<"enter the size of your array Dynamically"<<endl;
cin>>s;
ptr= new int[s];
cout << "Enter the elements of your array"<<endl;
for (int i=0;i<s;i++)
cin>>ptr[i];


cout<<"Your Elements are: "<<endl;
for (int i=0;i<s;i++)
cout<<ptr[i]<<endl;
int n;
cout<<"enter the value you want to search for"<<endl;
cin>>n;


int output=BS(ptr,0,s-1,n);

if (output == -1) {
    cout << "No Match Found" << endl;
  } else {
    cout << "Match found at position: " << output << endl;
  }
delete [] ptr;

return 0;
}
