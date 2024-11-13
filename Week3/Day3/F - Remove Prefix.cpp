#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int, int>m;
        vector<int>v(n);
        for(i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int p=-1;
        for(i=n-1; i>=0; i--)
        {
            if(m[v[i]]==0)
            {
                m[v[i]]=1;
            }
            else
            {
                p=i;
                break;
            }
        }
        if(p==-1)
            cout<<0<<endl;
        else
            cout<<p+1<<endl;




    }

    return 0;
}








