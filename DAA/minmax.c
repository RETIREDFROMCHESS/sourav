//Assignment 1
#include<stdio.h>
int a[10],min,max;


void minmax(int i,int j);
int main()
{
	int n,i;
	printf("Enter no elements:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	max=a[0];
	minmax(0,n-1);
	printf("Max=%d",max);
	printf("min=%d",min);
	return 0;
	
}

void minmax(int i,int j)
{
	int min1,max1,mid;
	if(i==j)
	{
		min=max=a[i];
	}
	else if(i==j-1)
	{
		if(a[i]<a[j])
		{
			min=a[i];
			max=a[j];
		}
		else
		{
			min=a[j];
			max=a[i];
		}
	}
	else
	{
		mid=(i+j)/2;
		minmax(i,mid);
		min1=min;
		max1=max;
		minmax(mid+1,j);
		if(min1<min)
		{
			min=min1;
		}
		if(max1>max)
		{
			max=max1;
		}
	}
}

