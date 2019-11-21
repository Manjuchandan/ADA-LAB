    #include<stdio.h>
    #include<math.h>
    
    
    void warshal(int p[10][10],int n) 
    {
    	int i,j,k;
    	for (k=1;k<=n;k++)
    	  for (i=1;i<=n;i++)
    	   for (j=1;j<=n;j++)
    	    p[i][j]=max(p[i][j],p[i][k]&&p[k][j]);
    }
    
    int max(int a,int b)
     {
    	
    	if(a>b)
    	 return(a); 
    	 else
    	 return(b);
    }
    
    void main()
     {
    	int p[10][10],i,j,k,n;
    	
    	printf("\n Enter the number of vertices:");
    	scanf("%d",&n);
    	
    	printf(" Enter the Matrix of input data: \t");
    	for (i=1;i<=n;i++)
    		for (j=1;j<=n;j++)
    		   scanf("%d",&p[i][j]);
    		
    	
    	warshal(p,n);
    	
    	printf("\n Transitive closure: \n");
    	for (i=1;i<=n;i++) {
    		for (j=1;j<=n;j++)
    		   printf("%d\t",p[i][j]);
    		printf("\n");
    	}
    
    }
