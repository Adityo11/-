#ifndef VILLA_MODEL_H
#define VILLA_MODEL_H

#include "Villa.h"
#include "AkunModel.h"
#include <iostream>

using namespace std;

void ubahMember(Akun &akun) {
    cout << "Ubah Member:\n";
    cout << "Masukkan nama baru: ";
    cin >> akun.nama;

    cout << "Masukkan nomor telepon baru: ";
    cin >> akun.notelp;

    cout << "Masukkan username baru: ";
    cin >> akun.username;

    cout << "Masukkan password baru: ";
    cin >> akun.password;

    cout << "Member berhasil diubah!\n";
}

#endif