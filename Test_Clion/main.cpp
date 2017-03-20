#define all(a) a.begin(), a.end()
#define mp(a, b) make_pair(a, b)

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

typedef std::vector<int> vi;
typedef std::vector<bool> vb;

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
#endif
    int n;
    vi a;
    int curr = 0;
    int global_curr = 0;
    vb used;
    int global_max = 0;
    set< pair<int, int> > ans;


    cin >> n;
    a.resize(n);
    used.resize(n);
    used[0] = true;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 1; i < n; i++) {

        global_max = 0;
        curr = global_curr;
        for(int j = 0; j < a[curr]; j++) {

            int dest = 0;
            int local_max = -1;

            for (int idx = 1; idx < n; ++idx) {

                if(!used[idx] && a[i] > local_max) {
                    dest = idx;
                    local_max = a[i];
                }
            }

            used[dest] = true;
            ans.insert(mp(curr, dest));
            if(a[dest] > global_max) {
                global_curr = dest;
                global_max = a[dest];
            }
        }
        if(ans.size() == n - 1)
            break;
    }

    if(ans.size() != n - 1)
        cout << "-1" << endl;
    else
    {
        cout << n - 1 << endl;
        for(auto i = ans.begin(); i != ans.end(); i++)
            cout << (*i).first + 1 << " " << (*i).second + 1<< endl;
    }
    return 0;
}