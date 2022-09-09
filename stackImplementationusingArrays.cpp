/******************************************************************************

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *s;
};
void create(struct stack *st)
{
    
    printf("\nEnter size of the stack : ");
    scanf("%d",&st->size);
    st->top=-1;
    st->s=(int *)malloc(st->size*sizeof(int));
    
    }
}
void display (struct stack st)
{
    int i;
    printf("\nThe elements in the stack are : ");
    for(i=st.top;i>=0;i--)
    printf(" %d\t",st.s[i]);
    printf("\n");
}
void push(struct stack *st)
{
    printf("\nEnter ")
    if(st->top==st->size-1)
        printf("\nStack Overflow\n");
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
}
int pop(struct stack *st)
{
    int z=-1;
    if(st->top==-1)
        printf("\nStack Underflow\n");
    else
    {
        z=st->s[st->top];
        st->top--;
    }
    return z;
}
int peek(struct stack st,int index)
{
    int x=-1;
    int a=st.top-index+1;
    if(a <0)
        printf("\nInvalid index\n");
    else
    {
        x=st.s[st.top-index+1];
    }
    return x;
}
void isEmpty(struct stack st)
{
    if(st.top==-1)
        printf("\nStack is Empty\n");
    else
        printf("\nStack is not empty\n");
}
void isFull(struct stack st)
{
    if(st.top==st.size-1)
        printf("\nStack is Full\n");
    else
        printf("\nStack is not Full\n");
}

int main()
{
    struct stack st;
    do
    {
        printf("Enter choice : \n 1.Create\n2.Push\n3.Pop\n4.Peek\n5.isEmpty\n6.isFull\n7.Display\n0.Exit");
        scanf("%d",&x);
        
        switch(x)
        {
            case 1: create(&st);
            break;
            case 2: push(&st);
            break;
            case 3: create(&st);
            break;
            case 4: create(&st);
            break;
            case 5: create(&st);
            break;
            case 6: create(&st);
            break;
            case 7: create(&st);
            break;
            
        }
        
    }while(x>=1 || x<=7)
    
    create(&st);
    
   
    display(st);
    //printf("\nPopped element is %d\n",pop(&st));

     
    // printf("\nThe element on the index %d  is %d\n",2,peek(st,2));
    // isFull(st);
    // isEmpty(st);

    
    

    return 0;
}
