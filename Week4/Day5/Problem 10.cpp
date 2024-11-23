//GeeksforGeeks
//Longest Substring with K Uniques

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int r=0, l=0, ans=-1;
        map<char, int>m;
        while(r<s.size())
        {
            m[s[r]]++;
            if(m.size()==k)
            {
                ans=max(ans, r-l+1);
            }
            else
            {
                while(m.size()>k)
                {
                    m[s[l]]--;
                    if(m[s[l]]==0)
                    m.erase(s[l]);
                    l++;
                }
            }
            r++;
        }
        return ans;





    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}
