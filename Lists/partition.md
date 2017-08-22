Write code to partition a linked list around a value X such that all nodes less than x come before all node less than or equal to x. The partition element x can appear anywhere in the right partition. It doesnt need to appear between the left and right partitions.

Iterative Solution: O(1)
Iterate through list and store elements greater than x in afterlist, elements smaller than list in beforelist
Merge list after sorting is complete
```
class node
{
  private:
    int data;
    node* next;
  public:
    node ()
    {
    	next = nullptr;
    }
    
    node (int x)
    {
    	node.data = x;
    }
  friend class linkedList; //so that linkedList class can access private/protected members of node class

};
class linkedList
{

  public:
  	node* head;
  	node* tail;
  
  linkedList ()
  {
    head = nullptr;
    tail = nullptr;
  }
  
  ~linkedList();
	
  void insert (int x)
  { 
     node* temp = new node;
     temp.next = nullptr;
     if (head == nullptr)
     {
     	head = temp;
     	tail = temp;
     }
     else
     {
     	tail.next = temp;
     }
  }

};

linkedList mergeList (linkedList &before, linkedList &after)
{
  if (before == nulllptr || after == nullptr)
  {
  	return;
  }
  before.tail.next = after;
  return before;
}

linkedList partition (linkedList &list, int x)
{ 
  linkedList beforelist;
  linkedList afterlist;
  linkedList mergeList;

  node* cur = new node;
  node* head1 = new node;
  head1 = list.head();

  if (head1 == nullptr)
  { return; }

  cur = head1;
  	 
  while (cur)
  {
    if( cur.data < x)
    {
      //add to before list
      beforelist.insert(cur.data);
    }
    else
    {
      //its greater than partition, add to afterlist
      afterlist.insert(cur.data);
    }
  }  
 
  //Sorting complete, merge the two lists
  return ( merge(beforelist, afterlist));
 
}
		
int main()
{
  linkedList test;
  linkedList newList;

  test.insert(1);			
  test.insert(3);			
  test.insert(5);			
  test.insert(2);			
  test.insert(5);			
  test.insert(6);			
  test.insert(8);
  newList = partition(5);		
  newList.display();
}







```

















```
