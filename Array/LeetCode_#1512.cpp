/*
Given an array of integers nums.
A pair (i,j) is called good if nums[i] == nums[j] and i < j.
Return the number of good pairs.

Example 1:
Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.

Example 2:
Input: nums = [1,1,1,1]
Output: 6
Explanation: Each pair in the array are good.

Example 3:
Input: nums = [1,2,3]
Output: 0
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int numIdenticalPairs(vector<int>& nums) {
        
    int count = 1;
    unordered_map<int, int> mpp;
        
    for(int i=0; i<nums.size(); i++){
        mpp[nums[i]]++;
    }
        
    count = 0;
    for(auto i: mpp) {
        count = count + (i.second*(i.second-1))/2;
    }
        
    return count;
}

int main() {
    int N;
    cin>>N;

    int temp;
    vector<int> nums(N);
    for(int i=0; i<N; i++) {
        cin>>temp;
        nums[i] = temp;
    }

    cout<<numIdenticalPairs(nums);

    return 0;
}