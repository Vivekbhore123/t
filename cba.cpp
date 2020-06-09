#include<iostream>
using namespace std;
main()
{
    int N,C,k,i,j,x,y,ar[20][20],t=0,z=0;
    cout<<"Enter C,N and k="<<endl;
    cin>>C>>N>>k;
    for(i=0;i<=N-1;i++)
    {
        cout<<"Enter the range of position of cakes,child "<<i<<" wants to eat"<<endl;
        cin>>x>>y;
        t=y-x+1;
        for(j=0;j<=t-1;j++)
        {
            ar[i][j]=x;
            x=x+1;
             cout<<ar[i][j]<<endl;
        }
        x=0;
        y=0;
        z=z+t;

    }
    for(i=0;i<N;i++)
    {
     for(j=0;j<z;j++)
     {
         cout<<ar[i][j]<<endl;
     }
    }

    return 0;
}
