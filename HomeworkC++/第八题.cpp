#include<iostream>
using namespace std;
int main() {
	int x,y;
	cin >> x;
	cout << x << "=";
	while (x % 2 == 0){
		cout << 2;
		x /= 2;
		if (x > 1) {
			cout << "*";
		}
	}
	for (int y = 3; y * y <= x; y += 2) {
		while (x % y == 0) {
			cout << y;
			x /= y;
			if (x  > 1) {
				cout << "*";
			}
		}
	}
	if (x > 2)
		cout << x;
	cout << endl;
	return 0;
}