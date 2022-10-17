#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i = 1;
    scanf("%d", &t);
    while(t--){
        int n, m;
        cin >> n >> m;
        int sum = (n / 2) * m;
        cout << "Case " << i << ": " << sum << endl;
       i++;
    }
    return 0;
}
