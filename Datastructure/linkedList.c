# include<stdio.h>
# include<malloc.h>

typedef struct Node{
	int data;
	struct Node *next;
}Node;

void methodTwo(Node **);
void methodOne();
void printNode(Node *);

Node *createNode()
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->next = NULL;
	return newNode;	
}

int main()
{
	printf("Ways Of creating Nodes In Linked List:\n");
	printf("Method 1 : using pointer to struct\n");
	methodOne();
	return(0);
}

void methodOne()
{
	Node **temp;
	Node* head = createNode();
	head->data = 10;
	Node* second = createNode();
	second->data = 20;
	Node* third = createNode();
	third->data = 30;
	Node* forth = createNode();
	forth->data = 40;
	head->next = second;
	second->next = third;
	third->next = forth;
	printNode(head);
	printf("Header is: %d",head->data);
	
	printf("\nChanging Header:\n");
	temp = &head;
	(*temp)->data= 100;
	printNode(head);
}


void printNode(Node *head)
{
	while(head!=NULL)
	{
		printf("Node:%3d\n",head->data);
		head = head->next;
	}
}
