#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 4; row++)
    {
        for (int col = 0; col < row; col++)
        {
            char ch = 'A' +  row -1 ;
            cout << ch;
        }
        cout << endl;
    }
}