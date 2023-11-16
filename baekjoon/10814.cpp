//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Member {
//public:
//	int age, regDate;
//	string name;
//	Member(int age, string name, int regDate) {
//		this->age = age;
//		this->name = name;
//		this->regDate = regDate;
//	}
//};
//
//bool comp(Member a, Member b) {
//	return a.age == b.age ? a.regDate < b.regDate : a.age < b.age;
//}
//
//int main() {
//	int N;
//	cin >> N;
//	vector<Member> members;
//	for (int i = 0; i < N; i++) {
//		int age;
//		string name;
//		cin >> age >> name;
//		Member member(age, name, i);
//		members.push_back(member); 
//	}
//	sort(members.begin(), members.end(), comp);
//
//	for (int i = 0; i < N; i++) {
//		cout << members[i].age << " " << members[i].name << "\n";
//	}
//
//}