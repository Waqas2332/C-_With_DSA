#include<iostream>
using namespace std;

int main(){
    int arr[10] = {91,5,9,2,16,394,83,21,90,101};
    int max = arr[0];
    for(int i = 0; i < 10;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout<<"Maximum number in array is "<<max<<endl;
}