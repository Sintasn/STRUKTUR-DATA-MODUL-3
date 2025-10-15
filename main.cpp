#include <iostream>
#include "pelajaran.h"
#include "pelajaran.cpp"
using namespace std;

int main() {
    string namaPelajaran = "Struktur Data";
    string kodePelajaran = "STD";

    pelajaran pel = buat_pelajaran(namaPelajaran, kodePelajaran);

    tampil_pelajaran(pel);

    return 0;
}
