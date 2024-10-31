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
        int n;
        string s, s2, s3;
        cin>>n>>s;
        s3=s;
        sort(s.begin(), s.end());
        unique(s.begin(), s.end());
        map<char, int>m;
        map<char, char>m2;
        for(int i=0; i<s.size(); i++)
        {
            if(m[s[i]]==0)
            {
                s2.push_back(s[i]);
                m[s[i]]=1;
            }
        }
        int l=0, r=s2.size()-1;
        while(l<=r)
        {
            m2[s2[l]]=s2[r];
            m2[s2[r]]=s2[l];
            r--;
            l++;
        }
        for(int i=0; i<s3.size(); i++)
            cout<<m2[s3[i]];
        cout<<endl;
    }
    return 0;
}




