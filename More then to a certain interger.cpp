#include <iostream>
using namespace std;

void countTo(int max = 1000) //numbers counted up to
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
    int wait;

    int val;
    cin >> val;

    countTo(val);

    cin >> wait;
}