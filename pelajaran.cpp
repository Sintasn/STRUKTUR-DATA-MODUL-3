#include <iostream>
#include "pelajaran.h"
using namespace std;

pelajaran buat_pelajaran(string namaPelajaran, string kodePelajaran) {
    pelajaran p;
    p.namaMapel = namaPelajaran;
    p.kodeMapel = kodePelajaran;
    return p;
}

void tampil_pelajaran(pelajaran pel) {
    cout << "nama pelajaran : " << pel.namaMapel << endl;
    cout << "nilai : " << pel.kodeMapel << endl;
}
