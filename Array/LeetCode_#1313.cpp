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