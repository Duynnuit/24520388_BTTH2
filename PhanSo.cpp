#include "PhanSo.h"
#include <iostream>
#include <cmath>
using namespace std;

PhanSo::PhanSo() {
    tu = 0;
    mau = 1;
}

PhanSo::PhanSo(int tuSo, int mauSo) {
    tu = tuSo;
    if (mauSo == 0) {
        cout << "Lỗi: Mẫu số không thể bằng 0. Đặt mẫu số = 1." << endl;
        mau = 1;
    } else {
        mau = mauSo;
    }
}

int gcd(int a, int b) {
	a = abs(a);
	b = abs(b);
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

void PhanSo::Nhap() {
	cout << "Nhap tu: ";
	cin >> tu;
        do {
            cout << "Nhap mau so khac 0: ";
            cin >> mau;
            if (mau == 0) {
                cout << "Mau so khong duoc bang 0, moi nhap lai!" << endl;
            }
        } while (mau == 0);
};
void PhanSo::Xuat() {
	if (mau == 1) {
            cout << tu;
        } else {
            cout << tu << "/" << mau;
        }
};
void PhanSo::RutGon() {
	int x = gcd(tu, mau);
	if (x != 0) {
            tu /= x;
            mau /= x;
        }
    if (mau < 0) {
        tu *= -1;
        mau *= -1;
    }
};
PhanSo PhanSo::Tong(PhanSo x) {
        PhanSo kq;
        kq.tu = tu * x.mau + mau * x.tu;
        kq.mau = mau * x.mau;
    	kq.RutGon();
    	return kq;
    }
    
PhanSo PhanSo::Hieu(PhanSo x) {
        PhanSo kq;
        kq.tu = tu * x.mau - mau * x.tu;
        kq.mau = mau * x.mau;
    	kq.RutGon();
    	return kq;
    }
    
PhanSo PhanSo::Tich(PhanSo x) {
        PhanSo kq;
    	kq.tu = tu * x.tu;
    	kq.mau = mau * x.mau;
   	 	kq.RutGon();
    	return kq;
    }
    
PhanSo PhanSo::Thuong(PhanSo x) {
        if (x.tu == 0) {
        	cout << "Khong the chia cho phan so bang 0!" << endl;
        	return PhanSo(0, 1);
    	}
    	PhanSo kq;
    	kq.tu = tu * x.mau;
    	kq.mau = mau * x.tu;
    	kq.RutGon();
    	return kq;
    }
int PhanSo::SoSanh(PhanSo x) {
	// Chuyển về cùng mẫu để so sánh
    int tu1 = tu * x.mau;
    int tu2 = x.tu * mau;
    
    if (tu1 < tu2)
        return -1;  // this < x
    else if (tu1 > tu2)
        return 1;   // this > x
    else
        return 0;   // this = x
};