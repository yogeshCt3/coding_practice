#include <bits/stdc++.h>
using namespace std;
bool solve(char a, char b, char c) {
	if(a == b || b == c || c == a)
		return false;
	return true;
}
int main () {
	int i;
	string s;
	cin >> s;
	int ans = 0;
	for(i = 0 ; i+3 <= s.size() ; i++){
//		cout << s[i] << s[i+1] << s[i+2] << '\n';
		if(solve(s[i], s[i+1], s[i+2]))
			ans ++;
	}
	cout << ans << '\n';
	return 0;
	
}