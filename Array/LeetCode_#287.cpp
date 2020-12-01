/*
Problem:
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one duplicate number in nums, return this duplicate number.

Follow-ups:

    How can we prove that at least one duplicate number must exist in nums? 
    Can you solve the problem without modifying the array nums?
    Can you solve the problem using only constant, O(1) extra space?
    Can you solve the problem with runtime complexity less than O(n2)?

Example 1:
Input: nums = [1,3,4,2,2]
Output: 2

Example 2:
Input: nums = [3,1,3,4,2]
Output: 3

Example 3:
Input: nums = [1,1]
Output: 1

Example 4:
Input: nums = [1,1,2]
Output: 1
*/

#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(int nums[]) {
        
    int slow_ptr = nums[0];
    int fast_ptr = nums[0];
        
    do{
        slow_ptr = nums[slow_ptr];
        fast_ptr = nums[nums[fast_ptr]];
    }while(slow_ptr != fast_ptr);

    slow_ptr = nums[0];
    while(slow_ptr != fast_ptr){
        slow_ptr = nums[slow_ptr];
        fast_ptr = nums[fast_ptr];
    }
        
    return slow_ptr;
}

int main() {
	int n;
	cin>>n;
	
	int arr[n];

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	int duplicate = findDuplicate(arr);

	cout<<duplicate<<endl;

	return 0;
}