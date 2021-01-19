#include <iostream>
using namespace std;
template <typename t>
t add (t a, t b){
    return a+b;
}


int main() {
    cout<<add<float>(3.4f,7.6f)<<endl;
    cout<<add<double>(3.43,7.44)<<endl;
    cout<<add<int>(3,7)<<endl;
    return 0;
}


////////////////////////
#include <iostream>
#include<string>
using namespace std;

template <class t>
t add(t a,t b)
{return a+b;
    
}

int main() {
cout<<add(8,9);

}
