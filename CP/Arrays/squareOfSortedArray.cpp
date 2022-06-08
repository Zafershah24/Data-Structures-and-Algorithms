#include<bits/stdc++.h>

using namespace std;

 void Swap(int *x,int *y){
        
                  int temp = *y;
                  *y=*x;
                  *x=temp;
             
             
        
    }
  vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sqr;
         int smallest;
      for(int i=0;i<nums.size()-1;++i){
          smallest=i;
          for(int j=i+1;j<nums.size();++j)
          { if(nums[j]<nums[i]){
              smallest=j;
             Swap(&nums[i],&nums[j]);
              
          }
              }}


          
   for(int i=0;i<nums.size();i++){
       sqr.push_back(nums[i]*nums[i]);
   }
   return sqr;
    }
 

int main() {
    // Write C++ code here
   int n;
   cin>>n;
   int x;
   vector <int> v,kV;
   for(int i=0;i<n;i++){
       cin>>x;
       v.push_back(x);
   }
kV=sortedSquares(v); // function call 
for(int i=0;i<kV.size();i++) 
cout<<kV[i]<<" "; 

    return 0;
}
