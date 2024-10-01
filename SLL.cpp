//SINGLY LINKED LIST


#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    public:
node(int value){
  data=value;
  next= NULL;
}
};
int main(){
    node* FIRST= new node(10);
     node* SECOND= new node(20);
      node* THIRD= new node(30);

      FIRST->next = SECOND;
      SECOND->next = THIRD;
      node* temp= FIRST;
      while(temp != NULL){
        cout<<temp->data<<"    ";
        temp=temp->next;
      }
cout<<"NULL"<<endl; //END OF THE LIST
}

// #include <iostream>
// using namespace std;

// // Define the Node class (or struct)
// class Node {
// public:
//     int data;     // To store data
//     Node* next;   // Pointer to the next node

//     // Constructor to initialize the node
//     Node(int value) {
//         data = value;
//         next = nullptr;  // Initially, the next pointer is set to nullptr
//     }
// };

// int main() {
//     // Create individual nodes
//     Node* first = new Node(10);  // First node with value 10
//     Node* second = new Node(20); // Second node with value 20
//     Node* third = new Node(30);  // Third node with value 30

//     // Link the nodes together to form a chain (linked list)
//     first->next = second;  // First node points to the second
//     second->next = third;  // Second node points to the third

//     // Output the values of the linked list
//     Node* temp = first;  // Start from the first node
//     while (temp != nullptr) {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;  // End of the list

//     return 0;
// }
