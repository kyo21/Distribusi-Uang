#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

//----kode di atas batas ini tidak boleh diganti atau ditambah----

const int karyawanMaks = 100;

void tampil_jml_karyawan(long long distribusiSekarang[],int index){

cout << "Output:"<<index<<" orang\n";
for (int i=0; i<index; ++i){
    cout << "Karyawan"<<i+1<<":Rp."<<distribusiSekarang[i]<<endl;
}
exit(0)
}

int main(){
    long long total;
    int jumlah_karyawan;

    cout << "Input laba bersih(total): Rp.";
    cin >> total;

    cout << "Input jumlah karyawan : ";
    cin >> jumlah_karyawan;

    long long distribusiSekarang[karyawanMaks];
    set<string>
    dikunjungi;
    map<string,bool>
    temp;

    proses_distribusi(total,jumlah_karyawan,distribusiSekarang,0,dikunjungi,temp);

    cout << "Tidak diketahui"<<endl;

return 0;
}
