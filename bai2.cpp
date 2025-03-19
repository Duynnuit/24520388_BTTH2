#include <iostream>
#include "PhanSo.h"
using namespace std;
int main() {
	PhanSo ps1, ps2;
	ps1.Nhap();
	ps2.Nhap();
	cout << "Phan so thu nhat la: ";
	ps1.Xuat();
	cout << "\nPhan so thu hai la: ";
	ps2.Xuat();
	cout << "\nKet qua cac phep toan:\n";  
    cout << "Cong: ";
    ps1.Tong(ps2).Xuat();  
    cout << "\nTru: ";
    ps1.Hieu(ps2).Xuat();    
    cout << "\nNhan: ";
    ps1.Tich(ps2).Xuat();    
    cout << "\nChia: ";
    ps1.Thuong(ps2).Xuat();    
    cout << "\nSoSanh: ";
    int ketQua = ps1.SoSanh(ps2);
	if (ketQua < 0)
	    cout << "Phan so thu nhat < Phan so thu hai" << endl;
	else if (ketQua > 0)
	    cout << "Phan so thu nhat > Phan so thu hai" << endl;
	else
	    cout << "Hai phan so bang nhau" << endl;
	return 0;
}


