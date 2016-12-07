/*
https://www.codingame.com/clashofcode/clash/report/275084cdbab42a1f758c48bea72289a878278e
The program:
Your program must output the number of letters inside a message. A letter is a un character in [a-z] or [A-Z].

INPUT:
Line 1: A string message.

OUTPUT:
Line 1: The number of letters inside the message.

EXAMPLE:
Input
I am
Output
3
*/

#include <iostream>
using namespace std;

int main(){
    int count = 0;
    string message;
    getline(cin, message);

    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        if (c < 'A' || c > 'Z' && c < 'a' || c > 'z') continue;
            count++;
    }
    cout << count << endl;
}