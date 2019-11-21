#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sort(int a[],int low,int high,int b[])
{
   int mid;
   if(low<high)
{
  mid =(low+high)/2;

sort(a,low,mid,b);
sort(a,mid+1,high,b);

merge(a,low,mid,high,b);
}
}

merge(int a[],int low,int mid,int high,int b[])
{

   int i=low,j=mid+1,k=low;
   
 while(i<=mid &&j<=high)
 {
    if(a[i]<a[j])
   {   b[k]=a[i];
      i++;
      k++;
    }
 else{
     b[k]=a[j];
     j++; 
     k++;
   }
 }

while(j<=high)
b[k++]=a[j++];

while(i<=mid)
b[k++]=a[i++];

for(i=low;i<=high;i++)
  a[i]=b[i];
}

void main()
{
   int low=0,mid,x,n,high,i,j,k,a[67000],b[89000];

   printf("enter the size of the array");
   scanf("%d",&n);
high=n-1;

for(i=0;i<n;i++){
x=rand()%100;
a[i]=x;
}

double start=clock();

sort(a,low,high,b);


double end=clock();
printf("sorted array is :");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
double totaltime=(end-start)/CLOCKS_PER_SEC;
printf("Time taken is:%lf",totaltime);
}

