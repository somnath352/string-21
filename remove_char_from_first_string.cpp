#include<bits/stdc++.h>
#define NO_OF_CHAR 256
using namespace std;

int *stringCount(string str2){
	int *count = (int*)calloc(sizeof(int), NO_OF_CHAR);
	for(int i = 0; i < str2.size(); ++i){
		 count[str2[i]]++;
	}
	return count;
} 

string removeString(string str1, string str2){
	int *count = stringCount(str2);
	string res;

	int ip_index = 0;
	while(ip_index < str1.size()){
		char temp = str1[ip_index];

		if(count[temp] == 0){
			res.push_back(temp);
		}
		ip_index++;
	}
	return res;

}

int main(){
	string str1 = "hello";
	string str2 = "world";
	cout << removeString(str1, str2) << endl;
}