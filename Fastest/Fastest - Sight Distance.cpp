/*
We have a motorcycle race on a straight track of length L meters. Assume that the race starts at point (0,0) of a 2-D coordinate system and ends at (L,0). Then the referee would be positioned at point (R,H) or (R, -H).

The race organizers need to choose a referee who will be able to see the whole road, end-to-end. What would be the minimal sight distance D requirement for a hire-able referee?
Input
Line 1: Parameters L, R, H
Output
A single line containing minimal sight distance D required for hiring the referee.

NOTE: Inputs are such that outputs are always integer.
Constraints
0 < L < 1000
0 < H < 1000
0 < R < 1000
Example
Input
5 3 4
Output
5
*/

#include <iostream>
#include <algorithm>
#include <cmath>u
using namespace std;

int main(){
	int L, R, H;
	cin >> L >> R >> H;
	cout << max(sqrt(R * R + H * H),sqrt(pow(R-L, 2) + H * H)) << endl;
}
