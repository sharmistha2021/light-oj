#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t, i = 1;
   cin >> t;
   while(t--){
    int n, m;
    deque <int> d;
    cin >> n >> m;
    cout << "Case " << i << ":" << endl;
    for(int j = 0; j < m; j++){
        string a;
        int x;
        cin >> a;
        if(a == "pushLeft"){
            if(d.size() >= n){
                cin >> x;
                cout << "The queue is full" << endl;
            }
            else{
                cin >> x;
                d.push_front(x);
                cout << "Pushed in left: " << x << endl;
            }
        }
        else if(a == "pushRight"){
            if(d.size() >= n){
                cin >> x;
                cout << "The queue is full" << endl;
            }
            else{
                cin >> x;
                d.push_back(x);
                cout << "Pushed in right: " << x << endl;
            }
        }
        else if(a == "popLeft"){
            if(d.size() == 0){
                cout << "The queue is empty" << endl;
            }
            else{
                x = d.front();
                d.pop_front();
                cout << "Popped from left: " << x << endl;
            }
        }
        else if(a == "popRight"){
            if(d.size() == 0){
                cout << "The queue is empty" << endl;
            }
            else{
                x = d.back();
                d.pop_back();
                cout << "Popped from right: " << x << endl;
            }
        }
    }
    i++;
   }
    return 0;
}
