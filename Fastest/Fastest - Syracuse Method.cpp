//https://www.codingame.com/clashofcode/clash/report/275970b3404887c28f122560d9851d0ca28160
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int n;
    cin >> n; cin.ignore();
    
    while(n != 1){
        cout << n << " ";
        if(n % 2 == 0)
            n /= 2;
        else
            n = (n*3) + 1;
        
    }
    cout << n;

}