// if array is {1,2,3,4} output should be {2,1,4,3}

#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i = 0;i < 10;i+=2){
        swap(arr[i],arr[i+1]);
    }
    // Displaying array after alternating
    for(int i = 0;i <10;i++){
        cout<<arr[i]<<endl;
    }
}