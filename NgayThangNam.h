#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H
#include <iostream>
using namespace std;

class NgayThangNam
{
private:
	int iNgay, iThang, iNam;
	
public:
	void Nhap();
	void Xuat();
	void NgayThangNamTiepTheo();
};

#endif