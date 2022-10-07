#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        cout << "case 1:" << endl;
        vector < int > v;
        int q, n;
        cin >> n >> q;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            v.push_back(a);
        }

        while(q--){
            int a, b;
            cin >> a >> b;
            int up = upper_bound(v.begin(), v.end(), b) - v.begin();
            int low = lower_bound(v.begin(), v.end(), a) - v.begin();
            cout << up - low << endl;
        }


    }
    return 0;
}
