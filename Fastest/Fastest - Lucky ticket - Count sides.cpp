/*
https://www.codingame.com/clashofcode/clash/report/275116beb71c325c30b3b52505d1640cb5de3a
The program:
A ticket has a 6 digit number that goes from 000000 to 999999. It is a lucky ticket if the sum of the first three digits is equal to the sum of the last three digits.

You are given N ticket numbers. For each of them your program must output true if a given ticket number is lucky or false if not.

INPUT:
Line 1: A quantity of ticket numbers N.
Next N lines:A ticket number T, a string of 6 digits.

OUTPUT:
N lines: true if the current ticket is a lucky one, false otherwise.

CONSTRAINTS:
0 < N ≤ 10
T contains only digits (0-9)

EXAMPLE:
Input
4
123006
111222
000000
557766
Output
true
false
true
false
 */
 
#include <iostream>
using namespace std;
int main(){
    int n, c, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        c = 0;
        string t;
        cin >> t;
        for(int j = 0; j < 6; j++){
            x = int(t[j]) - 48;
            if (j < 3)
                c += x;
            else
                c -= x;
        }
        if(c)
            cout << "false";
        else
            cout << "true";
    }
}