#include <iostream>

using namespace std;

class Node
{
public:
	Node(int d) : data{d}, next{NULL} {}

	int data;
	Node *next;
};

// create a linked list
Node *create_linked_list(int arr[], int size)
{
	Node *head = NULL;
	Node *tail = NULL;

	Node *node = new Node(arr[0]);
	head = node;
	tail = node;

	for (int i = 1; i < size; ++i)
	{
		Node *node = new Node(arr[i]);
		tail->next = node;
		tail = node;
	}

	return head;
}

// print the linked list
void print_linked_list(Node *head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
}

int main(int argc, char **argv)
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int size = sizeof(arr) / sizeof(int);

	Node *head = create_linked_list(arr, size);
	print_linked_list(head);
	return 0;
}
