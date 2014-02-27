#ifndef  __LINKED_LIST_H__
#define  __LINKED_LIST_H__

typedef struct Element_t{
	struct Element_t *next;
	int data;
}Element;

typedef struct {
	Element *head;
	Element *tail;
	int length;
}LinkedList;


LinkedList *createLinkedList();
Element *List_delete(LinkedList *list, Element *elem);
void print();
#endif //__LINKED_LIST_H__