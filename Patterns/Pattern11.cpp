#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    for (int row = 1; row <= 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            char ch = 'A' + row + col -1;
            cout << ch;
            count++;
        }
        cout << endl;
    }
}