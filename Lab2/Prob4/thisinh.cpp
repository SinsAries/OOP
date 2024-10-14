#include "thisinh.h"

// Hàm nhập thông tin của thí sinh
void ThiSinh::Nhap() {
    cout << "Nhap ten: ";
    getline(cin, Ten);

    cout << "Nhap MSSV: ";
    cin >> MSSV;

    cout << "Nhap ngay sinh (dd mm yyyy): ";
    cin >> iNgay >> iThang >> iNam;

    cout << "Nhap diem Toan: ";
    cin >> fToan;

    cout << "Nhap diem Van: ";
    cin >> fVan;

    cout << "Nhap diem Anh: ";
    cin >> fAnh;

    cin.ignore(); // Xóa bộ nhớ đệm sau khi nhập số
}

// Hàm xuất thông tin của thí sinh
void ThiSinh::Xuat() const {
    cout << "Ten: " << Ten << endl;
    cout << "MSSV: " << MSSV << endl;
    cout << "Ngay sinh: " << iNgay << "/" << iThang << "/" << iNam << endl;
    cout << "Diem Toan: " << fToan << endl;
    cout << "Diem Van: " << fVan << endl;
    cout << "Diem Anh: " << fAnh << endl;
    cout << "Tong diem: " << Tong() << endl;
}

// Hàm tính tổng điểm của thí sinh
float ThiSinh::Tong() const {
    return fToan + fVan + fAnh;
}

// Hàm lấy MSSV của thí sinh
string ThiSinh::getMSSV() const {
    return MSSV;
}