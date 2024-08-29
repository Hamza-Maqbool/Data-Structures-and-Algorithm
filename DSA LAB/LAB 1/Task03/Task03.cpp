// Task03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
using namespace std;
set<int> s[10];
int count1 = 0;
int count2 = 0;
void Create() {
	set<int> set1;
	s[count1] = set1;


}
char menu() {
	cout << "1 Create" << endl;
	cout << "2 Interset" << endl;
	cout << "3 Remove" << endl;
	cout << "4 Union" << endl;
	cout << "5 Intersection" << endl;
	cout << "6 IsMember" << endl;
	cout << "7 IsSubset" << endl;
	cout << "Enter your Option.........." << endl;
	char op;
	cin >> op;
	return op;

}
void inserts() {
	cout << "Enter the How many Numbers you want to insert : ";
	int nmbers;
	cin >> nmbers;
	for (int i = 0; i < nmbers;i++) {
		int num;
		cout << "Enter the Num : ";
		cin >> num;
		s[count2].insert(num);
	}

}
void remove1() {
	cout << "Enter the Num you want to remove : ";
	int it;
	cin >> it;
	auto i = s[0].find(it);
	s[0].erase(i);
}
void union1() {

}
int main()
{
	while(true){
		char op = menu();
		while (op != 7) {
			
			if (op == 1) {
				Create();
				count1++;
				break;
			}
			else if (op == 2) {
				inserts();
				count2++;
				break;
			}
			else if (op == 3) {
				remove1();
				break;
			}
		}
}
	

	set<int> set1;
	set<int> set2 = {8,9,10};
	set<int> set3(set2);
	
	
	for (auto i = set1.begin(); i != set1.end();i++) {
		cout << *i;
	}

	for (auto i = set1.begin(); i != set1.end();i++) {
		cout << *i;
	}
	set3.insert(set1.begin(), set1.end());
	for (auto i = set3.begin(); i != set3.end();i++) {
		cout << *i;
	}

}

