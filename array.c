#include<stdio.h>
void main()
{
 int *p,n;
 printf("Enter number of elements:\t");
 scanf("%d",&n);
 p=(int *)malloc(sizeof(int)*n);
 printf("Enter elements to array\n");
 for(int i=0;i<n;i++)
   scanf("%d",p+i);
 printf("Elements stored successfully\n array elements are\t");
 for(int i=0;i<n;i++)
   printf("%d\t",*(p+i));
 printf("\n");
 return 0;
}
 
