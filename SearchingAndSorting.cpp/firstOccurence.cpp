#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int> arr,int target){
    int s = 0;
    int e = arr.size()-1;
    int m = s + (e-s)/2;

    int ans = -1;
    while(s<=e){
        if(arr[m]==target){
            ans = m;
           
            e = m -1;
        }
        else if(target>arr[m]){
            s = m + 1;
        }else if(target<arr[m]){
            e = m - 1;
        }
        m = s + (e-s)/2;
    }

    if(ans){
        return ans;
    }else{
        return -1;
    }
    
}

int main() {
    int n;
    cin>>n;

    vector<int> arr(n);

    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }

    int target;
    cin>>target;

    int occur = firstOccurence(arr,target);

    cout<<"the element is present at this very first occurence at: "<<occur;
    
    return 0;
}