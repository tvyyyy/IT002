#include <iostream>
#include "cTamGiac.h"
using namespace std;
int main() {
	Point x1(1);
	Point x2(2);
	Point x3(3);
	cTamGiac A(x1, x2, x3) ;
	A.check();
	x1.getHoanhDo();
	x2.getHoanhDo();
	x3.getHoanhDo();
	x1.getTungDo();
	x2.getTungDo();
	x3.getTungDo();
	A.ChuVi();
	cout << A;
	A.DienTich();
	cout << A;
	A.TinhTien(15);
	A.Quay(11);
	A.Scale(2006);
	return 0;
}