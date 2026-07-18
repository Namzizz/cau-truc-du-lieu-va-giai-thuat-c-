

//---------------------HÀNG CHỜ ƯU TIÊN -----------------------------



#include<iostream>
#include<deque>
#include<queue>
#include<map>
//top() lấy ra phần tử ở đầu ,mặc định lớn nhất
//pop() xóa đi phần tử ở đầu
//size()
//empty()
//priority_queue<int,vector<>,greater<>> //hàm nhỏ nhất
using namespace std;


// int main(){
//   priority_queue<int>pq;
//   pq.push(1);
//   pq.push(4);
//   pq.push(2);
//   pq.push(9);
//   //lấy ra phần tử ở đầu lớn nhất
//   cout<<pq.top()<<endl;
//   pq.push(100);
//   pq.push(30);
//    cout<<pq.top()<<endl;
//   pq.pop();//xóa đi phần tử ở đầu 
//   cout<<pq.top()<<endl;
//   //phần tử nhỏ nhất
//   priority_queue<int,vector<int>,greater<int>>pq1;
//   pq1.push(1);
//    pq1.push(2);
//   pq1.push(3);
//   pq1.push(5);
//  cout<<pq.top()<<endl;//lấy ra phần tử nhỏ nhất
// }


//bài tập nối sợi dây sao cho chi phí là nhỏ nhất

// using ll=long long;
// int main(){
//   int q;cin>>q;
//   while (q--)
//   {
//     int n;cin>>n;
//     vector<int>a(n);
//     for(int &x:a)cin>>x;
//     priority_queue<int,vector<int>,greater<int>>pq;
//     for(int x:a) pq.push(x);
//     ll ans=0;
//     while (pq.size()>1)
//     {
//       //lấy ra sợi dây nhỏ nhất 
//       ll top1=pq.top();pq.pop();
//       //lấy ra sợi dây nhỏ thứ 2
//       ll top2=pq.top();pq.pop();
//       //cộng tổng 2 sợi dây nhỏ nhất theo từng giai đoạn
//       ans+=top1+top2;
//       //đẩy lại tổng top1+top2 lại vào pq
//       pq.push(top1+top2);
//     }
//   }

//bài tập xóa k ký tự trong xâu giá trị nhỏ nhất
//VD:AAABBCD=3^2+2^2+1^2+1^2
//xóa k ký tự trong xâu để nhỏ nhất trong đó k nhập bp
using ll=long long;
int main(){
  int q;cin>>q;
  while(q--){
    int k;cin>>k;//k=2;
   string s;cin>>s;
  map<char,int>mp;
 for(auto x:s){
  mp[x]++;
 }
 priority_queue<int>pq;
 for(auto it:mp){
  pq.push(it.second);//3,2,1,1
 }
 while (k>0)
 {
  //lấy tần suất xuất hiện lớn nhất của xâu
  int top=pq.top();//3
  --k;--top;//top=2;//k=1
            //top=1;//k=0
  pq.pop();
  pq.push(max(top,0));//push(2)->//2,2,1,1
                     //push(1)->//1,2,1,1
   }
   ll ans=0;
   while(!pq.empty()){  //1,2,1,1
    ans+=pq.top()*pq.top();
    pq.pop();
   }
   cout<<ans<<endl;
 }
}
