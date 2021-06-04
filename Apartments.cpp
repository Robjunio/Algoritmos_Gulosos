#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n, m, k; 
	cin >> n >> m >> k;
	
	vector<long long int> a(n), b(m); 
	for(int i = 0; i<n; ++i)
		cin>>a[i];
	for(int i = 0; i<m; ++i)
		cin>>b[i];
	
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	int ans = 0, i, j;
	
	while(i < m && j < n){
		if ((b[i]+k >= a[j])&&(b[i]-k <= a[j])){
			ans++;
			i++;
			j++;
		} else{
			if(b[i] < a[j]){
                i++;
            } else if(b[i] > a[j]){
                j++;
            }
		}
	}
	cout << ans << endl;	
}
