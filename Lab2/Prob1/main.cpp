#include <iostream>
#include "diem.h"
using namespace std;

int main() {
    // Tạo đối tượng Diem với constructor mặc định
    Diem A;
    A.Xuat();  // Xuất tọa độ của điểm A

    // Tạo đối tượng Diem với constructor có tham số
    Diem B(3, 4);
    B.Xuat();  // Xuất tọa độ của điểm B

    // Sử dụng các phương thức getter và setter để thay đổi giá trị
    B.SetHoanhDo(5);
    B.SetTungDo(6);
    cout << "Toa do sau khi thay doi cua B:" << endl;
    B.Xuat();  // Xuất lại tọa độ của điểm B sau khi thay đổi

    // Dịch chuyển điểm B theo vector (dx, dy)
    B.TinhTien(2, 3);
    cout << "Toa do sau khi tinh tien cua B:" << endl;
    B.Xuat();  // Xuất tọa độ của điểm B sau khi dịch chuyển

    // Tạo đối tượng Diem bằng constructor sao chép
    Diem C(B);
    cout << "Toa do cua C (copy tu B):" << endl;
    C.Xuat();  // Xuất tọa độ của điểm C (sao chép từ B)

    return 0;
}
