#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case) {
		int a = 0, b =0;
		cin >> a >>b;
        
        cout << "#" << test_case<< " ";
        
        if(a > b) cout << ">"<<endl;
        else if(a == b) cout << "=" <<endl;
        else cout << "<" <<endl;

	}
	return 0;
}
