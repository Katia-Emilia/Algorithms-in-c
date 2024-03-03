#include <stdio.h>
#include<conio.h>
#include<ctype.h>
char stack_arr[100];
int top=-1;      
 
void push(char item)
{ 
	top=top+1;
    stack_arr[top]=item;
}
 
char pop()
{                     
    return(stack_arr[top--]);
}

int precedence(char operators)  //to check precedence of operators
{                 
    
	if(operators == '^')
	{
		return(3);
	}
	else if(operators == '*' || operators == '/')
	{
		return(2);
	}
	else if(operators == '+' || operators == '-')          
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
void main()
{                        
    char infix[50],postfix[50],ch,elem;
    int i=0,k=0;
    printf("Enter Infix Expression : ");
    scanf("%s",infix);

    while( (ch=infix[i]) != '\0')
    {
        if( ch == '(') push(ch); //if left braces
        else
            if(isalpha(ch)) 
			{
				postfix[k]=ch; //if operand
				k=k+1;
			}
            else
                if( ch == ')') //if right braces
                {
                    while( stack_arr[top] != '(')
					{
						 postfix[k]=pop();
						 k=k+1;
					}
                    elem=pop(); 
                }
                else
                {       
                    while( precedence(stack_arr[top]) >= precedence(ch) )
						{
							 postfix[k]=pop();
							 k=k+1;
					    }   
                    push(ch);
                }

				i=i+1;
    }
    while( top>-1)   {
        postfix[k]=pop();
		k=k+1;
	}

    postfix[k]='\0';          
    printf("\n equivalent Postfix Expression is =  %s\n",postfix);
   getch();
}

