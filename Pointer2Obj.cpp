
#include <iostream>
using namespace std;
#include<string>

class Cars{
    private:
        string name;
        int age;
        double price;
    public:
        Cars(string n,int a,int p){
        name=n;
        age=a;
        price=p;
        }
        void move(){
        cout<<"Cars move"<<endl;
        }
        void display(){
        cout<<name<<endl;
         cout<<age<<endl;
          cout<<price<<endl;

        }
        int getage(){
        return age;}

        int getprice(){
        return price;}


};

//void value(){
//float value;
//value=c1.getprice()-0.01*c1.getage();
//cout<<value<<endl;
//}

int main() {


   Cars c1("audi",1,455555);
   Cars *ptr;
   ptr=&c1;
   cout<<"Using dot operator"<<endl;

   c1.display();

   cout<<"Using pointers"<<endl;
   ptr->display();
   cout<<"Using dot operator: "<<c1.getage()<<endl;
   cout<<"Using pointers: "<<ptr->getage()<<endl;



    return 0;
}
