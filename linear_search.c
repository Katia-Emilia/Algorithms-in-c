#include<stdio.h>
#include<conio.h>
  
int main()
{
    int a[20],i,search_key,n;
	int flag=0;
    printf("\nEnter number of elements");
    scanf("%d",&n);
     
    printf("\nEnter elements in the array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
     
    printf("\nEnter element to search:");
    scanf("%d",&search_key);
     
    for(i=0;i<n;i++)
        if(a[i]==search_key)
		{
			flag=1;
            break;
		}
     
    if(flag==1)
	{

        printf("\nElement found at index %d",i);
	    printf("\nElement found at position %d",i+1);
	}
    else
        printf("Element not found");
     getch();
    return 0;
}

