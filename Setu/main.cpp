#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i = 1;
    scanf("%d", &t);
    while(t--){
        int n, acc = 0, x;
        string op;
        scanf("%d", &n);
        cout << "Case " << i << ":" << endl;
        while(n--){
            cin >> op;
            if(op == "donate"){
                cin >> x;
                acc += x;
            }
            else{
                cout << acc << endl;
            }
        }
        i++;
    }
    return 0;
}
