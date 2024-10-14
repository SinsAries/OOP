#ifndef THISINH_H
#define THISINH_H

#include <iostream>
#include <string>
using namespace std;

class ThiSinh {
private:
    string Ten;
    string MSSV;
    int iNgay, iThang, iNam;
    float fToan, fVan, fAnh;

public:
    // Phương thức nhập thông tin thí sinh
    void Nhap();

    // Phương thức xuất thông tin thí sinh
    void Xuat() const;

    // Phương thức tính tổng điểm
    float Tong() const;

    // Phương thức lấy MSSV
    string getMSSV() const;
};

#endif
