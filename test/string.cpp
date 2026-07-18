1. Nhóm kiểm tra và quản lý kích thước
length() hoặc size(): Trả về độ dài (số ký tự) của chuỗi.

empty(): Kiểm tra chuỗi có rỗng hay không (trả về true/false).

clear(): Xóa toàn bộ nội dung của chuỗi, đưa chuỗi về rỗng.

resize(n): Thay đổi kích thước chuỗi thành n ký tự.

2. Nhóm truy cập phần tử
operator[] (Ví dụ: s[i]): Truy cập ký tự tại vị trí i (nhanh, nhưng không kiểm tra tràn chỉ số).

at(i): Tương tự như s[i] nhưng an toàn hơn vì sẽ báo lỗi (ném ngoại lệ) nếu chỉ số i hợp lệ ngoài phạm vi.

front(): Lấy ký tự đầu tiên của chuỗi.

back(): Lấy ký tự cuối cùng của chuỗi.

3. Nhóm chỉnh sửa và biến đổi chuỗi
push_back(ch): Thêm ký tự ch vào cuối chuỗi.

pop_back(): Xóa ký tự cuối cùng của chuỗi.

append(str) hoặc operator+=: Nối thêm chuỗi str vào sau chuỗi hiện tại.

insert(pos, str): Chèn chuỗi str vào vị trí pos.

erase(pos, len): Xóa len ký tự bắt đầu từ vị trí pos.

replace(pos, len, str): Thay thế một đoạn gồm len ký tự từ vị trí pos bằng chuỗi str.

4. Nhóm tìm kiếm và cắt chuỗi
find(str): Tìm kiếm chuỗi str xuất hiện lần đầu tiên ở đâu. Trả về vị trí (chỉ số) đầu tiên tìm thấy, nếu không thấy sẽ trả về std::string::npos.

rfind(str): Tìm kiếm ngược từ cuối chuỗi lên đầu chuỗi.

substr(pos, len): Cắt và trả về một chuỗi con bắt đầu từ vị trí pos và có độ dài len.

5. Nhóm so sánh và chuyển đổi
compare(str): So sánh chuỗi hiện tại với chuỗi str (trả về 0 nếu bằng nhau, >0 hoặc <0 theo thứ tự từ điển). Tuy nhiên, thông thường người ta hay dùng trực tiếp các toán tử ==, !=, <, >, <= để trực quan hơn.

c_str(): Chuyển đổi chuỗi std::string sang mảng ký tự kiểu cũ của ngôn ngữ C (const char*), thường dùng khi cần làm việc với các hàm C truyền thống.