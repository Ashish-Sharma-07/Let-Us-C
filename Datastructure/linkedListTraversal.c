# include<stdio.h>
# include<malloc.h>

typedef struct Node{
	int data;
	struct Node *link;
}Node;

Node *createNode(int data)
{
	Node *temp = (Node *)malloc(sizeof(Node));
	temp->data = data;
	temp->link = NULL;
	return temp;
}

void append(Node **head,int data)
{
	Node *temp,*r;
	r = createNode(data);
	if(*head == NULL)
	{
		*head = r;
	}
	else
	{
		temp = *head;
		while(temp->link!=NULL)
		{
			temp = temp->link;
		}
		temp->link = r;
	}
}

void insertBeg(Node **head,int data)
{
	Node *temp;
	Node **h = head;
	temp = createNode(data);
	
	if(*h == NULL)
	{
		*h = temp;
	}
	else
	{
		temp->link = *h;
		*h= temp;
	}
	
}

void traverse(Node **head)
{
	Node *temp = *head;
	if(*head ==NULL)
	{
		printf("Empty List\n");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("Element: %d\n",temp->data);
			temp = temp->link;
		}
	}
}

int main()
{
	Node *head = NULL;
	int i=0;
	int data;
	printf("Insert At End: \n");
	while(i<5)
	{
		printf("Enter Data: ");
		scanf("%d",&data);
		append(&head,data);
		i++;
	}
	traverse(&head);
	
	printf("Insert At Beginning: \n");
	i = 0;
	while(i<5)
	{
		printf("Enter Data: ");
		scanf("%d",&data);
		insertBeg(&head,data);
		i++;
	}	
	traverse(&head);
	return 0;
}
