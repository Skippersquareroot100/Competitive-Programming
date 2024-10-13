#include <bits/stdc++.h>
using namespace std;
void selectionsort(int arr[], int n)
{
         int mindex,j,i;
    
    for( i=0;i<n-1;i++)
    {
        mindex=i;
        for( j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mindex])
            {
                mindex=j;
           
            }
          
        }
            if(mindex != i)
            {
                swap( arr[mindex], arr[i]);
            }
          
    }

 
}
int main()
{
    int arr[5]={50,40 ,3,2,1};
int n=sizeof(arr)/sizeof(arr[0]);
selectionsort(arr,n);
      for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
}