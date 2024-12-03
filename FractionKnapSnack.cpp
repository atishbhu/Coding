#include <bits/stdc++.h>
using namespace std;

class Item {
    public:
      int value;
      int weight;
};

bool myCompare(Item a, Item b) {
    int value1 = ((double)a.value / a.weight);
    int value2 = ((double)b.value / b.weight);

    return value1 > value2;
}

double fractionalKnapSnak(Item arr[], int n, int w) {
    sort(arr, arr + n, myCompare);
    int currWeight = 0;
    double totalValue = 0;
    for(int i = 0; i < n; i++) {
        if(currWeight + arr[i].weight <= w) {
            currWeight += arr[i].weight;
            totalValue += arr[i].value;
        }else {
            int remW = w - currWeight;
            totalValue += ((remW*(double)arr[i].value / arr[i]. weight));
            break;
        }
    }
    return totalValue;
}
int main() {
    Item arr[] = {{60,20}, {70, 15}, {80, 40}};

    cout<<fractionalKnapSnak(arr, 3, 70)<<endl;
}
