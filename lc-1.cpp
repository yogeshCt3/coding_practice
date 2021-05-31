#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
	map<int , int> mp;
	int i;
	vector<int> ans;
	for(i =0 ; i < nums.size() ; i++){
		mp[nums[i]] = (i+1);
	}	

	for(i = 0 ; i < nums.size() ; i++){
		if(mp[target-nums[i]]) {
			ans.push_back(i);
			ans.push_back(j);
			return ans;
		}
	}
	
	return ans;
	
    }
};

Solution s;


int main () {
	vector<int> v = {};
	vector<int> a = s.twoSum(v, );
	cout << a [0] << ' ' << a[1];
	return 0;

}