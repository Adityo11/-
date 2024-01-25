#ifndef AKUN_MODEL_H
#define AKUN_MODEL_H

#include "Akun.h"
#include <iostream>

using namespace std;

void daftarAkun(Akun &akun) {
    cout << "Masukkan nama: ";
    cin >> akun.nama;

    cout << "Masukkan nomor telepon: ";
    cin >> akun.notelp;

    cout << "Masukkan username: ";
    cin >> akun.username;

    cout << "Masukkan password: ";
    cin >> akun.password;
}

#endif