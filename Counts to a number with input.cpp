#include <iostream>
using namespace std;

void countTo(int)
{
	bool stop = false;
	int n = 1;
	while (stop == false)
	{
		cout << n << endl; //sends to viewer and creates new line
		if (n == max)
		{
			stop = true;
		}
		n++;
	}
}
void main() //runs first
{
	int val;
	cin >> val; //waits for inputs

	countTo(val);

	main();
}