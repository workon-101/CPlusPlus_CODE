#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	char c;
	cin >> c;
	cout << "isalpha:" << isalpha(c) << endl;
	cout << "islower:" << islower(c) << endl;
	cout << "isupper:" << isupper(c) << endl;
	cout << "isalnum:" << isalnum(c) << endl;
	cout << "isspace:" << isspace(c) << endl;
	
	char s = tolower(c);
	cout << s << endl;
	char s1 = toupper(c);
	cout << s1 << endl;
}


//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//bool cmp(int x, int y)
//{
//	return x>y;
//}
//
//using namespace std;
//int main()
//{
//	vector <int> v;
//	for(int i = 1 ; i<=10 ; i++)
//		v.push_back(i);
//	for(auto p = v.begin() ; p!= v.end() ; p++)
//		cout << *p << " ";
//	cout << endl;
//	sort(v.begin(), v.end(), cmp);
//	for(auto p = v.begin() ; p!=v.end() ; p++)
//		cout << *p << " ";
//	cout << endl;
//}
