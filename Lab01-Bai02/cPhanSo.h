#ifndef CPHANSO_H
#define CPHANSO_H
class cPhanSo {
private:
    int iTuSo;
    int iMauSo;
public:
    cPhanSo(int iTuSo = 0, int iMauSo = 1); //ham tao co doi so
    void NhapTuSo();
    void NhapMauSo();
    void XuatPhanSo();
    int UocChung(int a, int b);
    void RutGon();
    cPhanSo Add(const cPhanSo b);
    cPhanSo Sub(const cPhanSo b);
    cPhanSo Multi(const cPhanSo b);
    cPhanSo Divide(const cPhanSo b);
};
#endif
