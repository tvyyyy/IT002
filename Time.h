#ifndef TIME_H
#define TIME_H
class Time {
private:
	int iSec;
	int iMin;
	int iHour;
public:
	void NhapGio();
	void NhapPhut();
	void NhapGiay();
	void XuatTime();
	int TangGio();
	int TangPhut();
	int TangGiay();
	int GiamGio();
	int GiamPhut();
	int GiamGiay();
	int getGio();
	int getPhut();
	int getGiay();
	
};
#endif