#include<stdio.h>
int main()
{
	int a[100];
	int i,n, s=0;
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
	      s+=a[i];
	}
	printf("\nthe sum of numbers are : %d ",s);
			return 0;	
}
