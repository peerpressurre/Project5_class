#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int sum = 0, max = 0;
    const uint32_t size = 12;
    int arr[size];
    cout << "Enter each month income starting with January:" << endl;
    for (size_t i = 0; i < size; i++)
    {
        cout << "->";
        cin >> arr[i];
    }
    
    int min = arr[0];
    
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }

    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] <= min)
        {
            min = arr[i];
        }
    }


    if (max == arr[0])
    {
        cout << "Maximum income of the year was in January - " << max << "$";
    }
    else if (max == arr[1])
    {
        cout << "Maximum income of the year was in February - " << max << "$";
    }
    else if (max == arr[2])
    {
        cout << "Maximum income of the year was in March - " << max << "$";
    }
    else if (max == arr[3])
    {
        cout << "Maximum income of the year was in April - " << max << "$";
    }
    else if (max == arr[4])
    {
        cout << "Maximum income of the year was in May - " << max << "$";
    }
    else if (max == arr[5])
    {
        cout << "Maximum income of the year was in June - " << max << "$";
    }
    else if (max == arr[6])
    {
        cout << "Maximum income of the year was in July - " << max << "$";
    }
    else if (max == arr[7)
    {
        cout << "Maximum income of the year was in August - " << max << "$";
    }
    else if (max == arr[8)
    {
        cout << "Maximum income of the year was in September - " << max << "$";
    }
    else if (max == arr[9)
    {
        cout << "Maximum income of the year was in October - " << max << "$";
    }
    else if (max == arr[10])
    {
        cout << "Maximum income of the year was in November - " << max << "$";
    }
    else
    {
        cout << "Maximum income of the year was in December - " << max << "$";
    }
}