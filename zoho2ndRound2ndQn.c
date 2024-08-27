/*print the row of 2 dimentional matrix without print duplicate rows.get the r,c from user and get matrix elements from user.and finally print the output
sample input 1 : 5 5
8 2 8 5 3
1 2 3 7 9
8 2 8 5 3
2 4 6 8 1
2 4 6 8 1
output :
8 2 8 5 3
1 2 3 7 9
2 4 6 8 1
sample output 2 : 4 3
1 2 3
1 2 3
1 2 3
1 2 3
output : 
1 2 3
*/
#include<stdio.h>
int c;
int compare(int a[],int b[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==b[i])
		{
			count++;
			
		}
	}
	return count;
}
int main()
{
	int r;
	scanf("%d%d",&r,&c);
	int a[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		scanf("%d",&a[i][j]);
	}
	printf("************************\n");
	int m=0;
	int temp[c];
	int temp2[c];
	while(m<r)
	{
		if(m==0)
		{
			for(int l=0;l<c;l++)
			printf("%d ",a[m][l]);
			printf("\n");
			m++;
		}
		else if(m!=0)
		{
			int flag=1;
			for(int k=0;k<c;k++)
			temp[k]=a[m][k];
			
			for(int i=m-1;i>=0;i--)
			{
				for(int j=0;j<c;j++)
				{
					temp2[j]=a[i][j];
				}
				
				int ans=compare(temp,temp2,c);
				if(ans==c)
				{
					flag=0;
					m++;
					break;
				}
				else
				{
					flag=1;
				}
			}
			if(flag)
			{
				for(int i=0;i<c;i++)
				printf("%d ",temp[i]);
				printf("\n");
				m++;
			}
		}
	
	}
}
