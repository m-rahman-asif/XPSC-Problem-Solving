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
        int i, n;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
        cin>>a[i];


        vector<int>v;
        for(i=0; i<n; i++)
        {
            if(i==0)
            {
                v.push_back(abs(a[0]-a[1]));
            }
            else if(i==n-1)
            v.push_back(abs(a[n-1]-a[n-2]));
            else
            {
                int x=  max(abs(a[i]-a[i+1]),  abs(a[i]-a[i-1]));
                v.push_back(x);
            }

        }
        cout<<*min_element(v.begin(), v.end())<<endl;


    }


    return 0;
}







