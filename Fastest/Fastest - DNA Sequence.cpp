/*
The program :
The nucleotides inside a DNA sequence can be represented by a string composed by A, C, G and T.A sample string representing a DNA sequence is "ATGCTTCAGAAAAGGTCAGCG".

Your task is to count how many times the symbols A, C, G and T appear in the string s.

INPUT :
	A single line, composed of A, C, G and T.

	OUTPUT :
	The number of times A, C, G and T appear in the string s, separated by a space.

	CONSTRAINTS :
	0 < len(s) < 1000

	EXAMPLE :
	Input
	AACT
	Output
	2 1 0 1
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	int w, x, y, z;
	w = x = y = z = 0;
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'A')
			w++;
		else if (s[i] == 'C')
			x++;
		else if (s[i] == 'G')
			y++;
		else
			z++;
	}

	cout << w << " " << x << " " << y << " " << z << endl;
}