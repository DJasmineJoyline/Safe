#include<stdio.h>
int main()
{
    
    int m,n,a[100][100],i,j,count=0;
    char b[100][100];
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf(" %c",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        
            if((b[i][0]=='M'&& a[i][0]<60) && (b[0][i]=='M'&& a[0][i]<60) && (b[i][n-1]=='M' && a[i][n-1]<60) && (b[n-1][i]=='M'&& a[n-1][i]<60 ))
            count++;
            else
            break;
    }
    if(count==n)
    printf("Safe");
    else
    printf("No");
    
	
	
	
	return 0;
}
