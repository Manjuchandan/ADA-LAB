

#include<stdio.h>

int visited[20],count=0;
  int a[20][20],n; 

void dfs(int v)
{
     count+=1;

  visited[v]=count;
  printf("%d  ", v);
    	int i,j;
	for(i=1;i<=n;i++)
       if(!visited[i]&&a[v][i])
            dfs(i);
}



int main()
{
    int i,s,j;

 printf("enter the no of vertuices");
 scanf("%d",&n);

  printf("enter the adjency matyrices\n");
   for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
  scanf("%d",&a[i][j]);

  printf("enter the source node \t");
  scanf("%d",&s);
 printf("The nodes are visited in the following order\n");
     for(i=s;i<=n;i++)
       {
         if(!visited[i])
  
          dfs(i);
       }
   //dfs(s);


}





/*
#include<stdio.h>
 
void DFS(int);
int G[10][10],visited[10],n;    //n is no of vertices and graph is sorted in array G[10][10]
 
void main()
{
    int i,j;
    printf("Enter number of vertices:");
   
	scanf("%d",&n);
 
    //read the adjecency matrix
	printf("\nEnter adjecency matrix of the graph:");
   
	for(i=0;i<n;i++)
       for(j=0;j<n;j++)
			scanf("%d",&G[i][j]);
 
    //visited is initialized to zero
   for(i=0;i<n;i++)
        visited[i]=0;
 
    DFS(0);
}
 
void DFS(int i)
{
    int j;
	printf("\n%d",i);
    visited[i]=1;
	
	for(j=0;j<n;j++)
       if(!visited[j]&&G[i][j]==1)
            DFS(j);
}*/

