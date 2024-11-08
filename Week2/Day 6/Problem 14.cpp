#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, i;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        map<int, int>m;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        sort(a, a+n);
        int c=0;
        for(i=0; i<n; i++)
        {
            int v=a[i];
            if(m[a[i]]!=0)
            {
                c++;
                while(m[v]>0)
                {
                    m[v]--;
                    v++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}











