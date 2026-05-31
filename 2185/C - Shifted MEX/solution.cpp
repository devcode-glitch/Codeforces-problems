#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "
"
#define yes cout<<"YES
"
#define no cout<<"NO
"
 
/*
GOLDEN RULES
PROBLEMS ARE SIMPLE
PROOFS ARE SIMPLE
IMPLEMENTATION IS SIMPLE
 
SIMPLIFY THE PROBLEM
DIVIDE INTO SMALL WHENEVER POSSIBLE
*/
 
/*
    so what actually matters here ?
    First principles -> Basic facts from the question
    I am given n integers, I am allowed to add 'x' to it, x maybe +ve or -ve
    I need to make sure that the mex of the sequence is maximised after adding x
    leads to questions 1) when is the mex maximized 2) How do I choose x?
 
    for n terms, the mex is atmost n 
    
    if 0 is not in the array , the mex is 0, so to maximize the mex I need to ensure that 0 is present
 
    does it have something to do with consecutively occuring numbers ??
 
 
    -1 0 1 2 3 5 6 7 8 9 10
 
    -1 is the best number to use ? 
    use any other number and you cannot maximise mex
    can any other consecutive seq impact mex more than the first one ?
 
*/
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    set<int> s;
    int mex = 0;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      s.insert(x);
    }
    vector<int> arr;
    for(auto itr : s) arr.push_back(itr);
    //for(auto itr : arr) cout<<itr<<" ";
    //cout<<endl;
    vector<int> c;
    int count = 0;
    for(int i=1;i<arr.size();i++){
      if(abs(arr[i] - arr[i-1]) == 1){
        ++count;
      }
      else{
        c.push_back(count);
        count = 0;
      }
    }
    c.push_back(count);
    if(c.size() == 0){
      cout<<1<<endl;
    }
    else{
      int consecutive = *max_element(c.begin(),c.end());
      for(int i=0;i<consecutive+1;i++) ++mex;
      cout<<mex<<endl;
    }
  }
  return 0;
}