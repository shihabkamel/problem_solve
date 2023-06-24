//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalPairs(vector<int>nums, int k){
	    // Code here
	    sort(nums.begin(),nums.end());
	    vector<pair<int,int>>ans;
	    for(int i=0;i<nums.size();i++){
	        for(int j=0;j<nums.size();j++){
	            if(i!=j && nums[i]-nums[j]==k){
	                ans.push_back({nums[i],nums[j]});
	            }
	        }
	    }
	    return ans.size();
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.TotalPairs(nums, k);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
