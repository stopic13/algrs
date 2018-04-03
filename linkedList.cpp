#include <iostream>
using namespace std;

struct Node{
   int data;
   Node *next;
};


class LinkedList{
  //Node *head;

  public:
  Node *head;

  LinkedList() {
  head = nullptr;
   };


  void addFirst(Node *node);
  bool deleteNode(int Nodedata);

  void printList();
};

void LinkedList::printList(){
  cout << "called the print method" << endl;
  Node *curr_node = head;
  while (curr_node != nullptr)
  {
    cout << curr_node-> data;
    cout << "->";
    curr_node = curr_node->next;
  }
}

void LinkedList::addFirst(Node *node){
  cout << "called the add First method" << endl;

  if (head != nullptr){
    node->next = head;
    head = node;
  }
  else{
    head = node;
    head->next = nullptr;
  }
//  node.next = nullptr;
}

bool LinkedList::deleteNode(int Nodedata){
  cout << "called the delete method" << endl;
  Node *curr_node = head;
  while (curr_node != nullptr)
  {
    if (curr_node->next != nullptr && curr_node->next->data == Nodedata)
    {
      cout <<"want to delete"<<endl;
      cout <<"all good"<<endl;
      curr_node->next = curr_node->next->next;
      return true;
    }
    else
    {
      cout <<"here1"<<endl;
    }
    curr_node = curr_node->next;
  }
  cout <<"here2"<<endl;

  return false;
}


int main(int argc, char** argv)
{
    Node firstNode = Node();
    Node secondNode = Node();;
    Node thirdNode = Node();;

    firstNode.data = 1;
    secondNode.data = 2;
    thirdNode.data = 3;

    firstNode.next = &secondNode;
    secondNode.next = &thirdNode;
    thirdNode.next = nullptr;



    // std::cout<<"here";
    std::cout << firstNode.data <<endl;
    std::cout << firstNode.next <<endl;


    std::cout << secondNode.data <<endl;
    std::cout << secondNode.next <<endl;

    LinkedList myLinkedList = LinkedList();
    myLinkedList.addFirst(&firstNode);
    myLinkedList.printList();

    myLinkedList.addFirst(&secondNode);
    myLinkedList.printList();

    myLinkedList.addFirst(&thirdNode);

    myLinkedList.printList();

    myLinkedList.deleteNode(2);

    myLinkedList.printList();

    myLinkedList.deleteNode(1);

    myLinkedList.printList();

    std::cout << "---------------" << endl;
    myLinkedList.deleteNode(4);

    myLinkedList.printList();

    // std::cout << myNode.next;
    return 0;
}
