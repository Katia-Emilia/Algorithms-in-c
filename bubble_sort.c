#include<stdio.h>
#include<conio.h>
int main(){
 
   int i, j, count, temp, number[25],flag;

   printf("Enter the number of elements?: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);

   for(i=0;i<count;i++)
      scanf("%d",&number[i]);
 
   
   for(i=0;i<count-1;i++){
	   flag=0;
      for(j=0;j<count-1-i;j++){
         if(number[j]>number[j+1]){
            temp=number[j];
            number[j]=number[j+1];
            number[j+1]=temp;
			flag++;
         }
      }
   }

   printf("Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);
   getch();
   return 0;
}


