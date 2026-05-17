#include<iosteam>
using namespace std;
int main(){

  int arr[5] = {1,2,3,4,1}
  while (arr[0]!=arr[arr[0]])
    {
        swap(arr[0],arr[arr[0]]);
    }
  cout<<arr[0] // this is the duplicate element

}
