#include <iostream>
using namespace std;

int main()
{
	char sym;
	cout << "Enter symbol-> ";
	cin >> sym;
	int len, wid;
	cout << "Enter length-> ";
	cin >> len;
	cout << "Enter widgth-> ";
	cin >> wid;

	for (size_t i = 1; i < len+1; i++)
	{
		for (size_t j = 1; j < wid+1; j++)
		{
			if (i == 1 || j == 1 || i == len || j == wid)
			{
				cout << sym << "  ";
			}
			else
			{
				cout << "   ";
			}
		}
		cout << "\n";
	}

	return 0;
}