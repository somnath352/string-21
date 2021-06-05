#include<bits/stdc++.h>
using namespace std;

bool areRotations(string str1, string str2){
	if(str1.length() != str2.length()){
		return false;
	}
	string temp = str1 + str1;

	//check if position is -1 or not
	return (temp.find(str2) != string::npos);
}

int main(){
	string str1 = "ABC";
	string str2 = "CAB";
	if(areRotations(str1, str2)){
		cout << "String are rotations of each other";
	}
	else{
		cout << "String are not rotations of each other";
	}
	return 0;
}