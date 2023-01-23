#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int sum = 0, max = 0;
    const uint32_t size = 5;
    int arr[size];
    cout << "Enter each month income:" << endl;
    for (size_t i = 0; i < size; i++)
    {
        cout << "->";
        cin >> arr[i];
    }
    
    int min = arr[0];
    
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << max << min;

}