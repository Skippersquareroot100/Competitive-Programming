#include <bits/stdc++.h>
using namespace std;
int atoA( int a)
{
    return a-32;
}
int Atoa( int a)
{
    return a+32;
}
int main()
{
  string a;
  int Af=0,af=0;
  cin>>a;
  for(int i=0;i<a.size();i++)
  {
        if(int(a[i])<97)
        {
            Af++;
        }
        else
        {
            af++;
        }
  }


  
       if(Af>af)
       {

          for(int i=0;i<a.size();i++)
          {
           if(int(a[i])<97)
           {
              a[i]=char(Atoa(int(a[i])));
           }
          }
            for(int i=0;i<a.size();i++)
          {
            cout<<char(atoA(int(a[i])));
          }
       }
       else
       {
        for(int i=0;i<a.size();i++)
          {
           if(int(a[i])>90)
           {
               a[i]=char(atoA(int(a[i])));
           }
          }
          for(int i=0;i<a.size();i++)
          {
            cout<<char(Atoa(int(a[i])));
          }
           }
  


}
