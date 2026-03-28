#include <iostream>
#include "cTamGiac.h"
#include <cmath>
#include <algorithm>
using namespace std;
Point::Point(double x, double y) {
	this->dHoanhDo = x;
	this->dTungDo = y;
}
istream& operator>>(istream &in, Point &obj) {
	cout << "Nhap hoanh do diem: " << endl;
	in >> obj.dHoanhDo;
	cout << "Nhap tung do diem: " << endl;
	in >> obj.dTungDo;
	return in;
}

ostream& operator<<(ostream &out, Point &obj) {
	out << "(" << obj.dHoanhDo << ", " << obj.dTungDo << ")" << endl;
	return out;
}

istream& operator>>(istream& in, cTamGiac& obj) {
	cout << "Nhap toa do dinh thu 1: " << endl;
	in >> obj.A;
	cout << "Nhap toa do dinh thu 2: " << endl;
	in >> obj.B;
	cout << "Nhap toa do dinh thu 3: " << endl;
	in >> obj.C;
	return in;
}

ostream& operator<<(ostream &out, cTamGiac &obj) {
	out << obj.A << "; " << obj.B << "; " << obj.C << endl;
	return out;
}

double Point::DoDaiVector(Point b) {
	double result;
	result = sqrt(pow(b.dHoanhDo - this->dHoanhDo, 2) + pow(b.dTungDo - this->dTungDo, 2));
	return result;
}

double Point::getHoanhDo() {
	return this->dHoanhDo;
}

double Point::getTungDo() {
	return this->dTungDo;
}

void Point::setHoanhDo() {
	cout << "Nhap hoanh do moi: ";
	int k;
	cin >> k;
	dHoanhDo = k;
}

void Point::setTungDo() {
	cout << "Nhap tung do moi: ";
	int q;
	cin >> q;
	dTungDo = q;
}
cTamGiac::cTamGiac(Point x, Point y, Point z) {
	this->A = x;
	this->B = y;
	this->C = z;
}

void cTamGiac::check() {
	double m = this->A.DoDaiVector(B);
	double n = this->A.DoDaiVector(C);
	double p = this->B.DoDaiVector(C);
	if ((m + n >= p) && (n + p >= m) && (m + p >= n)) {
		if ((m * m + n * n == p * p) || (n * n + p * p == m * m) || (m * m + p * p == n * n)) {
			if (m == n || n == p || m == p) {
				cout << "Tam giac vuong can";
			}
			else cout << "Tam giac vuong";
		}
		else if (m == n == p) cout << "Tam giac deu";
		else if (m == n || n == p || m == p) cout << "Tam giac can";
		else cout << "Tam giac thuong";
	}
	else cout << "Khong phai tam giac!!!";
	cout << endl;
}
double cTamGiac::ChuVi() {
	return this->A.DoDaiVector(B) + this->A.DoDaiVector(C) + this->B.DoDaiVector(C);
}
double cTamGiac::DienTich() {
	double k = this->ChuVi() / 2;
	double m = this->A.DoDaiVector(B);
	double n = this->A.DoDaiVector(C);
	double p = this->B.DoDaiVector(C);
	return sqrt(k * (k - m) * (k - n) * (k - p));
}

cTamGiac cTamGiac::TinhTien(double b) {
	double xA = A.getHoanhDo() + b;
	double yA = A.getTungDo() + b;
	double xB = B.getHoanhDo() + b;
	double yB = B.getTungDo() + b;
	double xC = C.getHoanhDo() + b;
	double yC = C.getTungDo() + b;
	Point newA(xA, yA);
	Point newB(xB, yB);
	Point newC(xC, yC);
	return cTamGiac(newA, newB, newC);
}

cTamGiac cTamGiac::Quay(double goc) {
	double cosAlpha = cos(goc);
	double sinAlpha = sin(goc);
	double xA = A.getHoanhDo() * cosAlpha - A.getTungDo() * sinAlpha;
	double yA = A.getHoanhDo() * sinAlpha + A.getTungDo() * cosAlpha;
	
	double xB = B.getHoanhDo() * cosAlpha - B.getTungDo() * sinAlpha;
	double yB = B.getHoanhDo() * sinAlpha + B.getTungDo() * cosAlpha;

	double xC = C.getHoanhDo() * cosAlpha - C.getTungDo() * sinAlpha;
	double yC = C.getHoanhDo() * sinAlpha + C.getTungDo() * cosAlpha;
	Point newA(xA, yA);
	Point newB(xB, yB);
	Point newC(xC, yC);
	return cTamGiac(newA, newB, newC);
}
cTamGiac cTamGiac::Scale(double k) {
	cTamGiac result = *this;
	double xG = (xA + xB + xC) / 3;
	double yG = (yA + yB + yC) / 3;
	Point G(xG, yG);
	double xA = k * A.getHoanhDo() + (1 - k) * xG;
	double yA = k * A.getTungDo() + (1 - k) * yG;
	Point newA(xA, yA);
	double xB = k * B.getHoanhDo() + (1 - k) * xG;
	double yB = k * B.getTungDo() + (1 - k) * yG;
	Point newB(xB, yB);
	double xC = k * C.getHoanhDo() + (1 - k) * xG;
	double yC = k * C.getTungDo() + (1 - k) * yG;
	Point newC(xC, yC);
	return cTamGiac(newA, newB, newC);
}
