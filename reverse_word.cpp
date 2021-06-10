#include<bits/stdc++.h>
using namespace std;

void reverseWord(string s){ 
	vector<string> temp;
	string str = "";

	for(int i = 0; i < s.length(); ++i){
		if(s[i] == ' '){
			temp.push_back(str);
			str = "";
		}
		else{
			str += s[i];
		}
	}
	// last word add to vector
	temp.push_back(str);

	for(int i = temp.size() - 1; i >= 0; --i){
		cout << temp[i] << " ";
	}


}

int main(){
	string s = "hello world";
	reverseWord(s);
	return 0;
}