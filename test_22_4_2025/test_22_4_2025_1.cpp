#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	vector <int> m(10);
	for(int i = 0 ; i<10 ; i++)
		m[i] = 10-i;
	for(int i = 0 ; i<10 ; i++)
		cout << m[i] << " ";
	cout << endl;S
	m.push_back(-1);
	for(int i = 0 ; i<11 ; i++)
		cout << m[i] << " ";
	cout << endl;
	sort(m.begin(), m.end());
	for(int i = 0 ; i<11 ; i++)
		cout << m[i] << " ";
	cout << endl;
	
//	cout << "i love you" << endl;
}

//#include <iostream>
//#include <bitset>
//
//using namespace std;
//int main()
//{
//	string m = "10011010";
//	bitset <5> b(m, 1, 3);
//	cout << b << endl;
//	for(int i = 0; i<5 ; i++)
//	{
//		cout << b[4-i] << " ";
//	}
//	cout << endl;
//	cout << b.any() << endl;
//	cout << b.none() << endl;
//	cout << b.count() << endl;
//	cout << b.size() << endl;
//	cout << b.test(2) << endl;
//	b.flip(3);
//	cout << b << endl;
//	b.reset();
//	cout << b << endl;
//	b.flip();
//	cout << b << endl;
//	unsigned long a = b.to_ulong();
//	cout << a << endl;
//	b.set();
//	cout << b << endl;
//	return 0;
//}


//#include <iostream>
//
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
//int main(int argc, char** argv) {
//	return 0;
//}
