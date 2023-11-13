#include <iostream>
using namespace std;
void selectionSort(int a[],int n) {

    for(int i = 0; i < n; i++) {
        int minIdx = i;
        for(int j = i+1; j < n; j++) {
            if(a[minIdx] > a[j]) {
                minIdx = j;
            }
        }
        swap(a[minIdx],a[i]);
    }
}
void display(int a[],int n) {
    for(int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)  {
        cin>>a[i];
    }
    display(a,n);
    selectionSort(a,n);
    display(a,n);
}
