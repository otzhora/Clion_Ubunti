#define all(a) a.begin(), a.end()

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef vector<int> vi;

int main() {
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);

    int n;
    cin >> n;

    vi a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(all(a));

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}