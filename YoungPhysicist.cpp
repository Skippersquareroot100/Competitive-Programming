#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[3];
    int arr1[3]={0,0,0};
    for(int i=0;i<t;i++)
    {
       for(int j=0;j<3;j++)
       {
         cin>>arr[j];
         arr1[j]=arr1[j]+arr[j];
       }

       

    }
    if(arr1[0]==0 && arr1[1]==0  && arr1[2]==0)
       {
        cout<<"YES";
       }
       else
       {
         cout<<"NO";
       }
}