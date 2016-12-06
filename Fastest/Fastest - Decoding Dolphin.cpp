#include <iostream>
using namespace std;

int main()
{
	char alphabet[27] = { ' ', 'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a' };
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int E;
		cin >> E;
		E++; 
		cout << alphabet[E];
	}
}
