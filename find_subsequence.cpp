#include<bits/stdc++.h>
using namespace std;

void subSequence(string input, string output){

	if(input.length() == 0){
		cout << output << endl;
		return;
	}

	subSequence(input.substr(1), output);
	
	subSequence(input.substr(1), output + input[0]);
}

int main(){
	string input = "ab";
	string output = "";
	subSequence(input, output);
	return 0;
}