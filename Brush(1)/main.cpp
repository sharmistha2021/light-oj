#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        int stdnt, sum = 0;
        cin >> stdnt;
        for(int j = 0; j < stdnt; j++)
        {
            int dust;
            cin >> dust;
            if(dust > 0)
            {
                sum += dust;
            }
        }
        cout << "Case " << i + 1 << ": " << sum << endl;
    }
    return 0;
}
