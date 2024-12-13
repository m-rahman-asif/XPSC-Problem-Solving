#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, r=0, ans;
    cin>>n;
    string s;
    s=to_string(n);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='4')
            s[i]='0';
        else s[i]='1';
    }
    for(int i=0; i<pow(2, s.size()); i++)
    {
        string s2;
        for(int j=s.size()-1; j>=0; j--)
        {
            if(((i>>j)&1))
                s2.push_back('1');
            else s2.push_back('0');
        }
        if(s==s2)
        {
            ans=i+1;
            break;
        }
    }
    for(int i=1; i<s.size(); i++)
        r+=pow(2, i);
    ans+=r;
    cout<<ans<<endl;
    return 0;
}








