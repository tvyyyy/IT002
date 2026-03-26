#ifndef STRING_H
#define STRING_H

class String {
private:
    char* str;

public:
    String();
    ~String();

    void Nhap();
    void Xuat();

    int ChieuDai();
    void NoiChuoi(String s);
    void DaoChuoi();

    void ChuoiHoa();
    void ChuoiThuong();
};

#endif
