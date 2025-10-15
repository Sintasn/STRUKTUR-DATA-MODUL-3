#include <iostream>
using namespace std;

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

int main() {
    string nama[10], nim[10];
    float uts[10], uas[10], tugas[10], akhir[10];
    int n;

    cout << "Jumlah mahasiswa: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Nama   : ";
        cin >> nama[i];
        cout << "NIM    : ";
        cin >> nim[i];
        cout << "UTS    : ";
        cin >> uts[i];
        cout << "UAS    : ";
        cin >> uas[i];
        cout << "Tugas  : ";
        cin >> tugas[i];

        akhir[i] = hitungNilaiAkhir(uts[i], uas[i], tugas[i]);
    }

    cout << "\n==============================\n";
    cout << "Data Nilai Akhir Mahasiswa\n";
    cout << "==============================\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << nama[i] << " (" << nim[i] << ") = " << akhir[i] << endl;
    }

    return 0;
}
