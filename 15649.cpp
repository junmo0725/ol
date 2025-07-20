#include <bits/stdc++.h>
using namespace std;

int n, m, l[9];
vector<int> st;

void recu(k, n) {
    if (st.size() == m) {
        for (int c : st)
            cout << c << " ";
        cout << "\n";
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (l[i] == -1) 
            continue;
        st.push_back(l[i]);
        int r = l[i];
        l[i] = -1;
        recu(i+1);
        l[i] = r;
        st.pop_back();
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        l[i] = i;
    recu();
    return 0;
}
