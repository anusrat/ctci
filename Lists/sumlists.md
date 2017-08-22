/**
 * Cracking the coding interview edition 6
 * Problem 2.5 Sum lists
 * You have two numbers represented by linked list, where each node contains
 * a single digit. Digits are stored in reverse order.(1's digit is at the head)
 * Write a function that adds two such numbers and returns a number in similar
 * list format.
 * example:
 * 7-->1-->6 + 5-->9-->2 = 2-->1-->9
 * which is (617 + 295  = 912)
 * What if digits are not stored in reverse order(i.e 1's digit is at tail)
 * (6--1-->7) + (2-->9-->5) = (9-->1-->2)
 *
 * Solution to the modification: reverse the list and proceed with same approach as before
**/


```
class Node
{
  private:
    int data;
    Node* next;
  public:
  Node()
  {
    data = null;
    next = null;
  }
  
  Node(int x)
  {
    data = x;
    next = null;
  }
  
  ~Node();
  friend class linkedList;
};

class linkedList
{
  public:
    Node* head;
    Node* tail;

  linkedList()
  {
  	head = null;
  	tail = null;
  }
  
  ~linkedList();
  
  void insert (int x)
  {
  	Node* temp;
  	temp.data = x;
  	temp.next = null;
  
  	if (head == null)
  	{
  		head = temp;
  		tail = temp;
  	}
  	else
  	{
  		tail.next = temp;
  	}	
    }
  
  void reverse (linkedList &l1)
  {
    Node *prev, *cur, *next;
    cur = l1.head;
    prev = null;
    
    while (cur)
    {
      next = cur.next; 
      cur.next = prev;
      cur = next;
      prev = next;
    }
  }     

  linkedList addList (linkedList &list2)
  {
    int sum, carry;
    sum = 0;
    carry = 0;
  
    node *cur1 = new node;
    node *cur2 = new node;
    linkedList res = new linkedList();
    cur1 = this.head;
    cur2 = list2.head;
  
    if (this == null || list2 == null)
    { 	
      return;
    }
   
    while (cur1 != nullptr || cur2 != nullptr)
    {
      sum = cur1.data + cur2.data + carry;
      sum = sum%10;
      carry = sum/10;
    }
  
    if (carry)
    {
      res.insert(carry);
    }
  	
   return res;
  }
```
