#include<bits/stdc++.h>
using namespace std;
int n, m;
map<string, string> q;
int main(){
	cin >> n;
	for(int i = 0; i < n; ++i){
		string s1,s2;
		cin >> s1 >> s2;
		q[s1] = s2;
	}
	cin >> m;
	while(m--){
		string s1, s2;
		cin >> s1 >> s2;
		if(!q.count(s1)) // if the element with key K is present in the map container.DO NOT FORGET IT PIECE OF SHIT!
			cout << "login error\n";
		else if(q[s1] != s2)
			cout << "password error\n";
		else
			cout << "correct password\n";	
	}               
	return 0;
}