#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;         
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    // we are comparing the first to n;
   // 10  9. 8. 7. 6. 5. 
    for(int i=0;i<n-1;i++){
        int mixIdx = i;

        for(int j = i+1;j<n;j++){

            if(arr[j]<arr[mixIdx]){

                mixIdx = j;

            }
        }
        swap(arr[i],arr[mixIdx]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}