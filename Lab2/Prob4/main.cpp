#include "thisinh.h"

int main() {
    int n;
    cout << "Nhap so luong thi sinh: ";
    cin >> n;
    cin.ignore(); // Xóa bộ nhớ đệm sau khi nhập số lượng

    ThiSinh* ds = new ThiSinh[n]; // Mảng chứa danh sách thí sinh

    // Nhập thông tin cho từng thí sinh
    for (int i = 0; i < n; ++i) {
        cout << "Nhap thong tin thi sinh thu " << i + 1 << ":" << endl;
        ds[i].Nhap();
    }

    cout << "\nCac thi sinh co tong diem lon hon 15 diem:\n";
    for (int i = 0; i < n; ++i) {
        if (ds[i].Tong() > 15) {
            ds[i].Xuat();
            cout << "-----------------------" << endl;
        }
    }

    // Tìm thí sinh có tổng điểm cao nhất
    int idxMax = 0;
    for (int i = 1; i < n; ++i) {
        if (ds[i].Tong() > ds[idxMax].Tong()) {
            idxMax = i;
        }
    }

    cout << "\nThi sinh co tong diem cao nhat la:\n";
    ds[idxMax].Xuat();
    cout << "-----------------------" << endl;

    cout << "Thi sinh co tong diem cao nhat co MSSV la: " << ds[idxMax].getMSSV() << endl;

    delete[] ds; // Giải phóng bộ nhớ
    return 0;
}
