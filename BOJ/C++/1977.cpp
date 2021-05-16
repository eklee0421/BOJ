#include <iostream>
using namespace std;

int main() {

	int m = 0, n = 0;
	cin >> m >> n;

	int min = 0;
	int sum = 0;
	
	int now = 0;
	while (now*now <= n) {
		if (now*now >= m) {
			sum += now * now;
			if (min == 0) {
				min = now * now;
			}
		 }
		now++;
	}

	if (sum == 0) cout << -1 << endl;
	else {
		cout << sum << endl;
		cout << min << endl;
	}
}
