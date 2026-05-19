#include <iostream>
using namespace std;

int lastOccur(vector<int> arr,int target){
    int s = 0;
    int e = arr.size() - 1;

    int m = s + (e-s)/2;

    int index = -1;

    while(s<=e){
        if(arr[m]==target){
            index = m;
            s=m+1;
        }
        else if(arr[m]<target){
            s=m+1;
        }
        else if(arr[m]>target){
            e = m-1;
        }

        m = s + (e-s)/2;
    }

    return index;
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

    int ans = lastOccur(arr,target);

    cout<<"this is the last occurence of number: "<<ans;





    return 0;
}