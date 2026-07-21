#include<iostream>
#include<set>
using namespace std;
int sum_pow(int &n){
    int sum=0;
    while(n>0){
    int one_nums=n%10;
    sum+=one_nums*one_nums;
    n/=10;
    }
    return sum;
}
bool IsHappy(int &n){
    multiset<int>se;
    while (n!=1&&se.find(n)==se.end())
    {
        se.insert(n);
        n=sum_pow(n);
    }
    return n==1;
}
int main(){
   int n;cin>>n;
   if(IsHappy(n)){
    cout<<"PERFECT";
   }
   else{
    cout<<"NOT PERFECT";
   }
}