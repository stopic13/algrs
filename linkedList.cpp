#include <iostream>
using namespace std;

struct Node{
   int data;
   Node *next;
};



int main(int argc, char** argv)
{
    Node myNode;
    myNode.data = 13;
    myNode.next = nullptr;
    std::cout<<"here";
    std::cout << myNode.data;
    std::cout << myNode.next;
    return 0;
}
