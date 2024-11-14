#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int x;
    cin>>x;
    while(x--)
    {
    long long int i, n, tc=0, tnc=0;
    cin>>n;
    vector<long long int>v, v2, v4;
    string s;
    cin>>s;
    for(i=0; i<n; i++)
    {
        if(i<n/2 && s[i]=='L')
        {
            v.push_back(n-1-i);
        }
        else if(i>=n/2 && s[i]=='R')
        {
            v.push_back(i);
        }
        else if(s[i]=='L')
        {
            v.push_back(i);
        }
        else
            v.push_back(n-1-i);
        tc+=v.back();
        if(i<n/2 && s[i]=='L')
        {
            v2.push_back(i);
        }
        else if(i>=n/2 && s[i]=='R')
        {
            v2.push_back(n-1-i);
        }
        else if(s[i]=='L')
        {
            v2.push_back(i);
        }
        else
            v2.push_back(n-1-i);
        tnc+=v2.back();

    }


   vector<pair<long long int, long long int>>v3;

    for(i=0; i<n; i++)
    {
        long long int p=i, d=v[i]-v2[i];
        v3.push_back({d, p});
    }

    sort(v3.begin(), v3.end());


    long long int g=tnc;
    for(i= v3.size()-1; i>=0; i--)
        {
            v4.push_back(g+v[v3[i].second]-v2[v3[i].second]);
            g+=v[v3[i].second]-v2[v3[i].second];
        }

    for(auto u:v4)
        cout<<u<<" ";
    cout<<endl;



    }





    return 0;
}







