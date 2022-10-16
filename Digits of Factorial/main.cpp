#include <bits/stdc++.h>

using namespace std;

double  computed[1000001];

double fact(int n){
        if(n <= 1) return 0;
        if(computed[n] != 0){
                return computed[n];
        }
        computed[n] = log10(n) + fact(n - 1);
            return computed[n];
}

int main()
{
    int t, i = 1;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d%d", &a, &b);
        double f = fact(a);
        int c = (f/log10(b)) + 1;
        printf("Case %d: %d\n", i, c);
       // cout << "Case " << i << ": " << c << endl;
        i++;
    }
    return 0;
}
