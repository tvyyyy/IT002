#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {
private:
	string chuXe;
	string loaiXe;
	double triGia;
	int dungTich;

public:
	Vehicle();
	Vehicle(string cx, string lx, double tg, int dt);

	void Nhap();
	void Xuat();

	string getChuXe();
	string getLoaiXe();
	double getTriGia();
	int getDungTich();

	double TinhThue();
};

#endif#pragma once
