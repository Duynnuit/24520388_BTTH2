#ifndef SOPHUC_H
#define SOPHUC_H

class SoPhuc
{
private:
	float iThuc, iAo;
public:
	void Nhap();
	void Xuat();
	SoPhuc Tong(SoPhuc);
	SoPhuc Hieu(SoPhuc);
	SoPhuc Tich(SoPhuc);
	SoPhuc Thuong(SoPhuc);
};

#endif


