#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
 int n,one=0,two=0;
 cin>>n;
 vector<int> v(n);
 for(int i=0;i<n;i++)
 cin>>v[i];
 sort(v.rbegin(),v.rend());
 for(auto i:v)
 {
  if(one<=two)
     one+=i;
  else
     two+=i;
 }
 if(one==two)
 {
  cout<<"YES";
 }
 else{
  cout<<"NO";
 }
 
}

int main() {
 
  int t;
  cin>>t;
  while(t--)
  {
 solve();
  }
   return 0;
  
}
