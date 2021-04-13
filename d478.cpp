#include <iostream>

using std::cin;
using std::cout;
using std::flush;

int main(){
	int numOfGroup, numOfMember, compareNum;
	while(cin >> numOfGroup >> numOfMember){
		if(numOfGroup == 0 && numOfMember == 0)
			break;
		for(int iGroup=0; iGroup<numOfGroup; iGroup++){
			int *dataList=new int[numOfMember];
			int countSameNum=0;
			for(int iInput=0; iInput<numOfMember; iInput++)
				cin >> dataList[iInput];
			int nowPosition=0;
			for(int iInput2=0; iInput2<numOfMember; iInput2++){
				cin >> compareNum;
				for(int iCompare=nowPosition; iCompare<numOfMember; iCompare++){
					if(compareNum < dataList[iCompare]){
						nowPosition=iCompare;
						break;
					}
					else if(compareNum == dataList[iCompare]){
						nowPosition=iCompare+1;
						countSameNum++;
						break;
					}
				}
			}
			cout << countSameNum << '\n';
			delete [] dataList;
		}
	}
	return 0;
}
