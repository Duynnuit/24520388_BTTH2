#include "SoPhuc.h"
#include <iostream>
#include <cmath>
using namespace std;

void SoPhuc::Nhap() {
	cout << "Nhap phan thuc: ";
	cin >> iThuc;
	cout << "Nhap phan ao: ";
	cin >> iAo;
};
void SoPhuc::Xuat() {
    if (iAo == 0) {
        cout << "So phuc: " << iThuc;
    }
    else if (iThuc == 0) {
        if (iAo == 1) {
            cout << "So phuc: i";
        }
        else if (iAo == -1) {
            cout << "So phuc: -i";
        }
        else {
            cout << "So phuc: " << iAo << "i";
        }
    }
    else if (iAo == 1) {
        cout << "So phuc: " << iThuc << " + i";
    }
    else if (iAo == -1) {
        cout << "So phuc: " << iThuc << " - i";
    }
    else if (iAo > 0) {
        cout << "So phuc: " << iThuc << " + " << iAo << "i";
    }
    else {
        cout << "So phuc: " << iThuc << " " << iAo << "i";
    }
}
SoPhuc SoPhuc::Tong(SoPhuc b) {
    SoPhuc kq;
    kq.iThuc = this->iThuc + b.iThuc;
    kq.iAo = this->iAo + b.iAo;
    return kq;
}

SoPhuc SoPhuc::Hieu(SoPhuc b) {
    SoPhuc kq;
    kq.iThuc = this->iThuc - b.iThuc;
    kq.iAo = this->iAo - b.iAo;
    return kq;
}

SoPhuc SoPhuc::Tich(SoPhuc b) {
    SoPhuc kq;
    kq.iThuc = this->iThuc * b.iThuc - this->iAo * b.iAo;
    kq.iAo = this->iThuc * b.iAo + this->iAo * b.iThuc;
    return kq;
}

SoPhuc SoPhuc::Thuong(SoPhuc b) {
   SoPhuc kq;
    float mau = b.iThuc * b.iThuc + b.iAo * b.iAo;
    if (mau == 0) {
        cout << "Error: Division by zero" << endl;
        kq.iThuc = 0;
        kq.iAo = 0;
    } else {
        kq.iThuc = (this->iThuc * b.iThuc + this->iAo * b.iAo) / mau;
        kq.iAo = (this->iAo * b.iThuc - this->iThuc * b.iAo) / mau;
    }
    return kq;
}

