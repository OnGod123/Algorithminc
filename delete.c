#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	char* s;
	struct node* link;
}link_list1;

link_list1 * del_first(link_list1*);
int main()
{
	link_list1* head;
	link_list1 node1, node2, node3, node4;
	node1.link = &node2;
	node2.link = &node3;
	node3.link = &node4;
	node4.link = NULL;
	head = &node1;
	head = del_first(head);
	link_list1* ptr = head;
	while (ptr != NULL) {
		printf("%d", ptr->data);
		printf("%s\n", ptr->s);
		ptr = ptr->link;
	}
}
link_list1* del_first(link_list1* head)
{
	if (head == NULL)
	{
		printf("list is already empty");

	}
	else
	{
		link_list1* temp = head;
		head = head->link;
		free(temp);
		temp = NULL;
	}
	return head;

}