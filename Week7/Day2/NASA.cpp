#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>v;
    int i, j;
    for(i=0; i<pow(2,15); i++)
    {
        string s1, s2;
        s1=to_string(i);
        s2=s1;
        reverse(s2.begin(), s2.end());
        if(s1==s2)
            v.push_back(i);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int c=n;
        map<int, int>m;
        vector<int>a(n);
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        cout<<m[a[0]]<<endl;
        for(i=0; i<n; i++)
        {
            for(j=0; j<v.size(); j++)
            {
                if(m[(a[i]^v[j])]==1)
                {
                        c+=m[ (a[i]^v[j]) ];
                }
            }
        }
        cout<<c/2<<endl;


    }


    return 0;
}








