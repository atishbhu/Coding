#include <iostream>
using namespace std;

int binarySearch(int a[] , int n, int target) {

    int l = 0;
    int r = n-1;

    while(l <= r) {
      int mid = l + (r -l) / 2;
      if(a[mid] == target) {
          return mid;
      }else if(a[mid] < target) {
          l = mid + 1;
      }else {
          r = mid - 1;
      }
    }
    return -1;
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int target;
    cin>>target;
    if(binarySearch(a,n,target) == -1) {
        cout<<"item is not present";
    }else {
        cout<<"item is present";
    }

    return 0;
}
