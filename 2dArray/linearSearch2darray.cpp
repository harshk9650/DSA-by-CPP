#include <iostream>
using namespace std;
bool linear(int arr[][3],int target,int size){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                return true;
                break;
            }
        }
    }

    return false;

}
int main() {
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int size = 9;
    int target = 90;
    bool ans = linear(arr,target,size);

    if(ans){
        cout<<"Element is present";
    }else{
        cout<<"Element is not present";
    }

    return 0;
}