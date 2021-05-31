#include <bits/stdc++.h>
using namespace std;

int main () {
	vector<int> v = {0, 1, 2, 3};	
	int i, j, k;
	
	for(i = 0 ; i < v.size() ; i++ ) {
		for ( j = 0 ; j <= i ; j++) {
			for ( k = 0 ; k <= j ; k++ ) {
				cout << v[k] << ' ';
			}
			cout << '\n';
		}       	
	}
	return 0;
}
	
		