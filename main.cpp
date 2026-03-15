#include <iostream>
#include "Point.h"
using namespace std;
int main() {
	Point x;
	x.NhapHoanhDo();
	x.NhapTungDo();
	x.XuatPoint();

	Point y;
	y = x.TinhTien(15, 11);
	y.XuatPoint();

	x.getHoanhDo();
	x.getTungDo();

	y.getHoanhDo();
	y.getTungDo();

	x.setHoanhDo(15);
	x.XuatPoint();
	x.setTungDo(11);
	x.XuatPoint();

	y.setHoanhDo(14);
	y.XuatPoint();
	y.setTungDo(11);
	y.XuatPoint();
	return 0;
}