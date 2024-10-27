#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin>>a>>b;
    if(b>=a)
        cout<<b-a+1<<endl;
    else
        cout<<0<<endl;
    return 0;
}
