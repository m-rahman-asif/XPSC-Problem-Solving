//GeeksforGeeks
//Problem: Max Sum Subarray of size K

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
        vector<int>v;
        long long int i, j, mx=-1;
        for(i=0; i<=arr.size()-k; i++)
        {
            long long int t=i+k, s=0;
            for(j=i; j<t; j++)
            {
                s+=arr[j];
            }
            if(s>mx)
            mx=s;
        }
        return mx;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        long long ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
