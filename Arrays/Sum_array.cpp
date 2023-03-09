#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {91, 5, 9, 2, 16, 394, 83, 21, 90, 101};
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {

        sum = sum + arr[i];
    }
    cout << "Sum of all elements in array is " << sum << endl;
}