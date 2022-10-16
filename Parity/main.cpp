#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i = 1;
    scanf("%d", &t);
    while(t--){
        int n, counter = 0;
        scanf("%d", &n);
        while(n > 0){
            n = n & (n-1);
            counter++;
        }
        (counter%2 == 0) ? printf("Case %d: even\n", i): printf("Case %d: odd\n", i);
       //(__builtin_popcount(n)%2 == 0) ? printf("Case %d: even\n", i): printf("Case %d: odd\n", i);
        i++;
    }

    return 0;
}
