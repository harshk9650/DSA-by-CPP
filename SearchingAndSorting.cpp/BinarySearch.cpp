#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int start = 0;
    int end = n-1;

    int mid = start + (end - start) / 2;
    
    while (start<=end)
    {
        int idx = arr[mid];
       if(idx==target){
        return mid;
       }else if(idx > target){
        end = mid - 1;

       }
       else if(idx<target){
        start = mid +1;
       }

       mid = start + (end - start) / 2;
    }
   
    return -1;

}

int main() {

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cin>>target;

    int idexofElement = binarySearch(arr,n,target);

    if(idexofElement){
        cout<<"Element is placed on index: "<<idexofElement;
    }else{
        cout<<"Element is not present in your array";
    }
    


    return 0;
}