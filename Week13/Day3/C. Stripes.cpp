#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, i, j;
    cin>>t;
    while(t--)
    {
        vector<string>v(8);
        for(i=0; i<8; i++)
        {
            cin>>v[i];
        }
        int f=0;
        for(i=0; i<8; i++)
        {
            int r=0;
            for(j=0; j<8; j++)
            {
                if(v[i][j]=='R')
                    r++;
            }
            if(r==8)
            {
                f=1;
                break;
            }
        }

        if(f==1)
            cout<<"R"<<endl;
        else
            cout<<"B"<<endl;
    }
    return 0;
}
