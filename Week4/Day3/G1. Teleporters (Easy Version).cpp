#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int i, n, c, s=0, x=0;
        cin>>n>>c;
        long long int a[n];
        for(i=0 ;i<n; i++)
        {
            cin>>a[i];
            a[i]=a[i]+i+1;
        }
        sort(a, a+n);
        for(i=0 ;i<n; i++)
        {
            if(s+a[i]>c)
                break;
            else
            {
                s=s+a[i];
            x++;
            }

        }
        cout<<x<<endl;


    }
    return 0;
}









