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
