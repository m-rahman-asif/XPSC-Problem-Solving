#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, i, j;
    cin>>n>>m;
    int a[n], b[m];
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<m; i++)
        cin>>b[i];
    vector<int>v;
    int p=0, prev=0;
    for(i=0; i<m; i++)
    {
        int c=0;
        for(j=p; j<n; j++)
        {
            if(a[j]<b[i])
                c++;
            else
            {
                p=j;
                break;
            }
        }

        if(b[i]>a[n-1])
            v.push_back(n);
        else
        {
        v.push_back(c+prev);
                prev+=c;
        }
    }
    for(auto u:v)
        cout<<u<<" ";

    cout<<endl;


    return 0;
}







