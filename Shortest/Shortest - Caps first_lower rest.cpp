//https://www.codingame.com/clashofcode/clash/report/275110af51355751edc9b1e484a6b448a3e5b5
#include <iostream>
#include <string>

using namespace std;

int main(){
    string S;
    getline(cin, S);

    S[0] = toupper(S[0]);
    for(int i = 0; i < S.length() - 1 ; i++)
        if(S[i] == 32)
            S[i+1] = toupper(S[i+1]);
        else 
            S[i+1] = tolower(S[i+1]);

    cout << S;