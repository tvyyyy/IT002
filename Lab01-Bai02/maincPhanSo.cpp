#include <iostream>
#include "cPhanSo.h"

using namespace std;

int main() {

    cPhanSo a;
    a.NhapTuSo();
    a.NhapMauSo();

    cPhanSo b;
    b.NhapTuSo();
    b.NhapMauSo();

    cPhanSo c;

    cout << "Cong: ";
    c = a.Add(b);
    c.XuatPhanSo();

    cout << "Tru: ";
    c = a.Sub(b);
    c.XuatPhanSo();

    cout << "Nhan: ";
    c = a.Multi(b);
    c.XuatPhanSo();

    cout << "Chia: ";
    c = a.Divide(b);
    c.XuatPhanSo();

    return 0;
}
