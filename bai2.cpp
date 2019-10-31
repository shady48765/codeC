#include <stdio.h>
#include <iostream>
using namespace std;
typedef float node;
typedef struct List
{
    node data;
    List *next;
} list;
list *head = NULL;
void show();
void insertFirst(node Item);
int main()
{
	insertFirst(5.6);
    insertFirst(6);
    insertFirst(7);
    insertFirst(7);
	show();
	return 0;
}
void show() 
{
    list *a = head;
    cout << "Du lieu trong Linked la:" << endl;
    while (a != NULL)
    {
        cout << a->data << " ";
        a = a->next;
    }
    cout << endl;
}
void insertFirst(node Item)
{
    list *link = new List;
    link->data = Item;
    link->next = head;
    head = link;
}
