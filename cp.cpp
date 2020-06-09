#include<iostream>
using namespace std;
main()
{
    int N,C,k,i,j,x,y,ar[20][20],t=0,z=0,f=0,p,q;
   // cout<<"Enter C,N and k="<<endl;
    cin>>C>>N>>k;
    for(i=0;i<=N-1;i++)
    {
       // cout<<"Enter the range of position of cakes,child "<<i+1<<" wants to eat"<<endl;
        cin>>x>>y;
        p=x;
        q=y;
        t=y-x+1;
        for(j=0;j<=t-1;j++)
        {
            ar[i][j]=x;
            x=x+1;
            // cout<<ar[i][j]<<endl;

        }

        x=0;
        y=0;
        z=z+t;

    }
    if(k==0)
    {
    for(i=0;i<=N-1;i++)
    {
    for(j=0;j<=t-1;j++)
    {
        if(ar[i][j]<ar[i+1][j])
        {
            cout<<"Good\n";
        }
        else
        {
            cout<<"Bad\n";
        }
        break;
    }
    break;
    }
    }
    else
    {
      for(i=0;i<=N-1;i++)
    {
    for(j=0;j<=t-1;j++)
    {
        if(ar[i][j]==ar[i+1][j])
        {
          ar[i][j]=ar[i][j]-1;
          if(p==q)
          {
            if(ar[i][j]>0)
                cout<<"Good\n";
             else
                cout<<"Bad\n";
          }
          else{
             ar[i][j+1]=ar[i][j+1]-1;
          if(ar[i][j]>0&&ar[i][j+1]<ar[i+1][j])
            cout<<"Good\n";
          else
            cout<<"Bad\n";
          }
        }

    }

    }
    }
    /*for(i=0;i<N;i++)
    {
     for(j=0;j<z;j++)
     {
         cout<<ar[i][j]<<endl;
     }
    }*/

    return 0;
}

