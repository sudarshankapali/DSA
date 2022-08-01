//linear search program in c
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=0,a[n],key=0,flag=0;
	printf("enter the size of array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter the %d array element: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nenter the array element to be searched: ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nsearch sucessful \n");
		printf("array position=%d\n",i+1);
	}
	else
	{
		printf("search unsucessfull ");
	}
	return 0;
}
