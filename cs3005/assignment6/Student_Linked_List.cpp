// Linked List for Student Classes
// Assignment 7 CS3005
// Nate Armstrong
#include "Student.h"

class Node
{
public:
  Student data;
  Node *next;
};

class LinkedList
{
public:
  int Length() const;
  bool Exists(const Student & key) const;
  Student Retrieve(const Student & key) const;
  Student Delete(const Student & key);

private:
  Node *head;
  int count;
};

int LinkedList::Length() const
{
  return this->count;
}

bool LinkedList::Exists(const Student & key) const
{
  Node *curr;
  for (curr=head; curr!=0; curr=curr->next)
  {
    if (curr->data == key)
      return true;
  }
  return false;
}

Student LinkedList::Retrieve(const Student & key) const
{
  Node *curr;
  for (curr=head; curr!=0; curr=curr->next)
  {
    if (curr->data == key)
      return curr->data;
  }
  return Student(const Student&);
}

// Default Constructor for Student
Student::Student()
  : Last(0), First(0), Email(0), Age(0)
{
  strcpy(ssn, "000-00-0000");
}

bool LinkedList::Delete(const Student & key)
{
  Node *curr;
  Node *prev;
  for (curr=head; curr!=0; curr=curr->next)
  {
    if (curr->data == key)
    {
      prev->next = curr->next;
      delete curr;
      return true;
    }
    prev = curr;
  }
  return false;
}