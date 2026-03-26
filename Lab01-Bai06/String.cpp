#include <iostream>
#include <cstring>
#include <cctype>
#include "String.h"
using namespace std;

String::String() {
    str = new char[1];
    str[0] = '\0';
}

String::~String() {
    delete[] str;
}

void String::Nhap() {
    char temp[1000];

    cout << "Nhap chuoi: ";
    cin.getline(temp, 1000);

    delete[] str;

    str = new char[strlen(temp) + 1];
    strcpy(str, temp);
}

void String::Xuat() {
    cout << str << endl;
}

int String::ChieuDai() {
    return strlen(str);
}

void String::NoiChuoi(String s) {
    int len1 = strlen(str);
    int len2 = strlen(s.str);

    char* temp = new char[len1 + len2 + 1];

    strcpy(temp, str);
    strcat(temp, s.str);

    delete[] str;
    str = temp;
}

void String::DaoChuoi() {
    int n = strlen(str);

    for (int i = 0; i < n / 2; i++) {
        char t = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = t;
    }
}

void String::ChuoiHoa() {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

void String::ChuoiThuong() {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}
