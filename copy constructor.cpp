#include <iostream>
using namespace std;
class VECTOR{
    private:
    int x,y,z;
    public:
    //PARAMETIRIZED CONSTRUCTOR
    VECTOR(int a,int b, int c){
        x=a;
        y=b;
        z=c;
    }
    //COPY Constructor
    VECTOR(const VECTOR &v){
        x=v.x;
        y=v.y;
        z=v.z;
    }
    void disp(){
        cout<<x<<"\t"<<y<<"\t"<<z<<endl;
    }
};
int main() {
    VECTOR a(1,2,4);
    a.disp();
    VECTOR b=a;
    b.disp();

    return 0;
}
