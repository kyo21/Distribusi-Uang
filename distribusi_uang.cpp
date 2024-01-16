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

return 0;
}
