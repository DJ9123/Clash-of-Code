/*
Shortest

You are given a string of characters s. Output the sum of the ASCII value for each character of the string.
Input
Line 1: A string S
Output
Line 1: The sum N of ASCII values
Example
Input
An exemple
Output
959

*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    char x;
    int sum;
    string S;
    getline(cin, S);

    for(int i = 0; i < S.length(); i++){
        x = S[i];
        
            sum += (int) x;
    }
    cout << sum << endl;
}
