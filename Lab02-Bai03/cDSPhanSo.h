#ifndef CDSPHANSO_H
#define CDSPHANSO_H
#include <iostream>
#include <vector>
using namespace std;
class cPhanSo {
private:
	int iTuSo;
	int iMauSo;
public:
	cPhanSo();
	cPhanSo(int x, int y);
	int UCLN(int x, int y);
	void RutGon();
	friend istream& operator>>(istream &in, cPhanSo &obj);
	friend ostream& operator<<(ostream &out, const cPhanSo &obj);
	int getTuSo() const;
	int getMauSo() const;
	void setTuSo(int b);
	void setMauSo(int b);
	bool checkPositive(const cPhanSo b);
	bool checkNegative(const cPhanSo b);
};
class cDSPhanSo {
private:
	vector <cPhanSo> array;
public:
	void push_back(const cPhanSo &obj);
	cDSPhanSo(); //Constructor k có tham số
	cDSPhanSo(const cPhanSo& obj); //Constructor có tham số
	friend istream& operator>> (istream& in, cDSPhanSo &obj);
	friend ostream& operator<< (ostream& out, const cDSPhanSo &obj);
	cPhanSo Sum(); //Tong cac PS
	cPhanSo Max(); //Tìm phân số lớn nhất 
	cPhanSo Min(); //Tìm phân số nhỏ nhất
	int iTuSoMax(); //Tìm phân số có tử là số nguyên tố lớn nhất
	cDSPhanSo TangDan();
	cDSPhanSo GiamDan();
};
#endif
#pragma once
