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
        int n, i, j;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=1; i<n; i++)
        {
            if(a[i]<a[i-1])
            {
                break;
            }
        }
        vector<int>v;
        for(j=i; j<n; j++)
        {
            v.push_back(a[j]);
        }
        for(j=0; j<i; j++)
        {
            v.push_back(a[j]);
        }
        int f=1;
        for(i=1; i<n; i++)
        {
            if(v[i]<v[i-1])
            {
                f=0;
                break;
            }
        }
        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

    return 0;
}








 
