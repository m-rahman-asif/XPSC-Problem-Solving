#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    for(int i=1; i<=4-s.size(); i++)
        cout<<0;
    cout<<s<<endl;
    return 0;
}

