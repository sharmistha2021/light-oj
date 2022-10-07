#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i = 1;
    scanf("%d", &t);
    while(t--){
        double R, n, pi = 2 * acos(0.0);
        scanf("%lf%lf", &R, &n);
        double r = (R*sin(pi/n)) / (1 + sin(pi/n));
        cout << fixed << setprecision(7) << "Case " << i << ": " << r << endl;
        i++;
    }
    return 0;
}
