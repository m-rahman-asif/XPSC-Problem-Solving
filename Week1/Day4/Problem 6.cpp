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
    string s, s2;
    vector<int>vs;
    vector<int>vc;
    cin>>s;
    s2=s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z' && s[i]!='B')
            vc.push_back(i);
        else if(s[i]>='a' && s[i]<='z' && s[i]!='b')
            vs.push_back(i);
        if(s[i]=='b')
        {
            if(vs.empty()!=1)
            {
                s2[vs[vs.size()-1]]='_';
                vs.pop_back();
            }
            s2[i]='_';
        }
        else if(s[i]=='B')
        {
            if(vc.empty()!=1)
            {
                s2[vc[vc.size()-1]]='_';
                vc.pop_back();
            }
            s2[i]='_';
        }
    }
    for(int i=0; i<s2.size(); i++)
    {
        if(s2[i]!='_')
        cout<<s2[i];
    }
    cout<<endl;
    }
    return 0;
}




