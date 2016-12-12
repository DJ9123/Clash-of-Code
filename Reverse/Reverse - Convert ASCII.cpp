/*

A contribution by MandM
The game mode is REVERSE: You do not have access to the statement. You have to guess what to do by observing the following set of tests:
01 Test 1
067111100105110103
Coding
02 Test 2
08013
ERROR
03 Test 3
048054056049049049049049055048057056049048056049048049048051050048054053049049053048057057049048053049048053
068111117098108101032065115099105105
04 Test 4
095126063061041040047038037036035034033060062043045047042081087069082084089085073079080065083068070071072074075076090088067086066078077059058045113119101114116121117105111112097115100102103104106107108122120099118098110109044046
_~?=)(/&%$#"!<>+-/*QWERTYUIOPASDFGHJKLZXCVBNM;:-qwertyuiopasdfghjklzxcvbnm,.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string code;
    cin >> code; cin.ignore();
    if (code.size() % 3 != 0) {cout << "ERROR\n"; return 0;}
    for (int i = 0; i < code.size(); i += 3) {
        int v = 100*code[i]+10*code[i+1]+code[i+2]-111*'0';
        cout << char(v);
    }
    cout <<endl;
}
