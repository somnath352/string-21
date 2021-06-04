#include<bits/stdc++.h>
#define ASCII_SIZE 256
using namespace std;

char getMaxOccuringChar(char* s){
	int count[ASCII_SIZE] = {0};

	int len = strlen(s);
	int max = 0;
	char result;

	for(int i = 0; i < len; ++i){
		count[s[i]]++;
		if(max < count[s[i]]){
			max = count[s[i]];
			result = s[i];
		}
	}
	return result;
}

int main(){
	char s[] = "somu";
	cout << getMaxOccuringChar(s);
	return 0;
}