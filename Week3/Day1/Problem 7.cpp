#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, k, x;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        string s;
        int c, r, cou=0;
        cin>>c>>r;
        cin.ignore();
        getline(cin, s);
        for(j=0; j<s.size(); j++)
        {
            if(s[j]=='B')
            {
                for(k=j; k<=j+r-1; k++)
                {
                    if(k<s.size())
                    {
                    s[k]='W';
                    }
                    else
                        break;
                }
                cou++;
            }

        }

        cout<<cou<<endl;
    }




    return 0;
}
