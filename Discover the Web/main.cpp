#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i = 1;
    scanf("%d", &t);
    while(t--){
        deque < string > brwsr, f;
        string cmd, url;
        brwsr.push_back("http://www.lightoj.com/");
        cout << "Case " << i << ":" << "\n";
       while(cin >> cmd && cmd != "QUIT"){
        if(cmd == "VISIT"){
            cin >> url;
            f.clear();
            brwsr.push_back(url);
            cout << url << "\n";
        }
        else if(cmd == "BACK"){
            if(brwsr.size() < 2){
                cout << "Ignored" << "\n";
                continue;
            }
            f.push_back(brwsr.back());
            brwsr.pop_back();
            !brwsr.empty() ? cout << brwsr.back() << "\n": cout << "Ignored" << "\n";
        }
        else{
            if(f.empty()){
                cout << "Ignored" << "\n";
                continue;
            }
            brwsr.push_back(f.back());
            f.pop_back();
            !brwsr.empty() ? cout << brwsr.back() << "\n": cout << "Ignored" << "\n";
        }
       }
        i++;
    }
    return 0;
}
