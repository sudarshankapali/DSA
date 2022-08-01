//binary search program
#include<stdio.h>
#include<conio.h>
int main(){
	int n=0,key=0,flag=0,l=0,h=0,mid=0,i=0;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("\nenter the %d array element: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nenter the array element to be searched: ");
	scanf("%d",&key);
	h=n-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(a[mid]<key)
		{
			l=mid+1;
		}
		else if (a[mid]>key)
		{
			h=mid-1;
		}
		else 
		{
			flag=1;
			break;
		}
		
	}
	if(flag==1)
	{
		printf("\nsearch sucessful: ");
		printf("\narray position=%d ",mid+1);
	}
	else
	{
		printf("\nsearch unsucessful: ");
	}
	return (0);
}
