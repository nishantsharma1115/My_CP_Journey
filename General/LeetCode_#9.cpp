/*
Problem:
Determine whether an integer is a palindrome. 
An integer is a palindrome when it reads the same backward as forward.
Follow up: Could you solve it without converting the integer to a string?

Example 1:
Input: x = 121
Output: true

Example 2:
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Example 3:
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

Example 4:
Input: x = -101
Output: false
*/

#include<iostream>
using namespace std;

bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
        
    if(x == 0){
        return true;
    }
        
    int temp = x;
    long reverse = 0;
    while(temp != 0){
        int rem = temp%10;
        reverse = reverse*10 + rem;
        temp/=10;
    }
        
    if(reverse == x){
        return true;
    }else {
        return false;
    }
}

int main() {
	int n;
	cin>>n;

	cout<<isPalindrome(n)<<endl;

	return 0;
}