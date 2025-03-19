#include <iostream>
#include "GioPhutGiay.h"
using namespace std;

int main() {
	GioPhutGiay x;
	x.Nhap();
	cout << "Gio nhap vao: ";
	x.Xuat();
	cout << "\nGio khi cong them mot giay: ";
	x.TinhCongThemMotGiay().Xuat();
	return 0;
}

