#include <iostream>
#include "Vehicle.h"
using namespace std;

int main() {

	Vehicle xe1("Nguyen Van A", "Wave", 20000000, 110);
	Vehicle xe2("Tran Van B", "SH", 80000000, 150);
	Vehicle xe3;

	cout << "Nhap thong tin xe 3:" << endl;
	xe3.Nhap();

	cout << endl;
	cout << "Chu xe\tLoai xe\tTri gia\tDung tich\tThue" << endl;

	xe1.Xuat();
	xe2.Xuat();
	xe3.Xuat();

	return 0;
}