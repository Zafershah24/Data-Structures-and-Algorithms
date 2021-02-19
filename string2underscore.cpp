#include <iostream> 
#include <string> 
#include <algorithm>
using namespace std; 

class Read
{
    public:
    string str;
    
    
    Read(string text)
    {
        str=text;
    }
    string spacetounderscore(){
    replace(str.begin(), str.end(),' ','_');
    return str;
    } 
};


int main() 
{ 
    Read s("You are a good boy");

    
    cout<<s.spacetounderscore()<<endl;
    return 0;
    
    
}
