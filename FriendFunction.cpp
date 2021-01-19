
	
#include <iostream>
using namespace std;
 
class Box {
   double width;
public:
   friend void printWidth( Box box );
   void setWidth( double wid );
};
// Member function definition
void Box::setWidth( double wid ) {
   width = wid;
}
// Note: printWidth() is not a member function of any class.
void printWidth( Box box ) {
   /* Because printWidth() is a friend of Box, it can
   directly access any member of this class */
   cout << "Width of box : " << box.width <<endl;
}
// Main function for the program
int main( ) {
   Box box;
 
   // set box width with member function
   box.setWidth(10.0);
   // Use friend function to print the wdith.
   printWidth( box );
   return 0;
}


/******************************************************************************

              NEW FRIEND FUNCTION IMPLEMENTATION

*******************************************************************************/

#include <iostream>
#include<string>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
    public:
     Rectangle()
    {
       
    }
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    void disp(){
        cout<<"length :"<<length<<endl;
        cout<<"breadth :"<<breadth<<endl;
    }
    
    friend void SetAnother(Rectangle r);
};
void SetAnother(Rectangle r){
    r.length=7;
    r.breadth=99;
    cout<<"new length :"<<r.length<<endl;
     cout<<"new breadth :"<<r.breadth<<endl;
}

int main(){
   Rectangle r(7,8); 
   r.disp();
   SetAnother(r);
  
    
}
