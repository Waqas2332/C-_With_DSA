#include <iostream>
using namespace std;

int main()
{
    int count = 1, row = 1;
    while (row <= 4)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count;
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
}