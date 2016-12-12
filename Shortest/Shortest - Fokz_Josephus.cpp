/*
n clones of Fokz are standing in a circular order (numbered from 1 to n) . Number 1 has a sword. He kills the next person (i.e. No. 2) and gives the sword to the next (i.e. No. 3). All people do the same until only 1 survives. You are expected to output the number of the last survivor.
{Where should the real Fokz stand so that he is the last survivor?}
Input
1 Line containing a number n
Output
Number of the last survivor
Constraints
1 <= n <= 10^5
Example
Input
5
Output
3
*/

#include <iostream>
#include <stdio.h>
using namespace std;

 
int t(int n)
{
  if (n == 1)
    return 1;
  else
    return (t(n - 1) + 1) % n + 1;
}

int main(){
    long long n;
    cin >> n; cin.ignore();
    
    int pos = t(n);
    cout << pos;
}
