#ifndef POINT_H
#define POINT_H
class Point {
private:
	int iHoanhDo;
	int iTungDo;
public:
	void NhapHoanhDo();
	void NhapTungDo();
	void XuatPoint();
	Point TinhTien(int x, int y);
	int getHoanhDo();
	int getTungDo();
	void setHoanhDo(const int iHoanhDo_new);
	void setTungDo(const int iTungDo_new);
};
#endif