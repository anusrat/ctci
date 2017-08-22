Delete middle Node of a linked list: Delete node in the middle given access only to that node.

Iterative Solution: O(1)

```
struct node
{
	int data;
	node* next;
};


int deleteMid (node * &mid)
{ 
	mid.data = mid.next.data;
	mid.next = mid.next.next;
}
	
	













}
```

















```
