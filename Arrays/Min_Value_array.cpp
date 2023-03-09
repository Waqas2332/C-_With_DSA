#include<iostream>
using namespace std;

int main(){
    int arr[10] = {91,5,9,2,16,34,83,21,90,1};
    int min = arr[0];
    for(int i = 0; i < 10;i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout<<"Minimum number in array is "<<min<<endl;
}