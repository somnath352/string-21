//         	CHECK THAT THE STRING IS PALINDROME OR NOT

#include<bits/stdc++.h>
using namespace std;

string isPalindrome(string s){
	int start = 0;
	int end = s.size() - 1;
	while(start < end){
		if(s[start++] != s[end--]){
			return "NO";
			// cout << "palindrome";
		}
	}
	return "YES";
	// cout << "not palindrome";
}

int main(){
	string s;
	cin >> s;
	cout << isPalindrome(s);
	return 0;
}
