#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    cin>>t;
    string s, s2;
    map < string, int > m;
    for(i=1; i<=t; i++)
    {
        cin >> s;
        if(m[s]==0)
        {
            cout<<"OK"<<endl;
            m[s]++;
        }
        else
        {
            cout<<s<<m[s]<<endl;
            m[s]++;
        }

    }
    return 0;
}
