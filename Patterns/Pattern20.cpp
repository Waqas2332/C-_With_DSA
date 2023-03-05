#include <iostream>
using namespace std;
int main(){
    for(int row = 1 ; row <= 5; row++){
        for(int left = 1;left <= 5-row+1; left++){
            cout<<left;
        }
        for(int leftStar = 1;leftStar <= row-1 ; leftStar++){
            cout<<"*";
        }
        for(int rightStar = 1;rightStar <= row-1 ; rightStar++){
            cout<<"*";
        }
        for(int right = 5-row+1;right >=1 ;right--){
            cout<<right;
        }
        cout<<endl;
    }
}