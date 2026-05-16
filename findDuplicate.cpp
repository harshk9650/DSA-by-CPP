#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> arr(n);
    

    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    
    sort(arr.begin(),arr.end());
    for (int i = 0; i < arr.size()-1; i++)
    {
       if(arr[i]==arr[i+1]){
            cout<<arr[i];
       }
    }
    


    return 0;
}