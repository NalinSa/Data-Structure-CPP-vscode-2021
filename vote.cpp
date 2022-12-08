#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin >> n >> k;
  map<string,int> vote;
  for (int i = 0;i<n;i++){
    string name;
    cin >> name;
    vote[name]++;
  }
  map<int,set<string>> rank;
  for(auto it = vote.begin();it!=vote.end();it++){
    int count = it->second;
    rank[count].insert(it->first);
  }
  for(auto it = --rank.end();it!= --rank.begin();it--){
    k -= it->second.size();
    if (k<=0){
      cout << it->first << endl;
      break;
    }
  }
  if (k>0){
    auto itt = rank.begin();
    cout << itt->first <<endl;
  }
}