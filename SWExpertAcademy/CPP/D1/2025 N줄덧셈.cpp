#include<iostream>
using namespace std;

int main(int argc, char** argv) {
	
    int n = 0;
    cin >> n;
    
    int sum = 0;
    for(int i = 1; i <=n; i++){
    	sum += i;
    }
    cout << sum;
	return 0;
}
