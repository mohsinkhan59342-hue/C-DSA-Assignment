#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void PUSH(int x)
{
if (top == MAX - 1)
{
printf("Stack Overflow\n");
return;
}

stack[++top] = x;
printf("%d pushed into stack\n", x);

}

void POP()
{
if (top == -1)
{
printf("Stack Underflow\n");
return;
}

printf("Popped element: %d\n", stack[top--]);

}

void PEEK()
{
if (top == -1)
{
printf("Stack is empty\n");
return;
}

printf("Top element: %d\n", stack[top]);

}

void DISPLAY()
{
int i;

if (top == -1)
{
    printf("Stack is empty\n");
    return;
}

printf("Stack elements are:\n");

for (i = top; i >= 0; i--)
{
    printf("%d\n", stack[i]);
}

}

int main()
{
int choice, x;

do
{
    printf("\n1. PUSH\n");
    printf("2. POP\n");
    printf("3. PEEK\n");
    printf("4. DISPLAY\n");
    printf("5. EXIT\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter value: ");
            scanf("%d", &x);
            PUSH(x);
            break;

        case 2:
            POP();
            break;

        case 3:
            PEEK();
            break;

        case 4:
            DISPLAY();
            break;

        case 5:
            printf("Exiting program\n");
            break;

        default:
            printf("Invalid choice\n");
    }

} while (choice != 5);

return 0;

}
