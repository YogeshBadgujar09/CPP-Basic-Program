#include<iostream>

using namespace std;

class Node{
	public :
	int data ;
	Node* next;
};

class List : public Node{
	
	Node *first , *last;
	
	public :
		
		List()
		{
			first = NULL;
			last = NULL;
		}
		
		void create();
		void display();
};

void List :: create()
{
	Node *temp;
	
	temp = new Node;
	
	int n;
	cout << "\nEnter a number :";
	cin >> n;
	
	temp->data = n;
	temp->next = NULL;
	
	if(first == NULL)
	{
		first = temp ;
		last = first ;
	}
	else
	{
		last->next = temp;
		last = temp;
	}
	
}

void List :: display()
{
	Node *temp = first;
	
	if(temp == NULL)
	{
		cout << "List is Empty";
	}
	
	while(temp != NULL)
	{
		cout << temp->data;
		cout<< "-->";
		temp = temp->next;
	}
	
	cout<< "NULL";
}


int main()
{
	
	List l;
	l.create();
	l.display();
	
	return 0;
}
