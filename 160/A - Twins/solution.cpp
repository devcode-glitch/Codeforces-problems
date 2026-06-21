#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 vector<int> arr(n);
 int s = 0;
 for(int i =0;i<n;i++) {cin>>arr[i];s+=arr[i];}
 int you = 0,ct=0;
 sort(arr.begin(),arr.end());
 while(you<=s){
  ++ct;
  you+=arr.back();
  s-=arr.back();
  arr.pop_back();
 }
 cout<<ct<<"
";
}