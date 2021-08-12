#include <iostream>
using namespace std;

int main() {
	double a, b, c;

	cout << "Enter frist number : ";
	cin >> a;
	cout << "Enter second number : ";
	cin >> b;
	cout << "Enter third number : ";
	cin >> c;

	if (a > b && a > c)
	{
		cout << "The maximum number is " << a;
	}
	else if (b > a && b > c)
	{
		cout << "The maximum number is " << b;
	}
	else
	{
		cout << "The maximum number is " << c;
	}
	cout << endl;

	system("pause");
	return 0;
}