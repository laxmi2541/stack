#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10
typedef struct
{
	int element[MAXSIZE];
	int top;
}stack;
void createstack(stack*ps)
{
	ps->top=-1;
}
int isEmpty(stack*ps)
{
	if(ps->top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	}
	int isfull (stack *ps)
	{
		if(ps->top==MAXSIZE-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	void push(stack *ps,int value)
	{
		ps->top=ps->top+1;
		ps->element[ps->top]=value;
		
	}
	int pop(stack *ps)
	{
		int temp;
		temp=ps->element[ps->top];
		ps->top=ps->top-1;
		return temp;
	}
	int peek(stack *ps)
	{
		return(ps->element[ps->top]);
	}
	int main()
	{
		int choice=0,element;
	stack s;
	createstack(&s);
	while(choice!=4)
	{
		printf(" 1.push\n 2.pop\n 3.peek\n 4.Exit\n Enter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				if(isfull (&s))
	 		{
			printf("stack overflow");
			}
		else
			{
			printf("Enter the element:\n");
			scanf("%d",element);
			push(&s,element);
			}
			break;
			case 2:
			 if( isEmpty(&s))
			{
			printf("stack underflow");
			}
			else
			{
			printf("value at pop is %d\n",pop(&s));
			}
			break;
			case 3: 
			 if(isEmpty(&s))	
			{
			printf("stack underflow");
			}
			else
			{
				printf("value at top is %d\n",peek(&s));
			}				
			break;
			case 4:
				printf("press any key to exit...");
				break;
				default:
				printf("Wrong choice");
		}

	}
return 0;
}

