#include <iostream>
#include "Point.h"
using namespace std;
void Point::NhapHoanhDo() {
	cout << "Nhap hoanh do diem: " << endl;
	cin >> iHoanhDo;
}
void Point::NhapTungDo() {
	cout << "Nhap tung do diem: " << endl;
	cin >> iTungDo;
}
void Point::XuatPoint() {
	cout << "(" << iHoanhDo << ", " << iTungDo << ")" << endl;
}
Point Point::TinhTien(int x, int y) {
	Point b;
	b.iHoanhDo = this->iHoanhDo + x;
	b.iTungDo = this->iTungDo + y;
	return b;
}
int Point::getHoanhDo() {
	return iHoanhDo;
}
int Point::getTungDo() {
	return iTungDo;
}
void Point::setHoanhDo(const int iHoanhDo_new) {
	this->iHoanhDo = iHoanhDo_new;
}
void Point::setTungDo(const int iTungDo_new) {
	this->iTungDo = iTungDo_new;
}
