// What is a linked list? Keeping track of multiple items of the same type.
// this code uses integers where mine will use students.
// draw it out and think about what happens when you delete the last item and the first item
// implement inserting an item. (You can insert it anywhere that is easiest)
	
class Node
{	
	public:
	int data;
	Node *next;
};

class LinkedList
{
	public:
		int Length() const;
		bool Exists(const int & key) const;
		int Retrieve(const int & key) const;
		bool Delete(const int & key);

	private:
		Node *head;
		int count; // going to manually keep track of how many items are in list.
};

int LinkedList::Length() const
{
	return this->count;
}

bool LinkedList::Exists(const int & key) const
{
	Node *curr;
	for (curr=head; curr != 0; curr = curr->next)
	{
		if (curr->data == key)
			return true;
	}
	return false;
}

int LinkedList::Retrieve(const int & key) const
{
	Node *curr;
	for (curr=head; curr != 0; curr = curr->next)
	{
		if (curr->data == key)
			return curr->data;
	}
	return -1; // create a default constructor and return that 
}

// Default Constructor for Student
Student::Student()
	: Last(0), First(0), Email(0), Age(0)
{
	strcpy(ssn, "000-00-0000");
}

bool LinkedList::Delete(const int & key)
{
	Node *curr;
	Node *prev;
	for (curr=head; curr != 0; curr = curr->next)
	{
		if (curr->data == key)
			prev->next = curr->next;
			delete curr;
			return true;
		prev = curr;
	}
	return false;
}
