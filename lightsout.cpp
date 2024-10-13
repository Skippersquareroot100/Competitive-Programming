#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
                arr[i][j]=true;
        }
    }
    
  int brr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             cin>>brr[i][j];

        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             int el=brr[i][j];
             if(el>0)
             {
               
                if(el%2==0)
                {
                    brr[i][j]=0;
                }
                else
                {
                    brr[i][j]=1;
                }
             }
             
        }
    }


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(brr[i][j]==1)
            {
                 if(i==0 && j==0)
                 {
                    if(arr[0][0]==true){arr[0][0]=false;}else{ arr[0][0]=true;}
                    if(arr[0][1]==true){arr[0][1]=false;}else{ arr[0][1]=true;}
                    if(arr[1][0]==true){arr[1][0]=false;}else{ arr[1][0]=true;}
                 }
                 else if(i==0 && j==1)
                 {
                    if(arr[0][0]==true){arr[0][0]=false;}else{ arr[0][0]=true;}
                    if(arr[0][1]==true){arr[0][1]=false;}else{ arr[0][1]=true;}
                    if(arr[0][2]==true){arr[0][2]=false;}else{ arr[0][2]=true;}
                    if(arr[1][1]==true){arr[1][1]=false;}else{ arr[1][1]=true;}
                 }
                 else if(i==0 && j==2)
                 {
                    if(arr[0][1]==true){arr[0][1]=false;}else{ arr[0][1]=true;}
                    if(arr[0][2]==true){arr[0][2]=false;}else{ arr[0][2]=true;}
                    if(arr[1][2]==true){arr[1][2]=false;}else{ arr[1][2]=true;}
                 }
                  else if(i==0 && j==3)
                  {
                    if(arr[0][2]==true){arr[0][2]=false;}else{ arr[0][2]=true;}
                    if(arr[0][1]==true){arr[0][1]=false;}else{ arr[0][1]=true;}
                    if(arr[1][2]==true){arr[1][2]=false;}else{ arr[1][2]=true;}
                  }
                  else if(i==1 && j==0)
                  {
                   if(arr[1][0]==true){arr[1][0]=false;}else{ arr[1][0]=true;}
                   if(arr[0][0]==true){arr[0][0]=false;}else{ arr[0][0]=true;}
                   if(arr[1][1]==true){arr[1][1]=false;}else{ arr[1][1]=true;}
                   if(arr[2][0]==true){arr[2][0]=false;}else{ arr[2][0]=true;}
                  }
                   else if(i==1 && j==1)
                   {
                    if(arr[0][1]==true){arr[0][1]=false;}else{ arr[0][1]=true;}
                    if(arr[1][1]==true){arr[1][1]=false;}else{ arr[1][1]=true;}
                    if(arr[1][0]==true){arr[1][0]=false;}else{ arr[1][0]=true;}
                    if(arr[1][2]==true){arr[1][2]=false;}else{ arr[1][2]=true;}
                    if(arr[2][1]==true){arr[2][1]=false;}else{ arr[2][1]=true;}
                   }
                   else if(i==1 && j==2)
                   {
                        if(arr[0][2]==true){arr[0][2]=false;}else{ arr[0][2]=true;}
                        if(arr[1][1]==true){arr[1][1]=false;}else{ arr[1][1]=true;}
                        if(arr[1][2]==true){arr[1][2]=false;}else{ arr[1][2]=true;}
                        if(arr[2][2]==true){arr[2][2]=false;}else{ arr[2][2]=true;}   
                   }
                   else if(i==2 && j==0)
                   {
                    if(arr[1][0]==true){arr[1][0]=false;}else{ arr[1][0]=true;}
                    if(arr[2][0]==true){arr[2][0]=false;}else{ arr[2][0]=true;}
                    if(arr[2][1]==true){arr[2][1]=false;}else{ arr[2][1]=true;}
                   }
                   else if(i==2 && j==1)
                   {
                        if(arr[2][0]==true){arr[2][0]=false;}else{ arr[2][0]=true;}
                        if(arr[2][2]==true){arr[2][2]=false;}else{ arr[2][2]=true;}   
                        if(arr[1][1]==true){arr[1][1]=false;}else{ arr[1][1]=true;}
                        if(arr[2][1]==true){arr[2][1]=false;}else{ arr[2][1]=true;}
                   }
                   else if(i==2 && j==2)
                   {
                         if(arr[1][2]==true){arr[1][2]=false;}else{ arr[1][2]=true;}
                         if(arr[2][2]==true){arr[2][2]=false;}else{ arr[2][2]=true;} 
                         if(arr[2][1]==true){arr[2][1]=false;}else{ arr[2][1]=true;}
                   }

                 
                    
                 }
            }
        }

     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
     }


    }



        
    

