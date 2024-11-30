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
        int i, n;
        string s;
        cin>>n>>s;
        map<char, int>m;
        for(i=0; i<n; i++)
            m[s[i]]++;
        while(n!=0)
        {
            for(char c='a'; c<='z'; c++)
            {
                if(m[c]!=0)
                {
                    cout<<c;
                    m[c]--;
                    n--;
                }
            }
        }
        cout<<endl;


    }

    return 0;
}








