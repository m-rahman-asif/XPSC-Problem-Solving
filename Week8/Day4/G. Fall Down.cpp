#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int i, j, r, c, m, n;
        cin>>r>>c;
        vector<string>v(r);
        for(i=0; i<r; i++)
        {
           cin>>v[i];
        }
        for(i=r-1; i>=0; i--)
        {
            for(j=0; j<c; j++)
            {
                if(v[i][j]=='*')
                {
                    for(m=i+1; m<r; m++)
                    {
                        if(v[m][j]=='o' || v[m][j]=='*')
                            break;
                        else
                        {
                            v[m][j]='*';
                            v[m-1][j]='.';
                        }
                    }
                }
            }
        }

        for(i=0; i<r; i++)
            cout<<v[i]<<endl;

    }



    return 0;
}









