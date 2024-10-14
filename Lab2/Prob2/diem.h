#ifndef DIEM_H
#define DIEM_H

#include <iostream>
using namespace std;

class Diem {
private:
    int iHoanh;
    int iTung;

public:
    // Constructor mặc định
    Diem();

    // Constructor có tham số
    Diem(int Hoanh, int Tung);

    // Constructor sao chép
    Diem(const Diem &x);

    // Getter cho tọa độ Tung
    int GetTungDo() const;

    // Getter cho tọa độ Hoanh
    int GetHoanhDo() const;

    // Setter cho tọa độ Tung
    void SetTungDo(int Tung);

    // Setter cho tọa độ Hoanh
    void SetHoanhDo(int Hoanh);

    // Phương thức nhập tọa độ
    void Nhap();

    // Phương thức xuất tọa độ
    void Xuat() const;

    // Phương thức tính tiền tọa độ (dịch chuyển điểm)
    void TinhTien(int dx, int dy);
};

#endif
