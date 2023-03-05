#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 4; row++)
    {
        // int count = row;
        for (int col = 0; col < row; col++)
        {
            cout<<row+col;
        }
        cout<<endl;
    }
}