#include "NgayThangNam.h"
using namespace std;
void NgayThangNam::Xuat() {
	cout << iNgay << "/" << iThang << "/" << iNam;
};
	
bool namNhuan(int x) {
	if((x % 4 == 0 && x % 100 != 0) || x % 400 == 0) {
		return true;
	}
	return false;
}	

int ngayMoiThang(int x, int y) {
	if(x == 4 || x == 6 || x == 9 || x == 11) {
		return 30;
	} 
	if(x == 2) {
		return namNhuan(y) ? 29 : 28;
	}
	return 31;
}

void NgayThangNam::Nhap() {
	do {
		cout << "Nhap vao ngay thang nam: ";
		cin >> iNgay >> iThang >> iNam;
		if((iNgay > ngayMoiThang(iThang, iNam)) || iNgay < 0 || iThang < 0 || iThang > 12 || iNam < 0) {
			cout << "Ngay thang nam khong hop le!\n";
		}
	} while((iNgay > ngayMoiThang(iThang, iNam)) || iNgay < 0 || iThang < 0 || iThang > 12 || iNam < 0);
};

void NgayThangNam::NgayThangNamTiepTheo() {
	if(iNgay == ngayMoiThang(iThang, iNam)) {
		iNgay = 1;
		if(iThang == 12) {
			iThang = 1;
			iNam++;
		} else {
			iThang++;
		}
	} else {
		iNgay++;
	}
};
	