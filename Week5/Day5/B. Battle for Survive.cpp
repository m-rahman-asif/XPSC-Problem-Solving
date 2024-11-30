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
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n-2; i++)
            a[n-2]=a[n-2]-a[i];
        cout<<a[n-1]-a[n-2]<<endl;



    }
    return 0;
}








