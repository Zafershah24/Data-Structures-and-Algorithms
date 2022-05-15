#include<bits/stdc++.h>

using namespace std;
int Fun(vector<string> v,int i,string s){

//base case
	if(i==v.size()){
		int frq[26]={0};
		for (int k = 0; k < s.length(); ++k)
		{
			if(frq[s[k]-'a']==1)return 0;
			frq[s[k]-'a']++;
		}
return s.length();




	}






//recursive case

int op1;
int op2;
op1=op2=INT_MIN;
if(s.length()+v[i].length()<=26){
	op1=Fun(v,i+1,v[i]+s);
}
	op2=Fun(v,i+1,s);

	return max(op1,op2);




}

int maxUniqStrLen(vector<string> v){
	string s="";
	return Fun(v,0,s);

}


int main()
{ 	vector<string> v;
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{ string x;
		cin>>x;
		v.push_back(x);
	}


	cout<<maxUniqStrLen(v);
	return 0;
}
