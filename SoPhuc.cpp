#include <iostream>
#include "SoPhuc.h"
#include <cmath>
using namespace std;
void SoPhuc::NhapPhanThuc() {
	cout << "Nhap phan thuc: " << endl;
	cin >> iPhanThuc;
}
void SoPhuc::NhapPhanAo() {
	cout << "Nhap phan ao: " << endl;
	cin >> iPhanAo;
}
void SoPhuc::XuatSoPhuc() {
	if (iPhanAo < 0) {
		cout << iPhanThuc << iPhanAo << "i" << endl;
	}
	else if (iPhanThuc == 0) cout << iPhanAo << "i" << endl;
	else if (iPhanAo == 0) cout << iPhanThuc << endl;
	else cout << iPhanThuc << "+" << iPhanAo << "i" << endl;
}
SoPhuc SoPhuc::Add() {
	SoPhuc b;
	b.NhapPhanThuc();
	b.NhapPhanAo();
	SoPhuc c;
	c.iPhanThuc = this->iPhanThuc + b.iPhanThuc;
	c.iPhanAo = this->iPhanAo + b.iPhanAo;
	return c;
}
SoPhuc SoPhuc::Sub() {
	SoPhuc b;
	b.NhapPhanThuc();
	b.NhapPhanAo();
	SoPhuc c;
	c.iPhanThuc = this->iPhanThuc - b.iPhanThuc;
	c.iPhanAo = this->iPhanAo - b.iPhanAo;
	return c;
}
SoPhuc SoPhuc::Multi() {
	SoPhuc b;
	b.NhapPhanThuc();
	b.NhapPhanAo();
	SoPhuc c;
	c.iPhanThuc = this->iPhanThuc * b.iPhanThuc - this->iPhanAo * b.iPhanAo;
	c.iPhanAo = this->iPhanThuc * b.iPhanAo + this->iPhanAo * b.iPhanThuc;
	return c;
}
SoPhuc SoPhuc::Div() {
	SoPhuc b;
	b.NhapPhanThuc();
	b.NhapPhanAo();
	SoPhuc c;
	int mau = pow(b.iPhanThuc, 2) + pow(b.iPhanAo, 2);
	c.iPhanThuc = (this->iPhanThuc * b.iPhanThuc + this->iPhanAo * b.iPhanAo) / mau;
	c.iPhanAo = (b.iPhanThuc * this->iPhanAo - this->iPhanThuc * b.iPhanAo) / mau;
	if (c.iPhanThuc == 0 && c.iPhanAo == 0) cout << "Loi!";
	return c;
}
