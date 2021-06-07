#include <bits/stdc++.h>

using namespace std;


string maxValue(string n, int x) {
	if(n[0] == '-') {
//		for(int i = 0 ; i < n.size() ; i++)

	} else {                
		for(int i = n.size() - 1 ; i >= 0 ; i--) {
			if(x <= (n[i] - '0')){
				n.insert(i, 1, ('0'+x));
				swap(n[i], n[i+1]);
				break;				
			}
		} 

		
	}
	return n;
        
}


int main () {
	string n;
	int x;
	cin >> n >> x;
	cout << maxValue(n, x);
//	reutrn 0;
}