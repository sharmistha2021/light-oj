#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i = 1;
    scanf("%d", &t);
    while(t--){
        double ox, oy, ax, ay, bx, by, o, r, O, arc;
        scanf("%lf%lf%lf%lf%lf%lf", &ox, &oy, &ax, &ay, &bx, &by);
        o = sqrt((ay-by)*(ay-by) + (ax-bx)*(ax-bx));
        r = sqrt((oy-by)*(oy-by) + (ox-bx)*(ox-bx));
        O = acos((2 * r * r - o*o) / (2 * r * r));
        arc = O * r;
        cout << fixed << setprecision(4) << "Case " << i << ": " << arc << endl;
        i++;
    }
    return 0;
}
