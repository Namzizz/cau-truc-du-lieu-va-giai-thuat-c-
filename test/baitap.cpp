#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;



// int n;
// vector<char>a;
// bool ok =true;
// void khoi_tao(){
//      a.clear();
//    for (int i = 0; i <n; i++)
//    {
//      a.push_back('A');
//    }
// }
// void sinh(){
//     int i=n-1;
//     while (i>=0&&a[i]=='B')
//     {
//         a[i]='A';
//         --i;
//     }
//     if(i<0){
//         ok=false;
//     }
//     else{
//         a[i]='B';
//     }
// }
// int main(){
//     int q;cin>>q;
//    while (q--)
//    {
//      cin>>n;
//     khoi_tao();
//     ok=true;
//     while (ok)
//     {
//         for(int i=0;i<n;i++){
//             cout<<a[i];
//         }
//     cout<<" ";
//     sinh();
//     }
//     cout<<endl;
//    }
// }


// int n;
// vector<int>a;
// bool ok=true;
// void khoi_tao(){
//     a.clear();
//     a.push_back(n);
// }
// void sinh(){
//     int i=a.size()-1;
//     while (i>=0&&a[i]==1)
//     {
//         --i;
//     }
//     if(i<0){
//         ok=false;
//     }
//     else{
//         a[i]--;
//         int So1BoQua=a.size()-1-i;
//         int TongCanThem=So1BoQua+1;
//         int SoLanThem=TongCanThem/a[i];
//         int SoDuThem=TongCanThem%a[i];
//         a.resize(i+1);
//         for (int j = 1; j <=SoLanThem; j++)
//         {
//             a.push_back(a[i]);
//         }
//         if(SoDuThem>0){
//             a.push_back(SoDuThem);
//         }
//     }
// }
// int main(){
//   int q;cin>>q;
//   while (q--)
//   {
//     cin>>n;
//     khoi_tao();
//     ok=true;
//     while (ok)
//     {
//         cout<<"(";
//         for(int i=0;i<a.size();i++){
//             cout<<a[i];
//         if(i<a.size()-1){
//           cout<<" ";
//         }
//         else{
//         cout<<") ";
//         }
//     }
//         sinh();
//     }
//   }
// }


// int n,k;
// vector<char>a;
// bool ok=true;
// void khoi_tao(){
//     for (int i = 0; i < n; i++)
//     {
//          a.push_back('A');
//     }
// }
// void sinh(){
//     int i=a.size()-1;
//     while (i>=0&&a[i]=='B')
//     {
//         a[i]='A';
//         --i;
//     }
//     if(i<0){
//         ok=false;
//     }
//     else{
//         a[i]='B';
//     }
// }
// bool check(){
//     int dem=0;
//     int res=0;
//     //kiểm tra đoạn đầu
//     for (int i = 0; i <a.size(); i++)//BAAAA
//     {
//         if(a[i]=='A'){
//           dem+=1;
//         }
//         else{
//             if(dem>k)return false;
//              if(dem==k)res++;
//            dem =0;
//         }
// }
// //kiểm tra xem đoạn cuối có chứa a không
//    if(dem>k){
//         return false;
//     }
//     if(dem==k){
//         res++;
//     }
//     return res==1; 
// }
// int main(){
//   cin>>n>>k;
//   khoi_tao();
//    while (ok)
//    {
//     if (check())
//     {
//         for(auto x:a){
//             cout<<x;
//         }
//     cout<<endl;
//     }
//     sinh();
//    }
// }

// int n,k;
// set<int>se;
// vector<int>a;
// void khoi_tao(){
//     a.resize(n+1);
//     se.clear();
//     for (int i = 1; i <=k; i++)
//     {
//         cin>>a[i];
//         se.insert(a[i]);
//     }
// }
// void next(){
//     int i=k;
//     while (i>=1&&a[i]==n-k+i)
//     {
//         --i;
//     }
//     if(i==0){
//         cout<<k<<endl;
//     }
//     else{
//         a[i]++;
//         for (int j = i+1; j <=k; j++)
//         {
//             a[j]=a[j-1]+1;       
//          }
//     int cnt=0;
//     for (int j = 1; j <=k; j++)
//     {
//         if(se.find(a[j])==se.end()){//giá trị biên a[j] không tồn tại trong set
//             ++cnt;
//         }
//     }
//     cout<<cnt<<endl;
//     }  
// }
// int main(){
//   int q;cin>>q;
//   while (q--)
//   {
//     cin>>n>>k;
//     khoi_tao();
//     next();
//   }
// }

// int main() {
//     int n, k;
//     cout << "Nhap n: ";
//     cin >> n;
//     cout << "Nhap k: ";
//     cin >> k;
//     int matrix[20][20];
//     cout << "Nhap ma tran " << n << "x" << n << ":" << endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> matrix[i][j];
//         }
//     }
//     // Khởi tạo mảng chỉ số cột p = {0, 1, 2, ..., n-1}
//     vector<int> p(n);
//     iota(p.begin(), p.end(), 0); // Điền các giá trị tăng dần 0, 1, 2...
//     bool found = false;
//     cout << "\nKet qua:" << endl;
//     // Sinh các hoán vị
//     do {
//         int current_sum = 0;
//         // Tính tổng dựa trên hoán vị hiện tại
//         // Hàng i sẽ lấy cột p[i]
//         for (int i = 0; i < n; i++) {
//             current_sum += matrix[i][p[i]];
//         }
//         // Kiểm tra điều kiện tổng bằng k
//         if (current_sum == k) {
//             found = true;
//             for (int i = 0; i < n; i++) {
//                 cout << matrix[i][p[i]] << (i == n - 1 ? "" : " + ");
//             }
//             cout << " = " << k << " (Vi tri: ";
//             for (int i = 0; i < n; i++) {
//                 cout << "(" << i << "," << p[i] << ") ";
//             }
//             cout << ")" << endl;
//         }
//     } while (next_permutation(p.begin(), p.end())); // Sinh hoán vị kế tiếp
//     if (!found) {
//         cout << "Khong co cach chon nao thoa man." << endl;
//     }
//     return 0;
// }

int main(){
    int n,k;
    cin>>n>>k;
    int mt[20][20];
    bool ok=false;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            cin>>mt[i][j];
        }
    }
    //tạo p để lưu giá trị cột
    vector<int>p(n);//gán p[i]=i thì phải khai báo (n)
    for (int i = 0; i <n; i++)
    {
        p[i]=i;
    }

    vector<vector<int>>right;//biến lưu lại giá trị đúng
    do{
    int sum=0;
    for (int i = 0; i <n; i++)
    {
        sum+=mt[i][p[i]];
    }
   
    if(sum==k){
        right.push_back(p);
    }
}while(next_permutation(p.begin(),p.end()));
    cout<<right.size()<<endl;
    //muốn in ra vector<vector> thì phải dùng 2 vòng lặp for
    for(auto& it:right){ // chứa tập hợp kết quả VD:{1,2,3},{3,2,1}
        for(auto result:it){//in ra từng kết quả 1 VD:1 2 3  //endl //3 2 1

            cout<<result+1<<" ";
        }
        cout<<endl;
    }
  return 0;
}

