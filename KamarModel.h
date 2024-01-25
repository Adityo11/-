#ifndef KAMAR_MODEL_H
#define KAMAR_MODEL_H

#include "Kamar.h"
#include "Villa.h"
#include <iostream>

using namespace std;

void infoVilla(const Villa &villa) {
    cout << "Info Villa:\n";
    cout << "Nama Villa: " << villa.nama << "\n";
    cout << "Tipe Kamar: " << villa.tipeKamar << "\n";
}

#endif