#include <iostream>
using namespace std;
int main() {
	int so, tongle = 0;
	cout << "nhap so ";
	cin >> so;
	for (int i = 0; i <= so; i++) {
		if (i % 2 != 0) {
			cout << i << " ";
			tongle = tongle + i;
		}
	}
	cout << "tong cac so le tu 0 den  " << so << "la" << tongle;
	return 0;
}