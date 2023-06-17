#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> solve(vector<vector<int>> a, vector<vector<int>> b) {
	vector<vector<int>> ans;

	int rows = a.size();
	int col = a[0].size();

	for(int i=0;i<rows;i++) {
		vector<int> temp;
		for(int j=0;j<col;j++) {

			int sum = a[i][j] + b[i][j];
			temp.push_back(sum);
		}
		ans.push_back(temp);
	}

	return ans;
}
int main() {
	vector<vector<int>> a;
	vector<vector<int>> b;

	int m,n;
	cin>>m>>n;

	for(int i=0;i<m;i++) {
		vector<int> temp;
		for(int j=0;j<n;j++) {
			int x;
			cin>>x;
			temp.push_back(x);
		}
		a.push_back(temp);
	}

	for(int i=0;i<m;i++) {
		vector<int> temp;
		for(int j=0;j<n;j++) {
			int x;
			cin>>x;
			temp.push_back(x);
		}
		b.push_back(temp);
	}

	vector<vector<int>> ans = solve(a,b);

	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}
