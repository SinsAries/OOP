#include "dagiac.h"
#include <cmath>
#include <iostream>

using namespace std;

// Constructor mặc định
DaGiac::DaGiac() : n(0), Dinh(nullptr) {}

// Destructor để giải phóng bộ nhớ
DaGiac::~DaGiac() {
    delete[] Dinh;
}

// Hàm nhập tọa độ cho các đỉnh của đa giác
void DaGiac::Nhap() {
    cout << "Nhap so dinh cua da giac: ";
    cin >> n;
    Dinh = new Diem[n];  // Cấp phát mảng cho các đỉnh

    for (int i = 0; i < n; ++i) {
        cout << "Nhap toa do dinh " << i + 1 << ": " << endl;
        Dinh[i].Nhap();
    }
}

// Hàm xuất tọa độ các đỉnh của đa giác
void DaGiac::Xuat() const {
    for (int i = 0; i < n; ++i) {
        cout << "Dinh " << i + 1 << ": ";
        Dinh[i].Xuat();
    }
}

// Hàm dịch chuyển đa giác theo vector (dx, dy)
void DaGiac::TinhTien(int dx, int dy) {
    for (int i = 0; i < n; ++i) {
        Dinh[i].TinhTien(dx, dy);
    }
}

// Hàm phóng to đa giác với tỉ lệ k
void DaGiac::PhongTo(float k) {
    for (int i = 0; i < n; ++i) {
        Dinh[i].SetHoanhDo(Dinh[i].GetHoanhDo() * k);
        Dinh[i].SetTungDo(Dinh[i].GetTungDo() * k);
    }
}

// Hàm thu nhỏ đa giác với tỉ lệ k
void DaGiac::ThuNho(float k) {
    PhongTo(1.0 / k);
}

// Hàm quay đa giác quanh gốc tọa độ một góc (đơn vị: radian)
void DaGiac::Quay(float goc) {
    float sinGoc = sin(goc);
    float cosGoc = cos(goc);

    for (int i = 0; i < n; ++i) {
        int x = Dinh[i].GetHoanhDo();
        int y = Dinh[i].GetTungDo();
        Dinh[i].SetHoanhDo(x * cosGoc - y * sinGoc);
        Dinh[i].SetTungDo(x * sinGoc + y * cosGoc);
    }
}
