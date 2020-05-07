#include <stdio.h>
void main()
{
   int i, j, n, swap, number[50];

   printf("Enter the number of elements that are needed to be sorted: ");
   scanf("%d",&n);

   printf("Enter %d elements: ", n);
   for(i=0;i<n;i++)
      scanf("%d",&number[i]);

   for(i=1;i<n;i++){
      swap=number[i];
      j=i-1;
      while((swap<number[j])&&(j>=0)){
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=swap;
   }

   printf("Order of the Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",number[i]);

}