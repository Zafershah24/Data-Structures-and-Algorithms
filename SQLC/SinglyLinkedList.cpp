#include <iostream>

using namespace std;


class Node{
    public:
    int key;
    int data;
    Node * next;
    Node(){
        key=0;
        data=0;
        next=NULL;
    }
    Node(int k,int d){
        key=k;
        data=d;
    }
};
class Singlylinked {
    public:
    Node *head;
    Singlylinked (){
        head=NULL;
    }
    Singlylinked (Node *n){
        head=n;
    }



//1. Check if the node exists or not using KEY value? Would return NULL if node doesnt exists

Node *nodeExists(int k){
    Node *temp=NULL;
    Node *ptr;
    while (ptr!=NULL)
    {
        if(ptr->key==k)
        {
        temp=ptr;
        }
        ptr=ptr->next;
    }
    return temp;
    
}

//2. Append a node at the end 

void Append(Node *n){
     if (nodeExists(n -> key) != NULL) {
      cout << "Node Already exists with key value : " << n -> key << ". Append another node with different Key value" << endl;
    } else {
      if (head == NULL) {
        head = n;
        cout << "Node Appended" << endl;
      } else {
    Node *ptr;
    ptr=head;
    while (ptr!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=n;
    cout << "Node Appended" << endl;
          
      }
    }
}

//3. Prepond a Node at the beginning

void Prepond(Node *n)
{
  if (nodeExists(n -> key) != NULL) {
      cout << "Node Already exists with key value : " << n -> key << ". Append another node with different Key value" << endl;
    } 
  else {
      n->next=head;
      n=head;
      cout << "Node Preponded" << endl;
  }
}

//4. Insert a node after a Particular KEY

void insertNodeAfter(int k, Node * n) {
    
}

};

int main()
{  Singlylinked s;
  int option;
  int key1, k1, data1;
  do {
    cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. appendNode()" << endl;
    cout << "2. prependNode()" << endl;
    cout << "3. insertNodeAfter()" << endl;
    cout << "4. deleteNodeByKey()" << endl;
    cout << "5. updateNodeByKey()" << endl;
    cout << "6. print()" << endl;
    cout << "7. Clear Screen" << endl << endl;
 
    cin >> option;
    Node * n1 = new Node();
    //Node n1;
 
    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      s.Append(n1);
      //cout<<n1.key<<" = "<<n1.data<<endl;
      break;
 
    case 2:
      cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      s.Prepond(n1);
      break;
 
    case 3:
      cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
      cin >> k1;
      cout << "Enter key & data of the New Node first: " << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
 
      s.insertNodeAfter(k1, n1);
      break;
 
    // case 4:
 
    //   cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
    //   cin >> k1;
    //   s.deleteNodeByKey(k1);
 
    //   break;
    // case 5:
    //   cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
    //   cin >> key1;
    //   cin >> data1;
    //   s.updateNodeByKey(key1, data1);
 
    //   break;
    // case 6:
    //   s.printList();
 
    //   break;
    // case 7:
    //   system("cls");
    //   break;
    default:
      cout << "Enter Proper Option number " << endl;
    }
 
  } while (option != 0);
 
  return 0;
}
