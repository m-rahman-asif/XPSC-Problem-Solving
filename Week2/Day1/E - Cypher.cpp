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
    int i, j, n, o;
    string s;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
    {
        cin>>o;
        cin>>s;
        for(j=0; j<o; j++)
        {
            if(s[j]=='U')
            {
                if(a[i]==0)
                    a[i]=9;
                else a[i]--;
            }
            else if(s[j]=='D')
            {
                if(a[i]==9)
                    a[i]=0;
                else a[i]++;
            }
        }
    }
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
    return 0;
}
