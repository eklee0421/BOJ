#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int arr[3] = {};
	cin >> arr[0] >> arr[1] >> arr[2];;

	sort(arr, arr + 3);

	if (arr[0] + arr[1] - 1 < arr[2]) {
		cout << (arr[0] + arr[1]) * 2 - 1 << endl;
	}
	else {
		cout << arr[0] + arr[1] + arr[2] << endl;
	}

	system("pause");
}
