#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int i, t;
    string s1;
    cin>>t;
    cin.ignore();
    vector<string> v;
    for(i=1; i<=t; i++)
    {
        getline(cin, s1);
        v.push_back(s1);
    }
    sort(v.begin(), v.end());
    int s=unique(v.begin(), v.end())-v.begin();
    cout<<s<<endl;

    return 0;
}
