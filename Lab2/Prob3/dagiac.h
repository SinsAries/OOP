#ifndef DAGIAC_H
#define DAGIAC_H

#include "diem.h"

class DaGiac {
private:
    int n;          // Số đỉnh của đa giác
    Diem *Dinh;     // Mảng chứa các đỉnh

public:
    // Constructor và destructor
    DaGiac();
    ~DaGiac();

    // Phương thức nhập tọa độ các đỉnh
    void Nhap();

    // Phương thức xuất tọa độ các đỉnh
    void Xuat() const;

    // Phương thức dịch chuyển đa giác
    void TinhTien(int dx, int dy);

    // Phương thức phóng to đa giác
    void PhongTo(float k);

    // Phương thức thu nhỏ đa giác
    void ThuNho(float k);

    // Phương thức quay đa giác quanh gốc tọa độ
    void Quay(float goc);
};

#endif
