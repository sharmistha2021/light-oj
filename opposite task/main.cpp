#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, t;
    cin >> t;
    for(int i = 0; i < t; i++){
    cin >> num;
  //  int r;
    if(num <= 10)
        cout << num << " 0" << endl;
    else
        cout << num - 10 << " 10" << endl;

  //  r = rand()% 10;
   // cout << r << " " << num - r << endl;

    }
    return 0;
}
