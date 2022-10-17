#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i = 1;
    scanf("%d", &t);
    while(t--){
        double ab, ac, bc, r;
        scanf("%lf%lf%lf%lf", &ab, &ac, &bc, &r);
        double ad =( r / (r + 1.00));
        ad = sqrt(ad);
        ad = ad * ab;
        cout << fixed<<  setprecision(7) << "Case" << " " << i << ": " <<  ad << endl;
        i++;
    }
    return 0;
}
