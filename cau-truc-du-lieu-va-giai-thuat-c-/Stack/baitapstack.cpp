#include<iostream>
#include<stack>
#include<vector>
#include<string>

using namespace std;

//bài tập chuyển từ số thập phân sang nhị phân
// int main(){
//     int n;
//     cout<<"NHAP VAO SO CAN CHUYEN DOI :";
//     cin>>n;
//     stack<int>st;
//     while(n!=0){
//       st.push(n%2);
//       n/=2;
//     }
//     while(!st.empty()){
//     cout<<st.top();
//     st.pop();
//     }
// }

//bài toán nhập kí tự (){} có chuẩn hay không
int main(){
    string s;cin>>s;
    stack<char>st;
    for(auto x:s){
        if(x=='('){
            st.push(x);
        }
    }
    while (!st.empty())
    {
        for(auto a:s){
           if(a==')'){
             st.pop();
           }
        }
        
    }
    if(st.empty()){
        cout<<"Value\n";
    }
    else{
        cout<<"Invalue\n";
    }
}