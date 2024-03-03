#include<stdio.h>
#include<conio.h>
int main(){
 
   int i, j, count, temp, number[25],min;

   printf("Enter the number of elements?: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);

   for(i=0;i<count;i++)
      scanf("%d",&number[i]);
 
   
   for(i=0;i<count-1;i++){
	   min=i;
      for(j=i+1;j<count;j++){
         if(number[min]>number[j]){
			 min=j;
        
         }
      }
	  if(i!=min)
	  {
            temp=number[i];
            number[i]=number[min];
            number[min]=temp;
	  }
   }

   printf("Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);
   getch();
   return 0;
}
