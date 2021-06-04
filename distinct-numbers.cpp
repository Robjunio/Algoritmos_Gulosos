#include<bits/stdc++.h>
using namespace std;
#define N ((int)2e5+123)

int main(){
	
	long long int n,x; cin >> n;
	vector<long long int> v(N), k(N); 
	for(int i = 0; i<n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	
	long long int cont = v[0];
	int ans = 0;
	for(int j = 0; j < v.size(); ++j){
		if (v[j] != cont){
			cont = v[j];
			ans++;
		}
	}
	cout << ans << endl;
}
