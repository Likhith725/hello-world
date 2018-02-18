#include<stdio.h>
#include<stdlib.h>
void merger(int[],int,int,int);
void divider(int[],int,int);
void  main()
{
   int n ;
   int arr[100];
   Printf("Enter the no of elemnets in array\n");
   scanf("%d",n);
   for(int i=0;i<n;i++)
   {
     scanf("%d",&arr[i]);
   }
   divider(arr,0,n-1);
    for(int i=0;i<n;i++)
   {
     printf("%d",arr[i]);
   } 
}
void divider(int arr[],int low,int high)
{
    int mid=low+high/2;

      if(low<high)
      {
          divider(arr,low,mid);
          divider(arr,mid+1,high);
          merger(arr,low,mid,high);
      }
}
void merger(int arr[],int low,int mid,int high)
{
   int arr2=arr;
    
}
