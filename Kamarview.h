#ifndef KAMAR_VIEW_H
#define KAMAR_VIEW_H

#include "Kamar.h"
#include <iostream>

using namespace std;

void pembayaran(const Kamar &kamar) {
    cout << "Pembayaran:\n";
    cout << "Harga Kamar: " << kamar.harga << "\n";
    cout << "Tenggat Waktu: " << kamar.tenggatWaktu << " hari\n";
}

#endif