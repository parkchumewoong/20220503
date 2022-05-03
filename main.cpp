#include <iostream>

using namespace std;

int main()
{
	int R = 0;
	int F = 0;
	int A[10] = { 0, };

	srand(static_cast<unsigned int>(time(0)));

	for (int j = 10; j >= 1; --j)
	{
		for (int i = 1; i <= j; ++i)
		{
			cout << "*";

		}
		cout << '\\n';
	}

	return 0;
}