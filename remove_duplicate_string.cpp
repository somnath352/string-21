//O(N^2) approarch

#include<bits/stdc++.h>
using namespace std;

char *removeDuplicate(char str[], int n){
	int index = 0;

	for(int i = 0; i < n ; ++i){
		int j;
		for(j = 0; j < i; ++j){
			if(str[i] == str[j]) break;
		}

		if(j == i)
		str[index++] = str[i];
	} 
	return str;
}

int main(){
	char str[] = "hello";
	int n = sizeof(str) / sizeof(str[0]);
	cout << removeDuplicate(str, n);
	return 0;
}


//O(N) approach  unordered_map

// void removeDuplicate(char *s, int n){

// 	unordered_map<char,int> exist;
// 	int index = 0; 
// 	for(int i = 0; i < n ; ++i){
// 		if(exist[s[i]] == 0){
// 			s[index++] = s[i];
// 			exist[s[i]]++;
// 		}
// 	}
// 	return s;
// }
