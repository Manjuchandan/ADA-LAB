
#include<stdio.h>
#include<stdlib.h>
int i,j,k,n,m,wt,val;

void knapsac(int wt[],int val[])
{
   int v[n+1][m+1];
for(i=0;i<=n;i++)
{
  for(j=0;j<=m;j++)
  {
     if(i==0||j==0)
       v[i][j]=0;
   else if(wt[i-1]>j)
          v[i][j]=v[i-1][j];
else
       v[i][j]=max(v[i-1][j],(v[i-1][j-wt[i-1]]+val[i-1]));
}
}

printf("result is \n");
   for(i=0;i<=n;i++)
{
  for(j=0;j<=m;j++)
    printf("%d\t",v[i][j]);
   printf("\n");
}
}

int max(int a,int b)
{
   if(a>b)
return a;
else
return b;
}

  
void main()
{
    
   int wt[20],val[20];
 
 printf("enter the no of objects");
 scanf("%d",&n);

 printf("enter the weight and value of each objects");
 for(i=0;i<n;i++)
 scanf("%d%d",&wt[i],&val[i]);

printf("enter the knapsac capacity");
scanf("%d",&m);

knapsac(wt,val);

}

