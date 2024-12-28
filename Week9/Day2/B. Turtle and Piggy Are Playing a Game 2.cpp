#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i, ai;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
            cin>>a[i];
        sort(a, a+n);
        ai=n/2+1;
        cout<<a[ai-1]<<endl;






    }




    return 0;
}

