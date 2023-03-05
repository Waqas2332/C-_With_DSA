#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    for (int row = 1; row <= 4; row++)
    {
        for (int col = 1; col <= 4; col++)
        {
            char ch = 'A' + count - 1;
            cout << ch;
            count++;
        }
        cout << endl;
    }
}