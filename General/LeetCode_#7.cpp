/*
Problem:
Given a 32-bit signed integer, reverse digits of an integer.

Note:
Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. 
For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

 

Example 1:
Input: x = 123
Output: 321

Example 2:
Input: x = -123
Output: -321

Example 3:
Input: x = 120
Output: 21

Example 4:
Input: x = 0
Output: 0
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int sign = x<0?-1:1;
    if (x==0) {
        return x;
    }
        
    if(sign == -1) {
        x*=-1;
    }
        
    long res = 0;
        
    while(x>0) {
        res = (res*10) + (x%10);
        x/=10;
    }
        
    if(res > INT_MAX || res < INT_MIN) {
        return 0;
    }else {
        if(sign == -1) {
            return -1*((int)res);
        }else {
            return (int)res;
        }
    }
}

int main() {
	int n;
	cin>>n;

	cout<<reverse(n);

	return 0;
}