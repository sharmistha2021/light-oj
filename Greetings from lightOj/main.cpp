#include <iostream>

using namespace std;

int main()
{
    int T, a, b;
    cin >> T;
    for(int i = 0; i < T; i++){
        int sum;
        cin >> a >> b;
        sum = a + b;
        cout << "Case " << i + 1 << ": " << sum << endl;
    }
    return 0;
}
