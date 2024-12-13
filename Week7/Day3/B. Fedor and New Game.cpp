#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int i, j, n, m, k, x=0;
    cin>>n>>m>>k;
    long long int a[m+1];

    for(i=0; i<=m; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<m; i++)
    {
        long long int cnt=0, tmp=a[i]^a[m];
        long long int left=__lg(tmp);
        for(j=0; j<=left; j++)
        {
            if(((tmp>>j)&1)==1)
                cnt++;
        }
        if(cnt<=k)
            x++;

    }
    cout<<x<<endl;





    return 0;
}







