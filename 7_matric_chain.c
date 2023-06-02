#include <stdio.h>
#include<limits.h>
#define INFY 999999999
long int m[20][20];
int s[20][20];
int p[20],i,j,n;
void matmultiply(void)
{
	long int q;
	int k;
	for(i=n;i>0;i--)
	{
		for(j=i;j<=n;j++)
		{
			if(i==j)
    		m[i][j]=0;
    		else
       		{
        		for(k=i;k<j;k++)
        		{
         			q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
        			if(q<m[i][j])
          			{
            			m[i][j]=q;
            			s[i][j]=k;
          			}
         		}
        	}
      	}
 	}
}
int main()
{
	int k;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	for(j=i+1;j<=n;j++)
	{
		m[i][i]=0;
 		m[i][j]=INFY;
 		s[i][j]=0;
	}
	printf("\nEnter the dimensions: \n");
	for(k=0;k<=n;k++)
	{
 		printf("P%d: ",k);
 		scanf("%d",&p[k]);
	}
	matmultiply();
	printf("\nCost Matrix M:\n");
	for(i=1;i<=n;i++)
 	{
 		for(j=1;j<=n;j++)
  		{
  			if(i>j)
  			printf("\t");
  			else
  			printf("%ld\t",m[i][j]);
  		}
		printf("\n");
	}

	printf("\nPartition Matrix M:\n");
	for(i=1;i<=n;i++)
 	{
 		for(j=1;j<=n;j++)
  		{
  			if(i>=j)
  			printf("\t");
  			else
  			printf("%d\t",s[i][j]);
  		}
		printf("\n");
	}
	printf("Enter value of i:");
	scanf("%d",&i);
	printf("Enter value of j:");
	scanf("%d",&j);
	printf("\nMultiplication Sequence : ");
	printf("\nMinimum cost is : %d ",m[i][j]);
	printf("\nValue of k for partition is : %d ",s[i][j]);
	return 0;
}
