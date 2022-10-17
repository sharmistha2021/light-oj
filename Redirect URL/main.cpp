#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i = 1;
    cin >> t;
    while(t--){
        string url;
        cin >> url;
        if(url[4] != 's'){
            url.insert(4, "s");
        }
        cout << "Case " << i << ": " << url << endl;
        i++;
    }

    return 0;
}
