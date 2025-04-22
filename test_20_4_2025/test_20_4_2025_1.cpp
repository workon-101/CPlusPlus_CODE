#include <iostream>
#include <queue>

using namespace std;
int main()
{
	queue <int> q;
	for(int i = 0; i<10 ; i++)
	{
		q.push(i);
		cout << q.front() << " " << q.back() << endl;
	}
	cout << q.size();
	return 0;
}


//#include <iostream>
//#include <stack>
//
//using namespace std;
//int main()
//{
//	stack <int> s;
//	for(int i = 0; i<10 ; i++)
//		s.push(i);
////	cout << s.top() << endl;
//	for(int i = 0; i<20 ; i++)
//	{
//		s.pop();
//		cout << s.size() << endl;
//	}
//	for(int i = 0; i<21 ; i++ )
//	{
//		s.push(i);
//		cout << s.top() << endl;
//	}
////	cout << s.top();
////	for(auto p = s.begin() ; p != s.end() ; p++)
////		cout << *p << " ";
////	cout << s.size() << endl;
////	for(int i = 0 ; i<9 ; i++)
////		s.pop();
////	cout << s.top() << endl;
////	cout << s.size() ;
//	return 0;
//}

//#include <iostream>
//#include <set>
//#include<vector>
//#include <map>

//using namespace std;
//
//int main()
//{
//	map <string, int> m;
//	m["hello"] = 2;
//	m["world"] = 1;
//	m["iloveyou"] = 9;
//	m["ha"] = 0;
//	cout << "hello : " << m["hello"] << endl;
//	for(auto p = m.begin() ; p != m.end() ; p++)
//		cout << p->first << ":" << p->second << endl;
//	cout << "size is " << m.size() << endl;
//	return 0;
//}
//using namespace std;
//
//int main()
//{
//	set <int> s;
//	s.insert(2);
//	s.insert(1);
//	s.insert(100);
//	for(auto p = s.begin() ; p != s.end() ; p++)
//		cout << *p << " ";
//	cout << endl;	
//	s.insert(3);
//	for(auto p = s.begin() ; p != s.end() ; p++)
//		cout << *p << " ";
////	cout << endl << (s.find(1) != s.end()) << endl;
////	cout << (s.find(10) == s.end()) << endl;
////	s.erase(5);
////	cout << (s.find(1) != s.end()) << endl;
//	return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	vector <int> a;
//	cout << a.size() << endl;
////	vector <int> a(10, 3);
////	for(int i = 0; i<10 ; i++)
////		cout << a[i] << " ";
////	cout << endl;
////	a.push_back(11);
////	for(int i = 0 ; i < 11 ; i++)
////		cout << a[i] << " ";
////	cout << endl;
////	a.resize(15);
////	for(int i = 0; i<15; i++)
////		cout << a[i] << " ";
////	cout << endl;
////	for(int* p = a.begin() ; p != a.end() ; p++)
////	{
////		cout << *p << " ";
////	}
//	return 0;
//}

//#include <iostream>
//#include <vector>
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//using namespace std;
//int main() {
//	vector <int> a;
//	a.resize(10);
//	for(int i=0 ; i<10 ; i++)
//	{
//		a[i] = i;
//		cout << a[i] << " ";
//	}
//		
//	cout << endl;
//	a.push_back(100);
//	for(int i = 0 ; i<11 ; i++)
//		cout << a[i] << " ";
////	cout << a.size() << endl;
//	return 0;
//}
