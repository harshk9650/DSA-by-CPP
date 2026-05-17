#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> arr(n); // 1 , 3 , 4 , 2 , 2
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }

    int ans = 0;

    for(int i=0;i<arr.size();i++){
        cout<<"here is the i value: "<<i<<endl;
        int idx = abs(arr[i]);
        cout<<"this is the idx now: "<<idx<<endl;

        if(arr[idx]<0){
            cout<<"here is the checking part: "<<(arr[idx]<0)<<endl;
            ans=idx;
            break;

        }
        cout<<"before the multily the idx by -1: "<<arr[idx]<<endl;
        arr[idx] *= -1;
        cout<<"before the multily the idx by -1: "<<arr[idx]<<endl;
    }

    cout<<"this is the repeating element: "<<ans;

    return 0;
}