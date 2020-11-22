/*
Problem: Given an array nums. 
We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

Example 1
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

Example 2
Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]

*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
			            
	vector<int> res;

	int sum = 0;	
	for(auto val: nums) {
	        sum+=val;
	        res.push_back(sum);
        }
	return res;
}

int main() {

	int n;
	cout<<"Enter n: ";
	cin>>n;
	vector<int> nums;

	for(int i=0; i<n; i++) {
		int temp;
		cin>>temp;
		nums.push_back(temp);
	}
	vector<int> res = runningSum(nums);
	
	cout<<"Running Sum of Array"<<endl;
	for(auto val:res) {
		cout<<val<<" ";
	}
	cout<<endl;
	return 0;
}

