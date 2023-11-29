#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, l , q; cin >> n >> m >> l >> q;
	char a[n][m];
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cin >> a[i][j];
		}
	}
	string s, str; cin >> s;
	int r = 0, c = 0;
	if(a[r][c]!='a'&& a[r][c]!='e' && a[r][c]!='i' && a[r][c]!='o' && a[r][c]!='u') str.push_back(a[r][c]);
	for(int i = 0; i < s.size(); ++i){
		if(s[i]=='l') c--;
		else if(s[i]=='r') c++;
		else if(s[i]=='u') r--;
		else r++;
		if(a[r][c]!='a'&& a[r][c]!='e' && a[r][c]!='i' && a[r][c]!='o' && a[r][c]!='u') str.push_back(a[r][c]);
	}
	cout << str << endl;
	while(q--){
		string t; cin >> t;
		int f = 0, ptr = 0;
		for(int i = 0; i < str.size(); ++i){
			if(str[i]==t[ptr]){
				ptr++;
				if(ptr==t.size()){
					f = 1;
					break;
				}
			}
		}
		if(f) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}
