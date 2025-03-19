#include "GioPhutGiay.h"
#include <iomanip>	
#include <iostream>
using namespace std;

void GioPhutGiay::Xuat() {
    // Sử dụng setw(2) để đặt độ rộng là 2 ký tự
    // Sử dụng setfill('0') để đệm số 0 ở phía trước nếu cần
    cout << setfill('0') << setw(2) << iGio << ":" 
         << setfill('0') << setw(2) << iPhut << ":" 
         << setfill('0') << setw(2) << iGiay;
}
void GioPhutGiay::Nhap() {
	do {
		cout << "Nhap gio: ";
		cin >> iGio;
		cout << "\nNhap phut: ";
		cin >> iPhut;
		cout << "\nNhap giay: ";
		cin >> iGiay;
		cout << endl;
		if (iGio > 23 ||  iGio < 0 || iPhut > 59 || iPhut < 0 || iGiay >59 || iGiay < 0) {
			cout << "Gio khong hop le, moi nhap lai!\n";
		}
	} while (iGio > 23 ||  iGio < 0 || iPhut > 59 || iPhut < 0 || iGiay >59 || iGiay < 0);
};
GioPhutGiay GioPhutGiay::TinhCongThemMotGiay() {
	GioPhutGiay kq = *this;
    kq.iGiay++;
    if (kq.iGiay == 60) {
        kq.iGiay = 0;
        kq.iPhut++;
        if (kq.iPhut == 60) {
            kq.iPhut = 0;
            kq.iGio++;
            if (kq.iGio == 24) {
                kq.iGio = 0;
            }
        }
    }
    
    return kq;
};
