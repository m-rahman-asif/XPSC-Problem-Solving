#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, a, b, p, q, c=0, da, db, dab;

    cin>>n>>a>>b>>p>>q;

    c+=(n/a)*p;
    c+=(n/b)*q;
    dab=n/(lcm(a, b));
    c-= dab*min(p,q);
    cout<<c<<endl;




    return 0;
}









