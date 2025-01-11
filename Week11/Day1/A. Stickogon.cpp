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
        int i, n, c=0;
        cin>>n;
        int a[n];
        map<int, int>m;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
            if(m[a[i]]>=3)
            {
                c++;
                m[a[i]]=0;
            }
        }
        cout<<c<<endl;


    }



    return 0;
}

