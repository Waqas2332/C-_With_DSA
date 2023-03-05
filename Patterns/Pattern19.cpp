#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 4; row++)
    {
        for (int space = 1; space <= 4 - row; space++)
        {
            cout<<" ";
        }
        for(int left = 1;left < row ;left++){
            cout<<left;
        }
        cout<<row;
        for(int right = 1;right < row;right++){
            cout<<row-right;
        }
        cout << endl;
    }
}