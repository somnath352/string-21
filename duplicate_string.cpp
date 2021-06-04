//        FIND ALL THE DUPLICATE ELEMENT AND COUNT IT FROM THE STRING(USING MAP)

#include<bits/stdc++.h>
using namespace std;

void printDups(string s){
	unordered_map<char, int> count;
	for(int i = 0; i < s.length(); i++){
		count[s[i]]++;
	}

	for(auto ex : count){
		if(ex.second > 1){
			cout << ex.first <<", count = " << ex.second << endl;
		}
	}
}

int main(){
	string s = "hello world";
	printDups(s);
	return 0;
}
