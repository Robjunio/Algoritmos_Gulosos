#include<bits/stdc++.h>
using namespace std;
#define N ((int)2e5+123)

int main(){
	long long int n,x; cin >> n >> x;
	vector<long long int> p(n);
	
	for(int i = 0; i < n; ++i){
		cin >> p[i];
	}
	
	sort(p.begin(), p.end());
	long long int ans = 0, j = 0, i = p.size()-1;
	while (j <= i){
		if (j == i){
			++ans;
			break;
			}
		else{
			if((p[j]+p[i])<= x){
				++ans;
				++j; 
				--i;
			}
			else{
				++ans;
				--i;
			}
		}
	}
	cout << ans << endl;
}
