#include <iostream>
using namespace std;

// creating node class for storing data and adress for next node.
class Node
{
public:
  int data;
  Node *next; // here Node refers to the type of data which our pointer will point towards.

  // creting a parameterised constructor to pass data .it also destroy out degault constructor.
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};
int main()
{
  // creating object statically
  Node n1(1); // here we have to pass 1 because out default constructor is not available to us.

  // here n1 is head node so we have to store its adress.
  Node *head = &n1; // here head is a variable store adress of dataType Node in it.

  Node n2(2);    // creating second object.
  n1.next = &n2; // next of n1 store adress of second node n2.

  cout << n1.data << " " << n2.data << endl;

  return 0;
}