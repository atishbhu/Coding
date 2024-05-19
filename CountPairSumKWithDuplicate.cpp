#include <bits/stdc++.h>
using namespace std;

int countPairWithDuplicateElemenet(vector<int> & a,int k) {
    int n = a.size();
    int i = 0, j = n-1;
    int count = 0;

    while(i < j) {
        int sum = a[i] + a[j];
        if(sum == k) {
            if(a[i] == a[j]) {
                count += (j - i + 1);
                break;
            }else {
                int counti = 0;
                int x = a[i];
                while(a[i] == x) {
                    i++;
                    counti++;
                }
                int countj = 0;
                int y = a[j];
                while(a[j] == y) {
                    j--;
                    countj++;
                }
                count += (counti * countj);
            }
        }else if(sum > k) {
            j--;
        }else {
            i++;
        }
    }
    return count;
}

int main() {
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i = 0; i < n; i ++) {
        cin>>a[i];
    }
    int k;
    cin>>k;
    cout<<countPairWithDuplicateElemenet(a,k);
}
