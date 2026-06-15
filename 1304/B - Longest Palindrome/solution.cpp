#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
using i128 = __int128_t;
using u128 = __uint128_t;
#define endl "
"
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define yes cout<<"Yes
"
#define no cout<<"No
"
#define fio() ios::sync_with_stdio(false);cin.tie(nullptr)
 
#ifndef ONLINE_JUDGE
#define debug(x) do{cerr<<#x<<" = ";_print(x);cerr<<endl;}while(0)
#else
#define debug(x)
#endif
 
void _print(int x){cerr<<x;} void _print(long long x){cerr<<x;} void _print(char x){cerr<<x;} void _print(const string &x){cerr<<x;} void _print(bool x){cerr<<(x? "true" : "false");} void _print(double x){cerr<<x;}
 
template<class T,class V> void _print(const pair<T,V>& p); template<class T> void _print(const vector<T>& v); template<class T> void _print(const set<T>& v); template<class T> void _print(const multiset<T>& v); template<class T,class V> void _print(const map<T,V>& v);
 
template<class T,class V> void _print(const pair<T,V>& p){cerr<<"{";_print(p.first);cerr<<",";_print(p.second);cerr<<"}";}
template<class T> void _print(const vector<T>& v){cerr<<"[ ";for(const T& x:v){_print(x);cerr<<" ";}cerr<<"]";}
template<class T> void _print(const set<T>& v){cerr<<"[ ";for(const T& x:v){_print(x);cerr<<" ";}cerr<<"]";}
template<class T> void _print(const multiset<T>& v){cerr<<"[ ";for(const T& x:v){_print(x);cerr<<" ";}cerr<<"]";}
template<class T,class V> void _print(const map<T,V>& v){cerr<<"[ ";for(const auto& x:v){_print(x);cerr<<" ";}cerr<<"]";}
//----------------------------------------------------------------------------------------------------------------------------------------------------
/* GOLDEN RULES
SOLUTIONS ARE SIMPLE
PROOFS ARE SIMPLE
IMPLEMENTATION IS SIMPLE
 
 
SIMPLE OBSERVATIONS
we can search a reverse of a string in brute force itself
but to insert it in the middle
what do we do
we just search for each string , mark them both as visited if a palindrome is found
else , if the string itself is a palindrome we insert it to the middle of our ans string
we already have the length of each string in m so thats not a problem
we can mark the occurences or index of a palindrome or pairs of palindromes
then add the palindromes first, pairs of palindromes from the end
*/
void solve(){
    int n,m;
    cin>>n>>m;
    vector<string> arr(n);
    string ans = "",self = "",left = "",right="";
    for(int i=0;i<n;i++) cin>>arr[i];
    //vector<pair<int,int>> i_pal; // storing the indices of palindrome pairs;
    vector<int> marked(n,0);
    for(int i=0;i<n;i++){
        string a1 = arr[i];
        reverse(all(a1));
        // this first part needs something
        // it has to be equal to the previous self if its not empty
        // if self is empty we have the freedom to choose anything
        if(marked[i]==0 && a1 == arr[i]){
            if(self.empty()){
                self+=a1;
            }
            else if(self == a1) self+=a1;
        }
        else{
            string ax = arr[i];
            for(int j=0;j<n;j++){
                if(j!=i && marked[i] == 0 && marked[j] == 0){
                    string a2 = arr[j];
                    reverse(all(a2));
                    if(ax == a2){
                        left+=ax;
                        right = arr[j]+right;
                        marked[i] = marked[j] = 1;
                    }
                }
            }
        }
        debug(self);
        debug(left);
        debug(right);
    }
    ans+=(left+self+right);
    cout<<ans.size()<<endl<<ans<<endl;
}
int main(){fio();int t=1;//cin>>t;
while(t--) solve();
return 0;}