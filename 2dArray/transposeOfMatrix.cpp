#include <iostream>
#include <vector>
using namespace std;

void transpose(int arr[][10], int row,int col, int ans[][10]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            ans[j][i] = arr[i][j];
        }
    }
}

int main() {

   int arr[10][10];

   int row,col;
   cin>>row>>col;

   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }
   }

   int ans[10][10];

   transpose(arr,row,col,ans);

   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<ans[i][j]<<" ";
    }
   }
   

    
    return 0;
}
