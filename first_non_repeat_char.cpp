#include<bits/stdc++.h>
using namespace std;

int nonRepeatChar(string s){
	unordered_map<char,int> m;
	for(auto &ex : s){
		m[ex]++;
	}
	for(int i = 0; i < s.size(); ++i){
		if(m[s[i]] == 1) return i;
	}
	return -1;

}

int main(){
	string s = "welcomew";
	cout << nonRepeatChar(s);
	return 0;
}