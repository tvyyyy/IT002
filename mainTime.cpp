#include <iostream>
#include "Time.h"
int main()
{
    Time x;
    x.NhapGio();
    x.NhapPhut();
    x.NhapGiay();

    x.XuatTime();
    x.TangGiay();
    x.TangPhut();
    x.TangGio();

    x.XuatTime();
    x.getGiay();
    x.getGio();
    x.getPhut();
}

