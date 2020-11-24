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