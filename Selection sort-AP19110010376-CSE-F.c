#include<stdio.h>
void main()
{
    int array[100],n,i,j,min,swap;
     
    printf("\n Enter the Number of Elements: ");
    scanf("%d",&n);
     
    printf("\n Enter %d Elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
     
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(array[min]>array[j])
            min=j;
        }
        if(min!=i)
        {
            swap=array[i];
            array[i]=array[min];
            array[min]=swap;
        }
    }
     for(i=0;i<n;i++)
     {
    printf("\n The Sorted array in ascending order: %d  ",array[i] );
     }
}