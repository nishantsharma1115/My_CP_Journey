/*
Problem:
We are given a list nums of integers representing a list compressed with run-length encoding.
Consider each adjacent pair of elements [freq, val] = [nums[2*i], nums[2*i+1]] (with i >= 0).  
For each such pair, there are freq elements with value val concatenated in a sublist. Concatenate all the sublists from left to right to generate the decompressed list.
Return the decompressed list.

Example 1:
Input: nums = [1,2,3,4]
Output: [2,4,4,4]
Explanation: The first pair [1,2] means we have freq = 1 and val = 2 so we generate the array [2].
The second pair [3,4] means we have freq = 3 and val = 4 so we generate [4,4,4].
At the end the concatenation [2] + [4,4,4] is [2,4,4,4].

Example 2:
Input: nums = [1,1,2,3]
Output: [1,3,3]
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> decompressRLElist(vector<int>& nums) {
        
    vector<int> res;
    vector<int> temp;

    for(int i=0; i<nums.size(); i+=2){

        temp.insert(temp.end(), nums[i], nums[i+1]);		//insert(position, frequency_of_val, val)
        res.insert(res.end(), temp.begin(), temp.end());	//insert(position, start_of_vector, end_of_vector)
        temp.clear();
    }
        
    return res;
}

int main() {
	int N;
	cin>>N;

	int temp;
	vector<int> nums;
	for(int i=0; i<N; i++){
		cin>>temp;
		nums.push_back(temp);
	}

	vector<int> res = decompressRLElist(nums);

	for(auto val:res) {
		cout<<val<<" ";
	}
	cout<<endl;

	return 0;
}