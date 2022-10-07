#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i = 1;
    scanf("%d", &t);
    while(t--){
        int ax, ay, bx, by, cx, cy, dx, dy;
        cin >> ax >> ay >> bx >> by >> cx >> cy;
        dx = cx - bx + ax;
        dy = ay - by + cy;
        int area = .5*(ax*by + bx*cy + cx*dy + dx*ay - ay*bx - by*cx - cy*dx - dy*ax);
       if(area < 0){
        area *= -1;
       }
        cout << "Case " << i << ": " << dx << " " << dy << " " << area << endl;
        i++;
    }
    return 0;
}
