#ifndef PHANSO_H
#define PHANSO_H

class PhanSo
{
private:
	int tu, mau;
public:
	
	PhanSo();
    PhanSo(int tuSo, int mauSo);
	void Nhap();
	void Xuat();
	void RutGon();
	PhanSo Tong(PhanSo x);
	PhanSo Hieu(PhanSo x);
	PhanSo Tich(PhanSo x);
	PhanSo Thuong(PhanSo x);
	int SoSanh(PhanSo x);
};

#endif