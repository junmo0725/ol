#include <bits/stdc++.h>
using namespace std;

vector<int> ans;
vector<int>l;
int n, m, arr[9];

void recu(int k) {
    if (ans.size() >= m) {
        for (auto c : ans)
            cout << c << " ";
        cout << "\n";
        return;
    }
    for (int i = k; i < n; i++) {
        ans.push_back(l[i]);
        recu(i);
        l[i] = ans.back();
        ans.pop_back();
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        int temp;
        cin>>temp;
        l.push_back(temp);
    }
    sort(l.begin(), l.end());
    recu(0);
    return 0;
}
