#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        a = a * a;
        b = b * b;
        c = c * c;
        if((a > b) && (a > c))
        {
            if((c + b) == a)
            {
                cout << "Case " << i + 1 << ": " << "yes" << endl;
            }
            else
            {
                cout << "Case " << i + 1 << ": " << "no" << endl;
            }
        }
        else if((b > a) && (b > c))
        {
            if((c + a) == b)
            {
                cout << "Case " << i + 1 << ": " << "yes" << endl;
            }
            else
            {
                cout << "Case " << i + 1 << ": " << "no" << endl;
            }
        }
        else if((c > a) && (c > b))
        {
            if((a + b) == c)
            {
                cout << "Case " << i + 1 << ": " << "yes" << endl;
            }
            else
            {
                cout << "Case " << i + 1 << ": " << "no" << endl;
            }
        }

    }
    return 0;
}
