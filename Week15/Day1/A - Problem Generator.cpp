#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, i, mp=0;
        cin>>x>>y;
        string s;
        cin>>s;
        map<char, int>m;
        m['A']=0;
        m['B']=0;
        m['C']=0;
        m['D']=0;
        m['E']=0;
        m['F']=0;
        m['G']=0;
        for(i=0; i<s.size(); i++)
        {
            m[s[i]]++;
        }
        if(m['A']<=y)
            mp+=y-m['A'];
        if(m['B']<=y)
            mp+=y-m['B'];
        if(m['C']<=y)
            mp+=y-m['C'];
        if(m['D']<=y)
            mp+=y-m['D'];
        if(m['E']<=y)
            mp+=y-m['E'];
        if(m['F']<=y)
            mp+=y-m['F'];
        if(m['G']<=y)
            mp+=y-m['G'];
        cout<<mp<<endl;
    }
    return 0;
}
