#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c, s;
        cin>>a>>b>>c;
        s=a^b^c;
        cout<<s<<endl;
    }
    return 0;
}








