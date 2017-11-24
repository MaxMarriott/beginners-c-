#include <iostream>
using namespace std;

void cuck(int n, int someValue)
{
	n++;
	cout << n << endl;
	if (n == someValue)
	{
		return; //return to line after cuck in main
	}
	cuck(n , someValue);
}

void main() //hi im a function ()
{
	cuck(0,100);
	int wait;
	cin >> wait;
}

