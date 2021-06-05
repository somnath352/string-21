#include<bits/stdc++.h>
using namespace std;

void permute(string s, int l, int r){
	if(l == r){
		cout << s << endl;
	}

	for(int i = l; i <= r; ++i){
		swap(s[l], s[i]);

		permute(s, l+1, r);

		swap(s[l], s[i]);
	}
}

int main(){
	string s = "ABC";
	int n = s.size();
	permute(s, 0, n-1);
	return 0;
}