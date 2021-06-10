#include<bits/stdc++.h>
using namespace std;

void nonRepeat(string s){
	unordered_map<char, int> count;
	for(int i = 0; i < s.length(); ++i){
		count[s[i]]++;
	}

	for(auto it : count){
		if(it.second <= 1){
			cout << it.first << endl;
		}
	}
}

int main(){
	string s = "hello";
	nonRepeat(s);
	return 0;
}