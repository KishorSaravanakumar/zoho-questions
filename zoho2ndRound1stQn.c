#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int sum=0;
	for(int i=0;i<n-1;i=i+2)
	{
		sum=a[i]+a[i+1];
		printf("%d ",sum);
	}
	if(n%2!=0)
	{
		printf("%d",a[n-1]);
	}
	
}
