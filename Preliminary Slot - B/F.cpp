#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    string s, hh;
    cin >> s >> hh;
    int len, q;
    cin >> len >> q;
    while (q--) {
        string g, p;
        cin >> g >> p;
        int k = 0;
        bool ok = false;
        for (int i = 0; i < g.size() - s.size() + 1; i++) {
            string ss;
            for (int j = i; j < i + s.size(); j++) {
                ss += g[j];
            }
            if (ss == s) {
                ok = true;
                break;
            }
        }
        if (ok) {
            if (hh == p) {
                cout << "Guilty" << endl;
            }
            else {
                cout << "Suspected" << endl;
            }
        }
        else {
            cout << "Not guilty" << endl;
        }
    }
}