#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 4; row++)
    {
        for (int space = 1; space < row; space++)
        {
            cout << " ";
        }
        for (int col = row; col <= 4; col++)
        {
            cout << col;
        }
        cout << endl;
    }
}