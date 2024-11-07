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
        long long int i, n, s=0;
        priority_queue<int>q;
        cin>>n;
        long long int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                if(q.empty()==0)
                {
                    s+=q.top();
                    q.pop();
                }
            }
            else
                q.push(a[i]);
        }
        cout<<s<<endl;
    }
    return 0;
}










