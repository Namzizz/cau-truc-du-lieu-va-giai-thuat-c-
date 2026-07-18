#include<iostream>
#include<set>
using namespace std;
int main(){
  int a[6]={2,4,1,5,2,8};
  multiset<int>mu;
  for (int i = 0; i <6; i++)
  {
   mu.insert(a[i]);
  }
  cout<<*(mu.rbegin())<<endl;
}