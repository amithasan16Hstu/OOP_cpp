#include<stdio.h>
int main()
{
int arr[100], i, n, j, flag=0;
printf("Enter the size of the array:");
scanf("%d", &n);
printf("Enter %d element in the array:",n);
for(i=0; i<n; i++)
scanf("%d", &arr[i]);
for(i=0; i<n; i++)
{
for(j=i+1; j<n; j++)
{
if(arr[i] == arr[j])
{
flag=1;
break;
}
}
}
if (flag==0)
printf("No Duplicate in this array\n");
else
printf("Duplicate value is present in this array\n");
return 0;
}