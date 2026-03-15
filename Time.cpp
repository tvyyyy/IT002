#include <iostream>
#include "Time.h"
using namespace std;
void Time::NhapGio() {
	do {
		cout << "Nhap gio: ";
		cin >> iHour;
	} while (iHour < 0 || iHour > 23);
}
void Time::NhapPhut() {
	do {
		cout << "Nhap phut: ";
		cin >> iMin;
	} while (iMin < 0 || iMin > 60);
	if (iMin == 60) {
		iMin = 0;
		iHour++;
		if (iHour == 23) {
			iMin = 0;
			iHour = 0;
		}
	}
}
void Time::NhapGiay() {
	do {
		cout << "Nhap giay: ";
		cin >> iSec;
	} while (iSec < 0 || iSec > 60);
	if (iSec == 60) {
			iSec = 0;
			iMin++;	
			if (iMin == 60) {
				iMin = 0;
				iHour++;
			}
			if (iHour == 24) iHour = 0;
	}
}
void Time::XuatTime() {
	cout << iHour << ":" << iMin << ":" << iSec << endl;
}
int Time::TangGio() {
	int b;
	cout << "Nhap so gio muon tang: ";
	cin >> b;
	this->iHour = (this->iHour + b) % 24;
	return this->iHour;
}
int Time::TangPhut() {
	int b;
	cout << "Nhap so phut muon tang: ";
	cin >> b;
	this->iMin += b;
	this->iHour += this->iMin / 60;
	this->iMin %= 60;
	this->iHour %= 24;
	return this->iMin;
}
int Time::TangGiay() {
	int b;
	cout << "Nhap so giay muon tang: ";
	cin >> b;
	this->iSec += b;
	this->iMin += this->iSec / 60;
	
	this->iSec %= 60;
	this->iHour += this->iMin / 60;
	this->iMin %= 60;
	this->iHour %= 24;
	return this->iSec;
}
int Time::GiamGio() {
	int b;
	cout << "Nhap so gio muon giam: ";
	cin >> b;
	this->iHour -= b;
	return this->iHour;
}
int Time::GiamPhut() {
	int b;
	cout << "Nhap so phut muon giam: ";
	cin >> b;
	this->iMin -= b;
	return this->iMin;
}
int Time::GiamGiay() {
	int b;
	cout << "Nhap so giay muon giam: ";
	cin >> b;
	this->iSec -= b;
	return this->iSec;
}
int Time::getGio() {
	return this->iHour;
}
int Time::getPhut() {
	return this->iMin;
}
int Time::getGiay() {
	return this->iSec;
}