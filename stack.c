#include<stdio.h>
#define N 5

int stack[N];
int top = -1;
void push()
{
    int x;
    printf("Enter data:");
    scanf("%d",&x);
    if(top==N-1)
    {
        printf("Overflow\n");

    }
    else{
        top++;
        stack[top]=x;
    }
}

void pop()
{
    int item;
    if(top==-1)
    {
        printf("Underflow\n");
    }
    else{
        item=stack[top];
        top--;
        printf("Popped:%d\n",item);
    }
}

void peek()
{
    if(top==-1)
    {
        printf("Underflow\n");
    }
    else{
        printf("Top element:%d\n",stack[top]);
    }
}

void display()
{
    if(top==-1)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        int i;
        printf("\nStack elements are:");
        for(i=top; i>=0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int choice;
    while(1)
    {
        printf("\nStack Menu\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: peek();
                    break;
            case 4: display();
                    break;
            case 5: return 0;
            default: printf("Invalid choice\n");
         }
    }
    return 0;
}
