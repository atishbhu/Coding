#include <bits/stdc++.h>
using namespace std;

struct element {
    int idx,no_of_factor;
};

int countFactor(int n) {
    int count = 0;
    for(int i = 1; i*i<=n;i++) {
        if(n%i == 0) {
            count++;
            if(i != n/i) {
                count++;
            }
        }
    }
    return count;
}

bool compare(struct element e1, struct element e2)
{
    if (e1.no_of_factor == e2.no_of_factor)
        return e1.idx < e2.idx;
     
    return e1.no_of_factor > e2.no_of_factor;   
}
 
void sortArray(int A[],int n) {

    struct element nums[n];

    for(int i = 0; i<n;i++) {
        nums[i].idx = i;
        nums[i].no_of_factor = countFactor(A[i]);
    }

    sort(nums,nums+n,compare);

    for(int i = 0; i<n;i++) {
        cout<<A[nums[i].idx]<<" ";
    }
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++) {
        cin>>a[i];
    }

    sortArray(a,n);
}
