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
	printf("array elements are : \n");
	for(i=0; i<n; i++)
        {
		printf("\t%d",a[i]);
		}
	printf("the even numbers are : ");
	for(i=0; i<n; i++)
        {	
	      if(a[i]%2==0)
	           printf("\n%d",a[i]);
	}
			return 0;	
}
