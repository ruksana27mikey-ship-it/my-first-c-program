#include<stdio.h>
int main()
{
	int a[5]={19,30,23,45,33};
	int num,i;
	printf("enter a number : ");
	scanf("%d",&num);
	for(i=0; i<5; i++)
	{
		if(a[i]==num)
		{
			printf("found at position %d",i+1);
			break;
		}
	}
	if (i==5)
	{
		printf("number not found");
    }
    return 0;
}
