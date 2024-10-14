// Diem.h - Khai báo lớp Diem
#ifndef DIEM_H // Kiểm tra tránh khai báo lại
#define DIEM_H

class Diem {
private:
    int iHoanh;
    int iTung;

public:
    // Constructor mặc định
    Diem() : iHoanh(0), iTung(0) {}

    // Constructor có tham số
    Diem(int Hoanh, int Tung) : iHoanh(Hoanh), iTung(Tung) {}

    // Constructor sao chép
    Diem(const Diem &x) : iHoanh(x.iHoanh), iTung(x.iTung) {}

    // Getter cho tọa độ Tung
    int GetTungDo() const {
        return iTung;
    }

    // Getter cho tọa độ Hoanh
    int GetHoanhDo() const {
        return iHoanh;
    }

    // Setter cho tọa độ Tung
    void SetTungDo(int Tung) {
        iTung = Tung;
    }

    // Setter cho tọa độ Hoanh
    void SetHoanhDo(int Hoanh) {
        iHoanh = Hoanh;
    }

    // Phương thức xuất tọa độ
    void Xuat() const {
        cout << "Toa do: (" << iHoanh << ", " << iTung << ")" << endl;
    }

    // Phương thức tính tiền tọa độ (dịch chuyển điểm)
    void TinhTien(int dx, int dy) {
        iHoanh += dx;
        iTung += dy;
    }
};

#endif // DIEM_H