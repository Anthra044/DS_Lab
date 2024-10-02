#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int s[10], TOP=-1, i, item, ch;
void push()
{
    if (TOP == MAX - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    printf("Enter the element to push: ");
    scanf("%d", &item);
    TOP = TOP + 1;
    s[TOP] = item;
}

int pop()
{
    if (TOP == -1)
    {
        printf("Stack underflow\n");
        return -1;
    }
    int item = s[TOP];
    TOP = TOP - 1;
    return item;
}

void display()
{
    if (TOP == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack contents: \n");
    for (i = TOP; i >= 0; i--)
    {
        printf("%d \n", s[i]);
    }
}

void main()
{
    while(1)
    {
        printf("1:PUSH \t 2:POP\t 3:DISPLAY\t 4:EXIT \n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                item = pop();
                if (item != -1)
                    printf("Popped element: %d\n", item);
                break;
            case 3: 
                display();
                break;
            case 4: 
                exit(0);
        }
    }
}
