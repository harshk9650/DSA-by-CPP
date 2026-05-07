#include <iostream>
#include<vector>
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};

    int brr[4] = {7,8,9,10};

    vector <int> ans;

    // traverse the arr array
    for(int i=0;i<5;i++){
        ans.push_back(arr[i]);   // push all the elements in ans array
    }


     // traverse the brr array

    for(int i=0;i<4;i++){
        ans.push_back(brr[i]); // here also push the elements in ans array
    }
    

    for(auto i:ans){
        cout<<i<<" ";
    }


    
    return 0;
}