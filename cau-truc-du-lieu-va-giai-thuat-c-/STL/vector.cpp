#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//push_back
//size()
//foreach:range base for look
//iterator
//clear() xóa hết pt trong vector
//empty() kiểm tra xem vector có rỗng không
//insert(iterator) O(n)
//erase(iterator) O(n)
//pop_back O(1)
//assign gán cùng pt (số lần,pt)
//resize thay đổi kích thước vector

int main(){
   vector<int>v;//vector rỗng
   v.push_back(2);//đẩy phần tử vào cuối vector
   v.push_back(3);
   v.push_back(4);
   
   vector<int>v1(3);//vector có 3 phần tử giá trị rác(ngẫu nhiên)
   vector<int>v2(3,100);//vector có 3 phần tử giá trị đều là 100
   cout<<v.size()<<endl;

  //duyệt qua range base for look
//    for(auto x:v){
//    x=100;
//    cout<<x<<" ";
//   }
//->100 100 100

//    for(int &x:v)x=1000;//truyền tham chiếu thì thay đổi x thì thay đổi v
//    for(int y:v)cout<<y<<" ";//in y theo v
// //->1000 1000 1000
  
//    for(int x:v)x=100;//chỉ thay đổi x không thay đổi v
//    for(int y:v)cout<<y<<" ";//in y theo v
// //->2 3 4

//duyệt qua chỉ số
//for(int x=0;i<v.size();i++){
//cout<<v[i]<<" ";
//}

  //ITERATER
//  vector<int>::iterator it=v.begin();//v.begin() là 1 iterator 
//  cout<<*it<<endl;//in giá trị *it

//khai báo vector có n pt ->mới cin>> được
// int n;cin>>n;
// vector<int>a(n);
// for(int &x:a)cin>>x;//gán tham chiếu nếu không 
// for(int x:a)cout<<x<<" ";

//thêm phần tử (insert)
//độ phức tạp O(n)
// v.insert(v.begin()+1,50);
// for(int x:v)cout<<x<<" ";

//xóa phần tử(erase)
// v.erase(v.begin()+2);
// for(int x:v)cout<<x<<" ";


}