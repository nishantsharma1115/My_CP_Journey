/*
Problem:
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
 
    unordered_map<int, int> map;
    vector<int> res;
        
    for(int i=0; i<nums.size(); i++){
        if(map.find(target-nums[i]) != map.end()){
            res.push_back(map.at(target-nums[i]));
            res.push_back(i);
            break;
        }
        map.insert(make_pair(nums[i], i));
    }
        
    return res;
}

int main() {
	int N;
	cin>>N;

	int temp;
	vector<int> nums;
	for(int i=0; i<N; i++) {
		cin>>temp;
		nums.push_back(temp);
	}

	int target;
	cin>>target;

	vector<int> res = twoSum(nums, target);

	if(res.empty()){
		cout<<"No Such Solution"<<endl;
	}else {
		for(auto val:res) {
			cout<<val<<" ";
		}
		cout<<endl;
	}

	return 0;
}