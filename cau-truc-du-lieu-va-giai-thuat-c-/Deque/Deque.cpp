
//--------------------HÀNG CHỜ HAI ĐẦU-----------------------


#include<iostream>
#include<deque>
#include<vector>
using namespace std;

//   deque<int>de;
//   de.push_front(1);//đẩy 1 vào đầu
//   de.push_back(2);//đẩy 2 vào cuối
//   de.push_front(3);
//   //de.pop_back();//xóa phần tử cuối
//  // de.pop_front();//xóa phần tử đầu
//   cout<<de.front()<<endl;//in ra chỉ số phần tử đầu
//   cout<<de.back()<<endl;//in ra chỉ số phần tử cuối


//bài toán tìm số lớn nhất tại cửa sổ k
int main(){
  int n,k;cin>>n>>k;
  vector<int>a(n+1);
  for (int i = 1; i <=n; i++)
  {
    cin>>a[i];
  }
  deque<int>de;//lưu bằng index
  for (int i = 1; i <a.size(); i++)
  {
    //xóa phần tử không nằm ở cửa sổ k
    if(!de.empty()&&de.front()<=i-k){
      de.pop_front();
    }
    //loại bỏ các phần tử nhỏ hơn phần tử sắp thêm vào de
    while (!de.empty()&&a[de.back()]<=a[i])
    {
      de.pop_back();
    }
    de.push_back(i);//thêm vị trí index của giá trị i 
  
    if(i>=k){//đk tìm ra đủ số lượng pt trong của sổ k chưa
      cout<<a[de.front()]<<" ";
    }
  }
return 0;

}