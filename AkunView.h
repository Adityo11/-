#ifndef AKUN_VIEW_H
#define AKUN_VIEW_H

#include "Akun.h"
#include <iostream>

using namespace std;

void tampilInfoAkun(const Akun &akun) {
    cout << "Info Akun:\n";
    cout << "Nama: " << akun.nama << "\n";
    cout << "Nomor Telepon: " << akun.notelp << "\n";
    cout << "Username: " << akun.username << "\n";
}

#endif