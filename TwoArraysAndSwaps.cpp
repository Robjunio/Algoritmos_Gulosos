#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int t, n, k; cin >> t;
	while(t--){
		cin >> n >> k;
		vector<int> a(n), b(n);
		for(int i = 0; i<n; i++)
			cin >> a[i];
		for(int i = 0; i<n; i++)
			cin >> a[i];
		sort(a.begin(), a.end()); sort(b.begin(), b.end());
		for(int i = 0; i<n; i++){
			if (a[i] < b[n-1-i]) swap(a[i],b[n-1-i]);
		}
		cout << accumulate(a.begin(), a.end(), 0) << endl;
	}
}
