#include<stdio.h>
#include<string.h>

void reverse(char *str){
    if(*str){
        reverse(str+1);
        printf("%c",*str);
    }
}

int main(){
    char s[]="hello world";
    reverse(s);
    return 0;
}