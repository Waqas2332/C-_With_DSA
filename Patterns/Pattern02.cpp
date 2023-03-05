#include <iostream>
using namespace std;

int main()
{
    int count =1;
    for (int row = 1; row <= 3; row++)
    {
        for (int col = 1; col <= 3; col++)
        {
            cout<<count;
            count++;
        }
        cout<<endl;
    }
}