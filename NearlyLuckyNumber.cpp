#include <bits/stdc++.h>
using namespace std;
int main()
{
   string a;
   cin>>a;
   int flag=0;
   for(int i=0;i<a.size();i++)
   {
    
      if(a[i]==52 || a[i]==55)
      {
             flag++;
        
      }
   }
   if(flag==4 || flag==7)
   {
    cout<<"YES";
   }
   else
   {
    cout<<"NO";
   }
}