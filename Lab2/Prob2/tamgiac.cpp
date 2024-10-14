#include "tamgiac.h"
#include <cmath>

// Hàm nhập tọa độ cho các đỉnh của tam giác
void TamGiac::Nhap() {
    cout << "Nhap toa do dinh A: ";
    A.Nhap(); // Giả sử Diem có phương thức Nhap()
    
    cout << "Nhap toa do dinh B: ";
    B.Nhap();

    cout << "Nhap toa do dinh C: ";
    C.Nhap();
}

// Hàm xuất tọa độ các đỉnh của tam giác
void TamGiac::Xuat() const {
    cout << "Toa do dinh A: "; A.Xuat();
    cout << "Toa do dinh B: "; B.Xuat();
    cout << "Toa do dinh C: "; C.Xuat();
}

// Hàm dịch chuyển tam giác theo vector (dx, dy)
void TamGiac::TinhTien(int dx, int dy) {
    A.TinhTien(dx, dy);
    B.TinhTien(dx, dy);
    C.TinhTien(dx, dy);
}

// Hàm phóng to tam giác với tỉ lệ k
void TamGiac::PhongTo(float k) {
    A.SetHoanhDo(A.GetHoanhDo() * k);
    A.SetTungDo(A.GetTungDo() * k);
    
    B.SetHoanhDo(B.GetHoanhDo() * k);
    B.SetTungDo(B.GetTungDo() * k);
    
    C.SetHoanhDo(C.GetHoanhDo() * k);
    C.SetTungDo(C.GetTungDo() * k);
}

// Hàm thu nhỏ tam giác với tỉ lệ k
void TamGiac::ThuNho(float k) {
    PhongTo(1.0 / k);  // Thu nhỏ bằng cách phóng to với hệ số nghịch đảo
}

// Hàm quay tam giác quanh gốc tọa độ một góc (đơn vị: radian)
void TamGiac::Quay(float goc) {
    float sinGoc = sin(goc);
    float cosGoc = cos(goc);

    auto QuayDiem = [&](Diem &P) {
        int x = P.GetHoanhDo();
        int y = P.GetTungDo();
        P.SetHoanhDo(x * cosGoc - y * sinGoc);
        P.SetTungDo(x * sinGoc + y * cosGoc);
    };

    QuayDiem(A);
    QuayDiem(B);
    QuayDiem(C);
}
