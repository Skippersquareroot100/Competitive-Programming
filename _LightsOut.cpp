#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int j=0;j<3;j++)
            {
                arr[i][j]=true;
            }
        }
    }
  
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    
}