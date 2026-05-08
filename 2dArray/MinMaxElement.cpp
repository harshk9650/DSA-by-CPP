#include <iostream>
#include<limits>
using namespace std;

int mine(int arr[3][3]){
    int min = INT_MAX;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
                
            }
        }
    }
    return min;
}

int maxe(int arr[3][3]){
    int max = INT_MIN;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
                
            }
        }
    }
    return max;
}
int main() {
    int arr[3][3] = {{1,2,3},{4,5,7},{9,0,1}};
    int ansm = mine(arr); 
    cout<<"this is the minimum element: "<<ansm<<endl;
    int ansmax = maxe(arr); 
    cout<<"this is the minimum element: "<<ansmax<<endl;
    return 0;
}