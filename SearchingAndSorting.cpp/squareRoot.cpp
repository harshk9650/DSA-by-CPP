#include <iostream>
#include<vector>
using namespace std;
int squareR(vector<int> arr, int target){
    int s = 0;
    int e = arr.size() - 1;

    int mid = s+(e-s)/2;

    int ans = -1;
    while(s<=e){
        if(arr[mid]*arr[mid]==target){
            return mid;
        }else if(arr[mid]*arr[mid]<target){
           ans = mid;
            s=mid+1;;

        }else if(arr[mid]*arr[mid]>target){
            
            e=mid-1;
        }

        mid = s+(e-s)/2;
    }
    return ans;
}
int main() {
    int n;
    cin>>n; 

    vector<int> arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;    

    int ans = squareR(arr,target);
    cout<<"the square root of number is somewhere between or excatly: "<<ans;
    return 0;
}