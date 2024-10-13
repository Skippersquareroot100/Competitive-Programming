#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,sc,flag=0,time=0;
    cin>>s>>sc;
     cin.ignore();
    char arr[s];
     for(int i=0;i<s;i++)
     {
        cin>>arr[i];
     }
     

     for(int i=0;i<sc;i++)
     {
        for(int j=0;j<s;j++)
        {
             if(arr[j]=='B' && arr[j+1]=='G')
             {
                swap(arr[j],arr[j+1]);
                j++;
             }
        }
     }
    for(int i=0;i<s;i++)
    {
        cout<<arr[i];
    }
}
