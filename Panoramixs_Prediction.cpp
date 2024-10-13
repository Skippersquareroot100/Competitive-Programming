#include <bits/stdc++.h>
using namespace std;
 const int N= 1e7+10;
 vector <bool> isPrime(N,1);
int main()
{
   isPrime[0]= isPrime[1]= false;

   for(int i=0;i<N;i++)
   {
    if(isPrime[i]== true)
    {
        for(int j=2*i; j<N; j=j+i)
        {
             isPrime[j]=false;
        }
        
    }
   }
     int a,b;
     cin>>a>>b;

  
  int prime=0;

   for(int i=a+1;i<N;i++)
   {
      if(isPrime[i]==true)
      {
           prime=i;
           break;
      }
   }
   if(prime==b)
   {
    cout<<"YES";
   }
   else
   {
     cout<<"NO";
   }

}