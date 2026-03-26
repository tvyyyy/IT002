#include <iostream>
#include "cPhanSo.h"
using namespace std;

cPhanSo::cPhanSo(const int iTuSo, const int iMauSo) { //ham co doi so
    this->iTuSo = iTuSo;
    this->iMauSo = iMauSo;
}
void cPhanSo::NhapTuSo() {
    cout << "Nhap tu so: ";
    cin >> this -> iTuSo;
}
void cPhanSo::NhapMauSo() {
    cout << "Nhap mau so: ";
    cin >> this -> iMauSo;
    do {
        cin >> this->iMauSo;
    } while (this->iMauSo == 0);
}
int cPhanSo::UocChung(int x, int y) {
    x = abs(x);
    y = abs(y);
    while (x*y) {
        if (x>y) x %= y;
        else y %= x;
        }
    return x + y;
}
void cPhanSo::RutGon() {
    int c;
    c = UocChung(this -> iTuSo, this -> iMauSo);
    this -> iTuSo /= c;
    this -> iMauSo /= c;
}
void cPhanSo::XuatPhanSo() {
    cout << iTuSo << "/" << iMauSo << endl;
}
cPhanSo cPhanSo::Add(const cPhanSo b) {
    cPhanSo c;
    c.iTuSo = this -> iTuSo * b.iMauSo + this -> iMauSo * b.iTuSo;
    c.iMauSo = this -> iMauSo * b.iMauSo;
    c.RutGon();
    return c;
}
cPhanSo cPhanSo::Sub(const cPhanSo b) {
    cPhanSo c;
    c.iTuSo = this -> iTuSo * b.iMauSo - this -> iMauSo * b.iTuSo;
    c.iMauSo = this -> iMauSo * b.iMauSo;
    c.RutGon();
    return c;
}
cPhanSo cPhanSo::Multi(const cPhanSo b) {
    cPhanSo c;
    c.iTuSo = this -> iTuSo * b.iTuSo;
    c.iMauSo = this -> iMauSo * b.iMauSo;
    c.RutGon();
    return c;
}
cPhanSo cPhanSo::Divide(const cPhanSo b) {
    cPhanSo c;
    c.iTuSo = this -> iTuSo * b.iMauSo;
    c.iMauSo = this -> iMauSo * b.iTuSo;
    c.RutGon();
    return c;
}
