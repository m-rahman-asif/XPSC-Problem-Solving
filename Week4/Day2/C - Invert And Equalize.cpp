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

    int n, z=0, o=0;;
    cin>>n;
    string s;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
        {
            o++;
            for(j=i+1; j<s.size(); j++)
            {
                if(s[j]=='0')
                {
                    i=j-1;
                    break;
                }
            }
        }
        else
        {
            z++;
            for(j=i+1; j<s.size(); j++)
            {
                if(s[j]=='1')
                {
                    i=j-1;
                    break;
                }
            }
        }
        if(j==s.size())
            break;
    }
    cout<<min(o,z)<<endl;
    }
    return 0;
}







