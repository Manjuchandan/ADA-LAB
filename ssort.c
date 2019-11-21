#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    
    int i,j,n,temp,min,x,a[30000];

printf("Enter the size of the array:");
scanf("%d",&n);

//printf("enter the elements of array:");

 for(i=0;i<n;i++)
//scanf("%d",&a[i]);

  {
	x=rand()%100;
         a[i]=x;
   }


double start=clock();

 for(i=0;i<n-1;i++)
 {
    min=i;
  
   for(j=i+1;j<n;j++)
     {
         
if(a[j]<a[min])
          {
		min=j;

           }
      }

     temp=a[i];
     a[i]=a[min];
     a[min]=temp;
 }

double end=clock();

printf("The sorted array is:");
for(i=0;i<n;i++)
printf("%d\n",a[i]);

double totaltime=(end-start)/CLOCKS_PER_SEC;

printf("Total Time Taken is:%lf\n",totaltime);

}//end

    
