#include <bits/stdc++.h>

using namespace std;

int trailing(int n)
{
    int  z = 0;
    for(int i = 5; (n/i) > 0 ; i *= 5)
    {
        z += (n/i);
    }
    return z;
}
int main()
{
    int t, i = 1;
    scanf("%d", &t);
    while(t--)
    {
        long long  q;
        cin >> q;
        int  n = -1, low = 1, high = 1000000000;
        while(low <= high)
        {
            int  mid = (low + high)/2;
            int  trlng = trailing(mid);
            if(q < trlng)
            {
                high = mid - 1;
            }
            else if(q > trlng)
            {
                low = mid + 1;
            }
             else
            {
                n = mid;
                high = mid - 1;
            }
        }

        n == -1 ? cout << "Case " << i << ": " << "impossible" << endl: cout << "Case " << i << ": " << n << endl;
        i++;
    }
    return 0;
}
