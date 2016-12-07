/*The program:
Your program must switch the case of each character of the given string.

INPUT:
S a string.

OUTPUT:
S with lowercase letters instead of uppercase letters and vice-versa.

CONSTRAINTS:
S contains at least 1 character.

EXAMPLE:
Input
Hello World
Output
hELLO wORLD
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;
    getline(cin, S);
    for(int i = 0; i < S.length(); i++){
        char c = S[i];
        if(isupper(c))
            c = tolower(c);
        else
            c = toupper(c);
        cout << c;
    }
}