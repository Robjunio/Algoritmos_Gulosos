#include<bits/stdc++.h>
using namespace std;
#define N ((int)2e5+123)


int main(){
	long long int n, m, k; 
	cin>>n; cin>>m; cin>>k;
	
	vector<long long int> a(n), b(m); 
	for(int i = 0; i<n; ++i)
		cin>>a[i];
	for(int i = 0; i<m; ++i)
		cin>>b[i];
		
	int ans;
	
	for(int i = 0; i<m; ++i){
		for(int j = 0; j<n; ++j){
			if((a[j]-k) > b[i] > (a[i]+k)){
				++ans;
			}
		}
	}
	cout << ans << endl;	
}
