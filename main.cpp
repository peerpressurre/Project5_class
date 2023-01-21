#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    //const uint32_t size = 5;
    //int arr[size];
    //for (size_t i = 0; i < size; i++)
    //{
    //    cout << "item->";
    //    cin >> arr[i];
    //}
    //system("cls");
    //for (size_t i = 0; i < size; i++)
    //{
    //    cout << "[" << i << "] : " << arr[i] << " , " << (long long)&arr[i] << endl;
    //}
    //cout << "Size = " << sizeof(arr) << ", Type = " << typeid(arr).name() << endl;
    //cout << endl;

    //-----------------------------------------------------------------

    int sum = 0;
    const uint32_t size = 6;
    int arr[size];
    cout << "Enter each month income:" << endl;
    for (size_t i = 0; i < size; i++)
    {
        cout << "->";
        cin >> arr[i];
    }

    for (size_t i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "Your 6 months income is: " << sum << "$";

}