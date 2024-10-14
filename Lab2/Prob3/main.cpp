#include "dagiac.h"

int main() {
    DaGiac dg;

    // Nhập tọa độ các đỉnh của đa giác
    dg.Nhap();

    // Xuất tọa độ của đa giác
    cout << "Da giac vua nhap:" << endl;
    dg.Xuat();

    // Dịch chuyển đa giác
    dg.TinhTien(2, 3);
    cout << "Da giac sau khi tinh tien:" << endl;
    dg.Xuat();

    // Phóng to đa giác
    dg.PhongTo(2.0);
    cout << "Da giac sau khi phong to:" << endl;
    dg.Xuat();

    // Thu nhỏ đa giác
    dg.ThuNho(2.0);
    cout << "Da giac sau khi thu nho:" << endl;
    dg.Xuat();

    // Quay đa giác 45 độ
    dg.Quay(3.14159 / 4);  // 45 độ = pi/4 radian
    cout << "Da giac sau khi quay 45 do:" << endl;
    dg.Xuat();

    return 0;
}
