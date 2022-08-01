//bubble sort  program
#include<stdio.h>
#include<conio.h>
int main()
{
	int n=0,i=0,j=0,temp=0;
	printf("enter the array size: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("\nenter the %d array element: ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nthe sorted array elements are: ");
	for(i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
	return (0);
}
