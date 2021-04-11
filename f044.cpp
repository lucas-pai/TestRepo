#include <iostream>
using std::cin;
using std::cout;
using std::flush;

int main(){
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	int numSlimeKing,numSlime,days;
	while(cin >> numSlimeKing >> numSlime){
		days=((numSlime/numSlimeKing)+1)/4+1;
		cout << days << '\n';
	}
	return 0;
}
