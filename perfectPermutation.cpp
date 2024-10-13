#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
     int n=1e7;
    int aa[n];
    int count=0;

    for(int i=1;i<=a;i++)
    {
        aa[i-1]=i;
        count++;
    }
   
      if(a%2!=0)
        {
            cout<<-1;
        }
        else
        {
             for(int i=0;i<count;i++)
             {
                int k;
                k=aa[i];
                aa[i]=aa[i+1];
                aa[i+1]=k;

             }
        }

        for(int i=0;i<count;i++)
        {
            cout<<aa[i]<<" ";
        }
    
}