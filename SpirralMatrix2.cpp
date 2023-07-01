#include <iostream>
#include <vector>

using namespace std;

void print(vector<vector<int>> A) {
    int n = A.size();
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<A[i][j]<<"    ";
        }
        cout<<endl;
    }
}

void generateSpiralPattern(int n) {

    vector<vector<int>> a(n,vector<int>(n));

    int l = n-1;
    int value = 1;
    int x,y;
    for(int i=0;i<=n/2;i++) {
        x=i,y=i;
        for(int j=0;j<l;j++) {
            a[x][y] = value;
            value++;
            y++;
        }
        for(int j=0;j<l;j++) {
            a[x][y] = value;
            value++;
            x++;
        }
        for(int j=0;j<l;j++) {
            a[x][y] = value;
            value++;
            y--;
        }
        for(int j=0;j<l;j++) {
            a[x][y] = value;
            value++;
            x--;
        }
        l -= 2;
    }

    if(n%2 != 0) {
        a[x][y] = value;
    }
    print(a);
}


int main() {
    int n;
    cin >> n;
    generateSpiralPattern(n);
    return 0;
}
