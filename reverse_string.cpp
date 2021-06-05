#include<bits/stdc++.h>
using namespace std;

string reverse(string s){
	int start = 0, end = s.size() - 1; 
	while(start <= end){
		int temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
	return s;
}

int main(){
	string s = "somu";
	cout << reverse(s);
	return 0;
}