#include <iostream>
#include "diem.h"
using namespace std;

// Constructor mặc định
Diem::Diem() : iHoanh(0), iTung(0) {}

// Constructor có tham số
Diem::Diem(int Hoanh, int Tung) : iHoanh(Hoanh), iTung(Tung) {}

// Constructor sao chép
Diem::Diem(const Diem &x) : iHoanh(x.iHoanh), iTung(x.iTung) {}

// Getter cho tọa độ Tung
int Diem::GetTungDo() const {
    return iTung;
}

// Getter cho tọa độ Hoanh
int Diem::GetHoanhDo() const {
    return iHoanh;
}

// Setter cho tọa độ Tung
void Diem::SetTungDo(int Tung) {
    iTung = Tung;
}

// Setter cho tọa độ Hoanh
void Diem::SetHoanhDo(int Hoanh) {
    iHoanh = Hoanh;
}

// Phương thức xuất tọa độ
void Diem::Xuat() const {
    cout << "Toa do: (" << iHoanh << ", " << iTung << ")" << endl;
}

// Phương thức tính tiền tọa độ (dịch chuyển điểm)
void Diem::TinhTien(int dx, int dy) {
    iHoanh += dx;
    iTung += dy;
}
