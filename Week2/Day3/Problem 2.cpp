#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, c=0, ini=1;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a+0, a+n);
    for(i=0; i<n; i++)
    {
        if(a[i]>=ini)
        {
            c++;
            ini++;
        }
    }
    cout<<c<<endl;
    return 0;
}








