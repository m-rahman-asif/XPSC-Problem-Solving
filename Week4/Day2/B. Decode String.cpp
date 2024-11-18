#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<int, char>m;
    int n, i, x=1;
    for(char j='a'; j<='z'; j++)
    {
        m[x]=j;
        x++;
    }
    int t;
    cin>>t;
    while(t--)
    {
    cin>>n;
    string s, ans;
    cin>>s;
    for(i=s.size()-1; i>=0; i--)
    {
        if(s[i]=='0')
        {
            string s2;
            s2.push_back(s[i-2]);
            s2.push_back(s[i-1]);
            int c=stoi(s2);
            ans.push_back(m[c]);
            i=i-2;
        }
        else
        {
            string s2;
            s2.push_back(s[i]);
            int  c=stoi(s2);
            ans.push_back(m[c]);
        }
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;

    }
    return 0;
}







