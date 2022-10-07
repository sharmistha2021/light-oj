#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        double r, areaSquare, areaCircle, pi;
        cin >> r;
        pi = 2 * acos(0.0);
        areaCircle = pi * r * r * 1.0;
        areaSquare = 4 * r * r * 1.0 ;
        cout << "Case " << i + 1 << ": " << setprecision(2) << fixed << areaSquare - areaCircle << endl;
    }
    return 0;
}
