#include<iostream>
#include<map>
#include<vector>
using namespace std;
//có thứ tự key tăng dần
//map<key,value>map 
//insert({})
//find(key) O(1)
//count(key) O(1)
//erase(key)  O(1)
//size

// int main(){
//    map<int,int>mp;
//    mp.insert({2,3});
//    mp.insert({2,4});
//    mp.insert({3,5});
//    mp.insert({4,1});
//    cout<<mp.size()<<endl;
//    for(auto it:mp){
//     cout<<it.first<<" "<<it.second;
//     cout<<endl;
//    }
//    if(mp.count(4)>=1){
//     cout<<"FOUND\n";
//    }
//    else{
//     cout<<"NOT\n";
//    }
//   //  mp.erase(3);
//   //  for(auto it:mp){
//   //   cout<<it.first<<" "<<it.second;
//   //   cout<<endl;
//   //  }
//    mp[2]=4;
//    for(auto it:mp){
//     cout<<it.first<<" "<<it.second;
//     cout<<endl;
//    }
// }

// int main(){
//   map<int,int>mp;
//   int n;cin>>n;
//   vector<int>v(n);
//   for (int i = 0; i <n; i++)
//   {
//      int x;cin>>x;
//      mp[x]++;
//      v[i]=x;
//   }
//   for(auto x:v){
//     if(mp[x]!=0){
//       cout<<x<<" "<<mp[x]<<endl;
//       mp[x]=0;
//     }
//   }
// }

int main(){
  map<pair<int,int>,int>mp;
  int n;cin>>n;
  for(int i=0;i<n;i++){
    //khai báo 1 pair 
   pair<int,int>x;
   cin>>x.first>>x.second;
    mp[x]++;

    //hoặc khai báo x,y
    //int x,y;cin>>x>>y;
    //mp[{x,y}]++;

  }

  //duyệt bằng auto 
  // for(auto it:mp){
  //   cout<<it.first.first<<" "<<it.first.second<<" "<<it.second<<endl;
  // }

  //hoặc pair
  for(pair<pair<int,int>,int> x:mp){
    cout<<x.first.first<<" "<<x.first.second<<" "<<x.second<<endl;
  }
}
