#include <bits/stdc++.h>
using namespace std;

const long long LIMIT = 1e18;
long long trailing(long long n)
{
    long long z = 0;
    for (long long i = 5; n/i > 0; i *= 5)
    {
        z += (n / i);
    }
    return z;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    for (int test = 1; test <= testCase; test++)
    {
        long long q;
        scanf("%lld", &q);
        long long low = 1, high = LIMIT, answer = -1;
        while (low <= high)
        {
            long long mid = (low + high) / 2;
            long long trlng = trailing(mid);

            if (q < trlng)
            {
                high = mid - 1;
            }
            else if (q > trlng)
            {
                low = mid + 1;
            }
            else
            {
                answer = mid;
                high = mid - 1;
            }
        }
        if (answer == -1)
            printf("Case %d: impossible\n", test);
        else
            printf("Case %d: %lld\n", test, answer);
    }
    return 0;
}
