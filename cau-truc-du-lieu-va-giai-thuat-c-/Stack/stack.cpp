
//-------------------------NGĂN XẾP-----------------------


#include<iostream>
#include<stack>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
//LIFO(Last IN,Fisrt OUT):vào sau ,ra trước
//push()
//pop() xóa trên đỉnh stack
//top() đỉnh xếp
//size()
//empty()

// int main(){
//   stack<int>st;
//   st.push(1);
//   st.push(2);
//   st.push(3);
//   cout<<st.top()<<endl;
//   st.pop();
//   cout<<st.top()<<endl;
// }

//bài toán số thập phân thành nhị phân
// int main(){
//     int n;cin>>n;
//     stack<int>st;
//     while (n!=0)
//     {
//         st.push(n%2);
//         n/=2;
//     }
//     while (!st.empty())
//     {
//         cout<<st.top();
//         st.pop();
//     }
// }

//bài toán về ỉn ra các xâu ngược lại
//VD:string java python c#
//->c# python java string
// int main(){
//     string s;getline(cin,s);
//     stringstream ss(s);
//     string token;
//     stack<string>st;
//     while (ss>>token)
//     {
//         st.push(token);
//     }
//     while (!st.empty())
//     {
//         cout<<st.top()<<" ";
//         st.pop();
//     }
// }

//bài toán kiểm tra nhập 1 chuỗi xâu ()()()() xem xâu chuỗi này có hợp lệ hay không
int main(){
    int q;cin>>q;
    while(q--){
    string s;cin>>s;
    stack<char>st;
    for(auto x:s){
        if(x=='('){
            st.push(x);
        }
        else{
            if(st.empty()){
                cout<<"INVALID\n";
            }
            else{
                st.pop();
            }
        }
    }
    if(st.empty()){
        cout<<"VALID\n";
    }
    else{
        cout<<"INVALID\n";
    }
}
}



// int main(){
//     int n;cin>>n;
//     vector<int>a(n);//dùng để lưu giá trị nhập cần 
//     vector<int>b(n);//dùng để lưu giá trị xuất cần
//     stack<int>st;//dùng để lưu index
//     for(int &x:a)cin>>x;
//     for (int i = 0; i <n; i++)
//     {
//         if(st.empty()){
//             st.push(i);
//         }
//         else{
//             //khi st không rỗng và giá trị a tại vị trí index đỉnh nhỏ hơn a[i]
//             while (!st.empty()&&a[st.top()]<a[i])
//             {
//                 //lưu b tại vị trí index đỉnh =a[i]
//                 b[st.top()]=a[i];
//                 //sau khi tìm được giá trị lớn hơn nó ngay sau nó thì pop()
//                 st.pop();
//             }
//             //và push index vào
//             st.push(i);
//         }
        
//     }
//     //các giá trị b tại index đỉnh sau nó không có giá trị lớn hơn nó thì =-1
//     while(!st.empty()){
//             b[st.top()]=-1;
//             //sau khi gán b tại index đỉnh thì xóa index đỉnh đi để đến với vị tri tiếp theo
//             st.pop();
//         }
//         //in ra kết quả qua for each
//     for(int x:b){
//         cout<<x<<" ";
//     }
//     return 0;
// }