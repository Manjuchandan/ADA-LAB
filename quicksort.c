#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sort(int a[],int low,int high) 
{

   if(low<=high)
   { 
     int pos=partition(a,low,high);
      sort(a,low,pos-1);
      sort(a,pos+1,high);
  }

}


  int partition(int a[],int low,int high)
 {

    int key=a[low];
     int i=low+1;
       int j=high;
    
    while(i<=j)
   {
 
        while(a[i]<=key)
         {
              i++;
         }
   
	while(a[j]>key)
       {
	j--;
       }

   if(i<j)
   {
     int temp=a[i];
     a[i]=a[j];
     a[j]=temp; 
    }
}
  
   int temp=a[low];
     a[low]=a[j];
     a[j]=temp;
    
    return j;

}

void main()
{
    int low=0,high,x,i,j,n,a[23454];
   
  printf("enter the size of array \n");
 // fflush(stdin);
  scanf("%d",&n);
  high=n-1;

for(i=0;i<n;i++){
x=rand()%100;
a[i]=x;
}

double start=clock();

sort(a,low,high);


double end=clock();
printf("sorted array is :");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
double totaltime=(end-start)/CLOCKS_PER_SEC;
printf("Time taken is:%lf",totaltime);
}

