#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); 
    unsigned int n,m;
    cin >> n >> m;
    map<int,set<int>> treeGrand;
    for(unsigned int i = 0;i<n;i++){
        unsigned long long int f,s;
        cin >> f >> s;
        treeGrand[f].insert(s);
    }
   for(unsigned int i = 0;i<m;i++){
        unsigned long long int a,b,fatherA,fatherB;
        cin >> a >> b;
        bool TT = false;
        if (a==b){
            cout << "NO" << endl;
            continue;
        }
        for (auto it = treeGrand.begin();it!= treeGrand.end();it++){
            auto root = it->second;
            auto key = it->first;
            if (root.find(a)!=root.end() && root.find(b)!=root.end()){
                cout << "YES" << endl;
                TT = true;
                break;
            }
            else if (root.find(a)!=root.end()){
                fatherA = key;
            }
            else if (root.find(b)!=root.end()){
                fatherB = key;
            }
        }
        if (TT) {continue;}
        bool T = true;
        for (auto it = treeGrand.begin();it!= treeGrand.end();it++){
            auto root = it->second;
            auto key = it->first;
            if (root.find(fatherA)!=root.end() && root.find(fatherB)!=root.end()){
                cout << "YES" << endl;
                T = false;
                break;
            }
        }
        if (T){cout << "NO" << endl;}
   }
}