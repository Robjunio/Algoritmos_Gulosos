#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n; cin >> n;
	vector<int> a(n), b(n);
	int ans = 0, p = 100;
	for(int i = 0; i<n; i++)
		cin >> a[i] >> b[i];
	for(int i = 0; i<n; i++){
		p = min(p, b[i]);
		ans += a[i]*p;
	}
	
	cout << ans << endl;
}
