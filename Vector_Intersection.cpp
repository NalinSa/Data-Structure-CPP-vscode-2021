#include  <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    set<int> set1;
    set<int> set2;
    cin >> m >>n;
    for (int i = 0;i<m;i++){
        unsigned long int x;
        cin >> x;
        set1.insert(x);
    }
    for (int i = 0;i<n;i++){
        unsigned long int x;
        cin >> x;
        set2.insert(x);
    }
    for (auto it = set1.begin();it!=set1.end();it++){
        if (set2.find(*it)!=set2.end()){
            cout << *it << " ";
        }
    }
    return 0;
}