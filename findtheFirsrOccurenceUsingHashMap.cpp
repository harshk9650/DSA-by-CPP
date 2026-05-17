#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int ,int> hash;

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    cout<<endl;
    cout<<endl;
    for(int i=0;i<n;i++){
        if(hash[arr[i]]>1){
            cout<<i+1;
            break;
        }
    }
}
