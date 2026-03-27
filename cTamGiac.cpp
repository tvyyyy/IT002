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
//Point Point::operator+=(double b) {
//	return Point(b, b);
//}
//double Point::tangHoanhDo(double b) {
//	Point H;
//	H.x = this->x + b;
//	return H.x;
//}
//double Point::tangTungDo(double b) {
//	Point T;
//	T.y = this->y + b;
//	return T.y;
//}

cTamGiac::cTamGiac(Point x, Point y, Point z) {
	this->A = x;
	this->B = y;
	this->C = z;
}

void cTamGiac::check() {
	double m = this->A.DoDaiVector(B);
	double n = this->A.DoDaiVector(C);
	double p = this->B.DoDaiVector(C);
	if ((m * m + n * n >= p * p) && (n * n + p * p >= m * m) && (m * m + p * p >= n * n)) {
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
	double xA = A.getHoanhDo();
	double yA = A.getTungDo();

	double xB = B.getHoanhDo();
	double yB = B.getTungDo();

	double xC = C.getHoanhDo();
	double yC = C.getTungDo();

	double cosAlpha = cos(goc);
	double sinAlpha = sin(goc);
	xA = xA * cosAlpha - yA * sinAlpha;
	yA = xA * sinAlpha + yA * cosAlpha;
	
	xB = xB * cosAlpha - yB * sinAlpha;
	yB = xB * sinAlpha + yB * cosAlpha;

	xC = xC * cosAlpha - yC * sinAlpha;
	yC = xC * sinAlpha + yC * cosAlpha;
	Point newA(xA, yA);
	Point newB(xB, yB);
	Point newC(xC, yC);
	return cTamGiac(newA, newB, newC);
}
cTamGiac cTamGiac::Scale(double k) {
	cTamGiac result = *this;
	double xA = A.getHoanhDo();
	double yA = A.getTungDo();

	double xB = B.getHoanhDo();
	double yB = B.getTungDo();

	double xC = C.getHoanhDo();
	double yC = C.getTungDo();

	double xG = (xA + xB + xC) / 3;
	double yG = (yA + yB + yC) / 3;
	Point G(xG, yG);
	xA = k * xA + (1 - k) * xG;
	yA = k * yA + (1 - k) * yG;
	Point newA(xA, yA);
	xB = k * xB + (1 - k) * xG;
	yB = k * yB + (1 - k) * yG;
	Point newB(xB, yB);
	xC = k* xC + (1 - k) * xG;
	yC = k * yC + (1 - k) * yG;
	Point newC(xC, yC);
	return cTamGiac(newA, newB, newC);
}