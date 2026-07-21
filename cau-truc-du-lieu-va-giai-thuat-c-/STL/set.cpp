#include<iostream>
#include<set>
using namespace std;
// set<>  ->KHÔNG THỂ LƯU TRÙNG PHẦN TỬ
//insert thêm 1 pt vào trong set O(log(n))
//size
//clear
//empty
//iterator //chỉ hỗ trợ ++ or -- 
//find(giá trị) O(log(n))->trỏ đến iterator
//count(giá trị) O(log(n))->trỏ đến iterator
//erase(giá trị muốn xóa)
//distance(iterator,iterator) :tìm khoảng cách 2 iterator

//multiset<> ->lưu được giá trị trùng
//find(giá trị)->xóa hết
//find(iterator)->xóa 1 pt tại iterator
int main(){
    set<int>se;
    se.insert(2);
    se.insert(1);
    se.insert(1);
    se.insert(3);
    // cout<<se.size()<<endl;
    // for(int x:se)cout<<x<<" ";
    // cout<<endl;
    
    // for (auto it = se.rbegin(); it !=se.rend(); it++)
    // {
    //     cout<<*it<<" ";
    // }
    
    //set<int,greater<int>>s;->dùng để đảo ngược mảng


    //find() nếu trỏ đến end() thì không tìm thấy
    // if(se.find(1)!=se.end()){
    //     cout<<"FOUND";
    // }
    // else{
    //     cout<<"NOT FOUND";
    // }

//   int n;cin>>n;
//     multiset<int>mse;
//     for (int i = 0; i <n; i++)
//     {
//         int x;cin>>x;
//         mse.insert(x);
//     }
//     auto it=mse.find(5);
//     int a=distance(mse.begin(),it);
//     cout<<a<<endl;

 
}