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
        int n, a, b;
        cin>>n>>a>>b;
        if(b>a*2)
            cout<<a*n<<endl;
        else
        {
            if(n%2==0)
                cout<<(n/2)*b<<endl;
            else
                cout<<((n/2)*b)+a<<endl;
        }

    }



    return 0;
}
