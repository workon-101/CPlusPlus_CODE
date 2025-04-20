#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include<cstring>

using namespace std;

void f(int &a)
{
	for(int i = 0 ; i < 10 ; i++)
	{
		a++;
	}
}
S
int main()
{
	int a = 6;
	f(a);
	cout << a << endl;
	return 0;
}
////int main(int argc, char** argv) {
////	int n;
////	cin >> n;
////	cout << "wohaoshuai!" << n << endl;
////	return 0;
////}
//struct st{
//	string name;
//	int age;
//};
//int main()
//{
//	st a[10];
////	string a = "hello world";
////	string b = " world";
//////	getline(cin , a);
////	cout << a << endl;
////	string a_sub = a.substr(5);
////	cout << a_sub << endl;
//////	cout << a.length() << endl;
////	
////	const int n = 10;
////	int arr[n] = {n,n,n,n,n};
////	for(int i = 0 ; i<10 ; i++)
////	{
////		cout << arr[i] << " ";
////	}
////	cout << endl;
////	bool flag1 = true;
////	bool flag2 = -1;
////	bool flag3 = 0;
////	cout << flag1  << flag2  << flag3  << endl;
////	int n;
////	std::cin >> n;
////	for(int i=0 ; i<10; i++)
////		std::cout << n << " ";
////	std::cout << std::endl;
////	for(int i = 0 ; i<10 ; i++)
////		std::cout << n-1 << " ";
//	return 0;
//}
