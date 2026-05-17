#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n; 
    vector<int> arr(n); // 0 , 1 , 2 , 3 , 5
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < arr.size(); i++)
    {
       int idx = abs(arr[i]);
       if(arr[idx-1]>0){
        arr[idx -1]=arr[idx-1]*-1;

       }
    }
    
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]>0){
            cout<<"this is the missing element: "<<i+1;
            break;
        }
    }
    





    return 0;
}