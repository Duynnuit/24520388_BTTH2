#include "NgayThangNam.h"
using namespace std;

int main() {
	NgayThangNam a;
	a.Nhap();
	cout << "Ngay hien tai: ";
	a.Xuat();
	cout << endl;
	cout << "Ngay tiep theo: ";
	a.NgayThangNamTiepTheo();
	a.Xuat();
	return 0;
}



