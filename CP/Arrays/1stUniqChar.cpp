#include<bits/stdc++.h>
using namespace std;


// int UniqueStr(v);


    int firstUniqChar(string s) {
        int freq[26]={0};
        for(int i=0;i<s.length();++i){
            freq[s[i]-'a']++;

            
            
        }
        // for(int i=0;i<s.length();++i)
        // {
      
        // }
            for(int i=0;i<s.length();++i){
              if(freq[s[i]-'a']==1)
                return i;}
              return -1;
    }

main(){
// vector<string> v;
// int n;
string x;

cin>>x;
cout<<firstUniqChar(x);



}

// int UniqueStr(vector v){			



// string s="";

// Fun(v,s);




// }

// Fun(vector c, string s){ 
// 	if(c[i]+s<=26){
    
		
// 	}

// }
