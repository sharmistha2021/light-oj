#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i = 1;
    scanf("%d", &t);
    while(t--){
        int my_pos, lift_pos;
        scanf("%d%d", &my_pos, &lift_pos);
        int lift_to_me = abs(my_pos - lift_pos) * 4;
        printf("Case %d: %d\n", i, lift_to_me + 19 + my_pos * 4);
        i++;
    }

    return 0;
}
