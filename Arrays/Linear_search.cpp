#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {91, 5, 9, 2, 16, 394, 83, 21, 90, 101};
    int search;
    cout << "Enter the element you want to search in array " << endl;
    cin >> search;
    for (int i = 0; i < 10; i++)
    {
        if (search == arr[i])
        {
            cout << "Element is present in array";
            break;
        }
        continue;
    }
}