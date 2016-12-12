/*
Print advantage from of chess pieces

Input: 
8
********
K*******
********
********
**r***k*
********
P*****R*
********

Output:
1
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int D = 0;
    int N;
    cin >> N; cin.ignore();
    for (int i = 0; i < N; i++) {
        string S;
        getline(cin, S);
        for(int j = 0; j < N; j++){
            if(S[j] == 'P')
                D++;
            else if (S[j] == 'N' || S[j] == 'B')
                D+= 3;
            else if (S[j] == 'R')
                D+= 5;
            else if (S[j] == 'Q')
                D+= 9;
            else if(S[j] == 'p')
                D--;
            else if (S[j] == 'n' || S[j] == 'b')
                D-= 3;
            else if (S[j] == 'r')
                D-= 5;
            else if (S[j] == 'q')
                D-= 9;
            
        }
    }

    
    if(D == 0)
        cout << "equal" << endl;
    else
        cout << D << endl;
}
