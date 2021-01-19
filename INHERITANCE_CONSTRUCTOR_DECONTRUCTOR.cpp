/******************************************************************************

                      FIRST MOTHER CONSTUCTOR GETS CALLED IN INHERITANCE, THEN DAUGHTER.
                      WHILE DYING DAUGHTER DIES FIRST, THEN MOTHER THEN GRANDMOTHER THEN GREAT-GRAND MOTHER AND SO ON :(

*******************************************************************************/

#include <iostream>
#include<string>
using namespace std;

class Mother {
public:
Mother(){
    
    cout<<"Mother Constructor"<<endl;
}
~Mother(){
    
    cout<<"Mother Deconstructor"<<endl;
}
};

class Daughter:public Mother{
 public:
 Daughter(){
    
    cout<<"Daughter Constructor"<<endl;
}
~Daughter(){
    
    cout<<"Daughter Deconstructor"<<endl;
}   
};

int main() {
Daughter tina;

    return 0;
}
