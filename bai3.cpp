#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main() {
	SoPhuc sp1, sp2;
	cout << "Nhap so phuc thu nhat:" << endl;
	sp1.Nhap();
	cout << "Nhap so phuc thu hai:" << endl;
	sp2.Nhap();
	cout << "Ket qua cac phep toan: ";
	cout << "\nTong: ";
	sp1.Tong(sp2).Xuat();
	cout << "\nHieu: ";
	sp1.Hieu(sp2).Xuat();
	cout << "\nTich: ";
	sp1.Tich(sp2).Xuat();
	cout << "\nThuong: ";
	sp1.Thuong(sp2).Xuat();
	return 0;
}

