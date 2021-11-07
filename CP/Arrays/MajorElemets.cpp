#include <iostream>
#include<vector>

using namespace std;

vector<int> findMajority(vector<int> v);
int main()
{
    vector<int> v;
    int x,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
        
        
    }


vector<int> ans;
ans=findMajority(v);
if(ans.size()==0)
cout<<"No major element";
else{
for (int i=0;i<ans.size();i++){
cout<<ans[i];
}
}
    return 0;
}


vector<int> findMajority(vector<int> v){
    int e1=v[0];
    int e2=0;
    int c1=0;
    int c2=0;
    for (int i=1;i<v.size();i++){
    if(v[i]==e1){
        c1++;
    }
    else if(v[i]==e2){
        c2++;
    }
    else if(c1==0){
        e1=v[i];
        c1=1;
    }
    else if(c2==0){
        e2=v[i];
        c2=1;
    } 
    else {
        c1--;
        c2--;
    }
    }
    
    c1=c2=0;
    vector<int> ans;

for(int i=0;i<v.size();i++){
    if(v[i]==e1)c1++;
    else if(v[i]==e2)c2++;
    
}    
if (c1>v.size()/3)ans.push_back(e1);
  if (c2>v.size()/3)  ans.push_back(e2);
    
    return ans;
        
   
    
    
}
