#include "bits/stdc++.h"
#include "ext/pb_ds/assoc_container.hpp"
#include <iostream>
#include <string>
#include "ext/pb_ds/tree_policy.hpp"
using namespace std;
using namespace __gnu_pbds;
#include <fstream>


#define ll long long
#define endl "\n"
#define all(v) (v).begin(),(v).end()
#define rep(i,x,y) for(int i=x; i<=y; i++)
const int mod = 1e9 + 7;



int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  ifstream myfile;
  myfile.open("/home/girish/Downloads/April 22 NIFTY.csv");
  vector<double>cp;
  int ch=0;
  while(myfile.good()){
    string line;
    int cnt=6;
    while(cnt--){
    getline(myfile, line, ',');
    ch++;
    if(cnt==1 && ch>5){
      cout<<line<<endl;
      cp.push_back(stod(line)); // store all strings as doubles in the cp vector
    }
  }
  getline(myfile, line, '\n');
  }
  //prefix sum
  for(int i=1;i<cp.size();i++){
    cp[i]+=cp[i-1];
  }
cout<<"sma for 3"<<endl;  
for(int i=2;i<cp.size();i++){
  if(i==2){
    cout<<(cp[i])/3<<endl;
  }
  cout<<(cp[i]-cp[i-3])/3<<endl;
}
cout<<"sma for 5"<<endl;  
for(int i=4;i<cp.size();i++){
  if(i==4){
    cout<<(cp[i])/5<<endl;
  }
  cout<<(cp[i]-cp[i-5])/5<<endl;
}
}




