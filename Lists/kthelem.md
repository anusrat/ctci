Return kth to last element: Implement an algorithm to find kth to last element oof a singly linked list

Iterative Solution: O(n)
1. Inititalise two node pointers, cur and runner
2. Move and set runner to k positions from head
3. Move both cur and runner until runner hits tail of list.
4. The position that cur is at will be the kth element from last.

```
struct node
{
	int data;
	node* next;
};

struct node* createNode (int x)
{
	node* temp = new node;
	temp.data = x;
	temp.next = nullptr;
	return temp;
}

int returnElem (node * &head, int k)
{
	node* runner = new node;	
  node* cur = new node;
	cur = head;
	
	runner = cur;
	while (k > 0)
  {
		runner = runner.next;
		k--;
	}
	
  while (runner)
	{
		runner = runner.next;
		cur = cur.next;
	}

	return cur;
}
```

















```
