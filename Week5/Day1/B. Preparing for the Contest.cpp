#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int a, b, j, l=0;
        cin>>a>>b;
        for(j=1; j<=b; j++)
        {
            cout<<j<<" ";
            if(j==b)
                l=j;
        }
        for(j=a; j>l; j--)
            cout<<j<<" ";
        cout<<endl;

    }



    return 0;
}
