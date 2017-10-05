#include<stdio.h>
#include<malloc.h>
#include<conio.h>

struct node{

int data;
struct node *link;

};

void push (struct node**,int);
int pop (struct node**);
void delstack(struct node**);
int main()
{
	struct node *s=NULL;
	int i;
	push(&s,10);
	push(&s,20);
	push(&s,30);
	push(&s,40);
	i=pop(&s);
	printf("item poped is %d",i);
	i=pop(&s);
	printf("item poped is %d",i);
	i=pop(&s);
	printf("item poped is %d",i);

return 0;

}
void push(struct node **top ,int item)
{
	
	
	struct node *temp;
	temp =(struct node*)malloc(sizeof(struct node));
	
	if(temp == NULL)
	printf("stact is full");
	temp->data= item;
	temp->link =*top;
	*top = temp;	
}


int pop (struct node **top)
{
	
	struct node *temp;
	int item;
	if (*top==NULL)
	{
		
		printf("\nstack is empty");
		return NULL;
		
		
	}
	
	temp = *top;
	item = temp ->data;
	*top = (*top)-> link;
	free(temp);
	return item;
	
	
}

