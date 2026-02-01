#include<stdio.h>
int main()
{
	int a[100];
	int i,n;
	printf("enter how many numbers are there : ");
	scanf("%d",&n);
	printf("\nenter the numbers : ");
	for( i=0; i<n; i++)
        {
		scanf("\t%d",&a[i]);
		}
	printf("array elements in reverse order are : \n");
	for(i=n-1; i>=0; i--)
        {
		printf("\t%d",a[i]);
		}
			return 0;	
}
