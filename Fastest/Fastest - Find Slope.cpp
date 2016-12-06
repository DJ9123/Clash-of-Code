#include <iostream>
using namespace std;

int main(){
	int a;
	int b;
	cin >> a >> b;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		cout << a * x + b << endl;
	}
}
