#ifndef CTAMGIAC_H
#define CTAMGIAC_H
using namespace std;
class Point {
private:
	double dHoanhDo;
	double dTungDo;
public:
	Point(double x = 0, double y = 1);
	friend istream& operator>>(istream& in, Point& obj);
	friend ostream& operator<<(ostream& out, Point& obj);
	double DoDaiVector(Point b);
	double getHoanhDo();
	double getTungDo();
	void setHoanhDo();
	void setTungDo();
	//Point operator+=(double b);
	//double tangHoanhDo(double b);
	//double tangTungDo(double b);
};
class cTamGiac {
private:
	Point A;
	Point B;
	Point C;
public:
	cTamGiac(Point x, Point y, Point z);
	friend istream& operator>>(istream& in, cTamGiac& obj);
	friend ostream& operator<<(ostream& out, cTamGiac& obj);
	void check();
	double ChuVi();
	double DienTich();
	cTamGiac TinhTien(double b);
	cTamGiac Quay(double goc);
	cTamGiac Scale(double k);
};
#endif