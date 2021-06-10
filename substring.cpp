#include<bits/stdc++.h>
using namespace std;

void subString(string s, int n){
	for(int i = 0; i < n; ++i){
		for(int j = 1; j <= n - i; ++j){
			cout << s.substr(i, j) << endl;
		}
	}
}

int main(){
	string s = "abc";
	int n = s.size();
	subString(s, n);
}