#include<stdio.h>
int main()
{
	int a[5]={19,20,21,22,23};
	int num,beg=0,end=4,mid,found=0;
	printf("enter a number to be searched: ");
	scanf("%d",&num);
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(a[mid]==num)
		{
		
			printf("number found at position %d",mid+1);
			found=1;
			break;
		}
		else if(num>a[mid])
		{
			beg=mid+1;
		}
		else if(num<a[mid])
		{
			end=mid-1;
		}
	}
	if (found==0)
	{
		printf("number not found");
    }
    return 0;
}
