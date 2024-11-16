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
        int n, k, m=INT_MAX;
        cin>>n>>k;
        string s;
        cin>>s;
        int i, j, c=0;
        for(i=0; i<k; i++)
        {
            if(s[i]=='W')
                c++;
        }
        m=c;
        for(i=k; i<n; i++)
        {
            if(s[i]=='W')
            {
                c++;
            }
            if(s[i-k]=='W')
            {
                c--;
            }
            if(c<m)
                m=c;
        }
        cout<<m<<endl;
    }
    return 0;
}







