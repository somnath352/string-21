#include<bits/stdc++.h>
using namespace std;

string removeChar(string s, char c, int n){
	for(int i = 0, j = 0; i < n; i++){
		if(s[i] != c){
			s[j] = s[i];
			j++;
		}
		

	}
	return s;
	
}

int main(){
	string s = "world";
	char c = 'r';
	int n = s.size();
	cout << removeChar(s, c, n);
	return 0;
}