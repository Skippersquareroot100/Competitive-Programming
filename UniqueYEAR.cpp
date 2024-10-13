#include <bits/stdc++.h>
using namespace std;
int valid(int arr[],int y)
{
        vector <bool> v(16,1);
    for(int i=0;i<4;i++)
    {
        int a=y%10;
        arr[i]=a;
        y=y/10;
    }
     sort(arr,arr+4);
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i]==arr[j])
            {
                bool a=0;
                 v.push_back(0);
                

            }
        }
    }
    
      return v.size();
}

int main()
{
    int y;
    cin>>y;
    int arr[4];
    y=y+1;
  while(1)
  {
    if(valid(arr,y)==20)
    {
        cout<<y;
        break;
    }
    y++;
  }
    
   }

