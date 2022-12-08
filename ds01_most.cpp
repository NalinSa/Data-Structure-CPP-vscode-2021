#include <iostream>
#include <map>
#include <set>
using namespace std;
int main(){
  map<string,int> mapp;
  int n;
  cin >> n;
  for(int i =0;i<n;i++){
    string x;
    cin >> x;
    mapp[x]++;
  }
  map<int,set<string>> map2;
  for(auto it = mapp.begin();it!=mapp.end();it++){
    if  (map2.find(it->second)!=map2.end()){
      map2[it->second].insert(it->first);
    }
    else{
      map2[it->second] = {it->first};
    }
  }
  auto t = map2.end();
  t--;
  auto uu = t->second.end();
  uu--;
  cout << *uu << " ";
  cout << t->first;
}
