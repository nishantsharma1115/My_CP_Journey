#include<iostream>
#include<bits/stdc++.h>
#include<regex>
using namespace std;

bool detectCapitalUse(string word) {
    return regex_match(word, regex("[A-Z]*|.[a-z]*"));
}

int main() {
	string word;
	cin>>word;

	cout<<detectCapitalUse(word)<<endl;

	return 0;
}