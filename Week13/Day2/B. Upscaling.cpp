#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n, i, j, c=1;
    cin>>n;
    for(i=1; i<=n*2; i++)
    {
        if(c==1 || c==2)
        {
            int c1=1;
            for(j=1; j<=n*2; j++)
            {
                if(c1==1 || c1==2)
                {
                    cout<<"#";
                    c1++;
                }
                else if(c1==3 || c1==4)
                {
                    cout<<".";
                    c1++;
                    if(c1==5)
                        c1=1;
                }
            }
            c++;
        }
        else if(c==3 || c==4)
        {
            int c1=1;
            for(j=1; j<=n*2; j++)
            {
                if(c1==1 || c1==2)
                {
                    cout<<".";
                    c1++;
                }
                else if(c1==3 || c1==4)
                {
                    cout<<"#";
                    c1++;
                    if(c1==5)
                        c1=1;
                }
            }
            c++;
            if(c==5)
                c=1;
        }
        cout<<endl;
    }
    }
    return 0;
}

 
