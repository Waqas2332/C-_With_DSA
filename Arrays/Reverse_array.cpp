#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {90,80,70,60,20,50,40,10,75,10};
    for (int i = 0, j = 9; i < 5; i++, j--)
    {
        swap(arr[i],arr[j]);
    }
    for(int i = 0;i < 10;i++){
        cout<<arr[i]<<endl;
    }
}