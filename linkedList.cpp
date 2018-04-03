#include <iostream>
using namespace std;

struct Node{
   int data;
   Node *next;
};


class LinkedList{
  Node *head;

  public:

  LinkedList() { };


  void addFirst(Node *node);
  void printList();
};

void LinkedList::printList(){
  cout << "called the print method" << endl;
}

void LinkedList::addFirst(Node *node){
  cout << "called the add First method" << endl;
}

int main(int argc, char** argv)
{
    Node firstNode = Node();
    Node secondNode = Node();;

    firstNode.data = 1;
    secondNode.data = 2;


    firstNode.next = &secondNode;
    secondNode.next = nullptr;



    // std::cout<<"here";
    std::cout << firstNode.data <<endl;
    std::cout << firstNode.next <<endl;


    std::cout << secondNode.data <<endl;
    std::cout << secondNode.next <<endl;

    LinkedList myLinkedList = LinkedList();
    myLinkedList.addFirst(&firstNode);
    // std::cout << myNode.next;
    return 0;
}
