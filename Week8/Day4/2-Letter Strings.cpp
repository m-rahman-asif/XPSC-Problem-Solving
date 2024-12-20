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
        long long int i, n, j, c=0;
        cin>>n;
        vector<string>v(n);
        for(i=0; i<n; i++)
        {
            cin>>v[i];
        }
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if ((v[i][0]==v[j][0] && v[i][1]!=v[j][1]) || (v[i][0]!=v[j][0] && v[i][1]==v[j][1]))
                    c++;
            }
        }
        cout<<c<<endl;
    }






    return 0;
}









