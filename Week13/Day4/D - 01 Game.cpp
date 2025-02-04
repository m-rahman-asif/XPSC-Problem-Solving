#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i, z=0, o=0;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
                z++;
            else
                o++;
        }
        int m=min(z, o);
        if(m%2==0)
            cout<<"NET"<<endl;
        else
            cout<<"DA"<<endl;
    }
    return 0;
}

