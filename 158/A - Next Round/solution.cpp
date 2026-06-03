#include<iostream>
#include<vector>
void solve(){
  int n,k;
  std::cin>>n>>k;
  std::vector<int> arr(n);
  int count = 0;
  for(int i=0;i<n;i++) std::cin>>arr[i];
  if(n == 1){std::cout<<((arr[0] == 0)? 0 : 1)<<"
";return;}
  for(int i=0;i<n;i++) count+=(arr[i]>0 && arr[i]>=arr[k-1]);
  std::cout<<count<<"
";
}
int main(){
  solve();
}