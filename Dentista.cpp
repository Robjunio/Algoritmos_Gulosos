#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int N, ans = 0; cin >> N;
	vector<long long int> x(N), y(N);
	for(int i = 0; i < N; ++i){
		cin >> x[i] >>y[i];
	}
	for(int i = 0; i < x.size(); ){
		long long int b = 1;
		while (true){
			if (b == x.size())
				break;
			if (y[i] <= x[b]){
				break;
			}
			else
				b++;
		}
		i = b;
		++ans;	
	}
	cout << ans << endl;
}
