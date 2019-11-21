#include<stdio.h>
#include<stdlib.h>

int a[20][20],q[20],visited[20],n,i,j,f=0;r=-1;

void bfs(int v)
{
    for(i=1;i<=n;i++)
    if(a[v][i]&& !visited[i])
    q[++r]=i;
    
  if(f<=r)
   {
     visited[q[f]]=1;
      bfs(q[f++]);
   }
}

void main()
{
   int v;
  
   printf("enter the no of nodes in the graph:\n");
   scanf("%d",&n);
 
   for(i=1;i<=n;i++)
 {
    q[i]=0; 
    visited[i]=0;
 }

 printf("enter the adjency matrix of the graph:\n:");
 for(i=1;i<=n;i++)
 for(j=1;j<=n;j++)
 scanf("%d",&a[i][j]);

 printf("enter the source node of the graph:");
  scanf("%d",&v);
  
    bfs(v);

   printf("the nodes which are reachable are:\n");
   for(i=1;i<=n;i++)
   {
      if(visited[i]){
        printf("%d\t",i);}           //use bracket
   else
      printf("no nodes are reachable");
   }
}
    
