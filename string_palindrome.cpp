//         	CHECK THAT THE STRING IS PALINDROME OR NOT

#include<bits/stdc++.h>
using namespace std;

int isPalindrome(string s){
	int start = 0;
	int end = s.size() - 1;
	while(start < end){
		if(s[start++] != s[end--]){
			return 0;
			// cout << "palindrome";
		}
	}
	return 1;
	// cout << "not palindrome";
}

int main(){
	string s;
	cin >> s;
	cout << isPalindrome(s);
	return 0;
}