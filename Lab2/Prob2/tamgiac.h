#ifndef TAMGIAC_H
#define TAMGIAC_H

#include "diem.h"

class TamGiac {
public:
    Diem A, B, C;

    // Phương thức nhập các đỉnh của tam giác
    void Nhap();

    // Phương thức xuất tọa độ các đỉnh
    void Xuat() const;

    // Phương thức dịch chuyển tam giác
    void TinhTien(int dx, int dy);

    // Phương thức phóng to tam giác
    void PhongTo(float k);

    // Phương thức thu nhỏ tam giác
    void ThuNho(float k);

    // Phương thức quay tam giác quanh gốc tọa độ
    void Quay(float goc);
};

#endif
