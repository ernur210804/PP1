#include<bits/stdc++.h>

using namespace std;

string s,t;

int main() {

	cin >> s >> t;

	for(int i = 0;i + (int)t.size() - 1 < s.size();i ++) {
		string s2 = s.substr(i,(int)t.size());
		if(s2 == t) {
			cout << "YES";
			exit(0);
		}
	}
	cout << "NO";
	return 0;
}