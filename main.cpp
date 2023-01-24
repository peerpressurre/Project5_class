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
	cout << "Enter widgth_> ";
	cin >> wid;

	for (size_t i = 1; i < len; i++)
	{
		for (size_t j = 1; j < wid; j++)
		{
			cout << sym << " ";
		}
		cout << "\n";
	} 
	
	return 0;
}