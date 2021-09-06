#include<stdio.h>
struct stack
{
    int top;
    int *s;
    int n;
}s1;
void push(struct stack *a,int b)
{
    s1.top++;
    if(s1.top==n)
    {
        printf("stack is full");
    }
    else
    {
        s1.s[top]=b;
    }
}
int pop(struct s);
{
    if(s1.top==-1)
    {
        printf("stack is empty");
        return;
    }
    else
    {
        if(s1.top==n)
        {
            s1.top--;
        }
        int a=s1.s[top];
        s1.top--;
        return a;
    }
}
int main()
{

    scanf("%d",&(s1.n));
    s1.s=(int *)malloc(4*s1.n);
    printf("%d\n",s1.s);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        push(&s1,a);
    }
    for(i=0;i<s1.n;i++)
    {
        b=pop(&s1,i);
        printf("%d",b);
    }
}
