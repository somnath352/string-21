#include<bits/stdc++.h>
using namespace std;

void convertString(string s){
	stringstream var(s);

	int x = 0;
	var >> x;

	cout << x;
}

int main(){
	string s = "235";
	convertString(s);
	return 0;
}