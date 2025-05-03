#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

bool isMatch(string s, string p) {
    int i=0,j=0;
    char c;
    while(s[i]){
        if(p[j]=='.' || p[i]==s[j]){
            c=p[j];
            i++;
            j++;
            if(p[j]=='*'){
                if(c=='.') return true;
                while(s[i]==c) i++;
                j++;
            }
        }
        else{
            printf("false\n");
            return false;
        }
    }
    printf("true\n");
    return true;
}

int main(){
    string cad,regex;
    std::cin >> cad;
    std::cin >> regex;
    isMatch(cad,regex);
    return 0;
}