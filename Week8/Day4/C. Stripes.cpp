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
            int r=0, b=0;
            for(j=0; j<8; j++)
            {
                if(v[i][j]=='R')
                    r++;
                else if(v[i][j]=='B')
                    b++;
            }
            if(r==8)
            {
                f=1;
                cout<<"R"<<endl;
                break;
            }
            else if(b==8)
            {
                f=1;
                cout<<"B"<<endl;
                break;
            }
        }


        if(f==0)
        {
        for(i=0; i<8; i++)
        {
            int r=0, b=0;
            for(j=0; j<8; j++)
            {
                if(v[j][i]=='R')
                    r++;
                else if(v[j][i]=='B')
                    b++;
            }
            if(r==8)
            {
                f=1;
                cout<<"R"<<endl;
                break;
            }
            else if(b==8)
            {
                f=1;
                cout<<"B"<<endl;
                break;
            }
        }
        }


    }









    return 0;
}










