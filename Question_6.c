#include<stdio.h>
int main()
{
int c, first, last, middle, n, search, array[100];
printf("Enter the number of elements : ");
scanf("%d",&n);
printf("Enter %d integers : \n",n);
for(c=0;c<n;c++)
scanf("%d",&array[c]);
printf("Enter the value to search : ");
scanf("%d",&search);
first = 0, last = n-1, middle = (first + last)/2;
while(first <= last)
{
if(array[middle] < search)
first = middle + 1;
else if(array[middle] == search)
{
printf("%d found at location %d",search,middle);
break;
}
else
last = middle - 1;
middle = (first + last)/2;
}
if(first > last)
printf("Elements not found in the list");
return 0;
} 