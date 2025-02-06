#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int i, n;
        cin>>n;
        vector<int>a(n);
        for(i=0; i<n; i++)
            cin>>a[i];

        map<int, int>freq;
        int dups=0;
        for(i=0;i<n; i++){
            freq[a[i]]++;
            dups+=(freq[a[i]]>1);
        }

        dups+=freq.size();

        vector<int> ans;

        while(ans.size()<n){
            ans.push_back(dups);
            if(dups>freq.size()){
                dups--;
            }
        }

        reverse(ans.begin(), ans.end());

       for(i=0; i<n; i++)
            cout<<ans[i]<<" ";
       cout<<endl;
    }
    return 0;
}


