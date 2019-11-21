#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    
    int i,j,n,temp,x,a[30000];

printf("Enter the size of the array:");
scanf("%d",&n);

printf("enter the elements of array:");

 for(i=0;i<n;i++)
scanf("%d",&a[i]);
double start=clock();

 for(i=0;i<n;i++)
 {
    
  
   for(j=0;j<n-1;j++)
     {
         if(a[j]>a[j+1])
      
     {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
     }
  }
}
double end=clock();

printf("The sorted array is:");
for(i=0;i<n;i++)
printf("%d\n",a[i]);

double totaltime=(end-start)/CLOCKS_PER_SEC;

printf("Total Time Taken is:%lf\n",totaltime);

}//end

    
