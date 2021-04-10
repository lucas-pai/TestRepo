#include <iostream>

using std::cin;
using std::cout;
using std::flush;
int main(){
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout << "Continue....\n" << flush;
	int num;
	cin >> num;
	cout << num << '\n' << flush;
	cout << "Done!\n" << flush;
	return 0;
}

