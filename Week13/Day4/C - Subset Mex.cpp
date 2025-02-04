#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i, x, n;
        cin>>n;
        vector<int>a(105);
        for(i=0; i<n; i++)
        {
            cin>>x;
            a[x]++;
        }
        int b=-1, c=-1;
        for(i=0; i<=105; i++)
        {
            if(a[i]>0)
            {
                a[i]--;
            }
            else
            {
                b=i;
                break;
            }
        }
        for(i=0; i<=105; i++)
        {
            if(a[i]>0)
            {
                a[i]--;
            }
            else
            {
                c=i;
                break;
            }
        }
        cout<<b+c<<endl;
    }
    return 0;
}
