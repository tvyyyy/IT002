#include <iostream>
#include "cDSPhanSo.h"
using namespace std;
int main() {
	cDSPhanSo a;
	cin >> a;
	cDSPhanSo b = a.TangDan();
	cout << b;
	return 0;
}
