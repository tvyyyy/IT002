#include <iostream>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle() {
	chuXe = "";
	loaiXe = "";
	triGia = 0;
	dungTich = 0;
}

Vehicle::Vehicle(string cx, string lx, double tg, int dt) {
	chuXe = cx;
	loaiXe = lx;

	if (tg >= 0)
		triGia = tg;
	else
		triGia = 0;

	if (dt >= 0)
		dungTich = dt;
	else
		dungTich = 0;
}

void Vehicle::Nhap() {
	cout << "Nhap chu xe: ";
	getline(cin, chuXe);

	cout << "Nhap loai xe: ";
	getline(cin, loaiXe);

	do {
		cout << "Nhap tri gia xe: ";
		cin >> triGia;
	} while (triGia < 0);

	do {
		cout << "Nhap dung tich xy lanh: ";
		cin >> dungTich;
	} while (dungTich < 0);

	cin.ignore();
}

void Vehicle::Xuat() {
	cout << chuXe << "\t"
		<< loaiXe << "\t"
		<< triGia << "\t"
		<< dungTich << "\t"
		<< TinhThue() << endl;
}

string Vehicle::getChuXe() {
	return chuXe;
}

string Vehicle::getLoaiXe() {
	return loaiXe;
}

double Vehicle::getTriGia() {
	return triGia;
}

int Vehicle::getDungTich() {
	return dungTich;
}

double Vehicle::TinhThue() {
	if (dungTich < 100)
		return triGia * 0.01;

	if (dungTich <= 200)
		return triGia * 0.03;

	return triGia * 0.05;
}