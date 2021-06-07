#include <bits/stdc++.h>
using namespace std;

int get_value(string s){
	int ans = 0;
	for(int i = 0 ; i < s.size() ; i++){
		ans = (ans * 10) + (s[i] - 'a');
	}
	
	cout << ans << '\n';
	return ans;
}

bool isSumEqual(string a, string b, string c) {
	int v1 = get_value(a);
	int v2 = get_value(b);
	int v3 = get_value(c);
	return (v1 +v2 == v3);
}

int main () {
	string a, b, c;
	cin >> a >> b >> c;
	cout << boolalpha << isSumEqual(a, b, c);
	return 0;
}