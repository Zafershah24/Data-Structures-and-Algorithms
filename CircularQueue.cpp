#include<iostream>
#include <cstdlib>

// Change rear ++ to (rear=rear+1)%sizeofarray
// Change frnt ++ to (frnt=frntr+1)%sizeofarray
//And in IsFull Method (rear+1)%4==frnt
using namespace std;

class CircularQueue {
int a[4];
int frnt;
int rear;

public:


   CircularQueue()
    {
        frnt=-1;
        rear=-1;
        for(int i=0;i<4;i++)
        {
            a[i]=0;
        }
    }
    bool IsEmp(){
    if (frnt==-1&&rear==-1)
        return true;
    else
        return false;

    }
    bool IsFull(){
    if ((rear+1)%4==frnt)
     return true;
    else
        return false;
    }
    void enqueue(int val){
        if (IsFull()){
            cout<<"queue is Full"<<endl;
        }
        else if (IsEmp()){
            rear=frnt=0;
            a[rear]=val;

        }
        else{
            rear=(rear+1)%4;
            a[rear]=val;
        }
    }
    int dequeue(){
        int popV=0;
    if (IsEmp()){
        cout<<"Queue is empty"<<endl;
        return 0;
                }
    else if (rear == frnt) {
       popV = a[frnt];
      rear = -1;
      frnt = -1;
      return popV;
    }

    else {
         popV=a[frnt];
        a[frnt]=0;
        frnt=(frnt+1)%4;
//        cout<<frnt<<endl;
        return popV;
        }
            }
    int count(){
    return (rear-frnt+1);
    }
    void display(){
    for( int i=0;i<4;i++)
        cout<<a[i]<<endl;
    }
    int see(int pos) {
    if (IsEmp()) {
      cout << "Queue empty" << endl;
      return 0;
    } else {
      return a[pos];
    }
  };

  void change(int pos, int val) {
    a[pos] = val;
    cout << "value changed at location " << pos << endl;
  }




};
int main()
{
 CircularQueue s1;
  int option, postion, value;

  do {
    cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. Enqueue()" << endl;
    cout << "2. Dequeue()" << endl;
    cout << "3. isEmpty()" << endl;
    cout << "4. isFull()" << endl;
    cout << "5. see()" << endl;
    cout << "6. count()" << endl;
    cout << "7. change()" << endl;
    cout << "8. display()" << endl;
    cout << "9. Clear Screen" << endl << endl;

    cin >> option;
    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Enter an item to push in the queue" << endl;
      cin >> value;
      s1.enqueue(value);
      break;
    case 2:
      cout << "Dequeue Function Called - Popped Value: " << s1.dequeue() << endl;
      break;
    case 3:
      if (s1.IsEmp())
        cout << "Queue is Empty" << endl;
      else
        cout << "Queue is not Empty" << endl;
      break;
    case 4:
      if (s1.IsFull())
        cout << "Queue is Full" << endl;
      else
        cout << "Queue is not Full" << endl;
      break;
    case 5:
      cout << "Enter position of item you want to peek: " << endl;
      cin >> postion;
      cout << "See Function Called - Value at position " << postion << " is " << s1.see(postion) << endl;
      break;
    case 6:
      cout << "Count Function Called - Number of Items in the Queue are: " << s1.count() << endl;
      break;
    case 7:
      cout << "Change Function Called - " << endl;
      cout << "Enter position of item you want to change : ";
      cin >> postion;
      cout << endl;
      cout << "Enter value of item you want to change : ";
      cin >> value;
      s1.change(postion, value);
      break;
    case 8:
      cout << "Display Function Called - " << endl;
      s1.display();
      break;
    case 9:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

  return 0;

}
