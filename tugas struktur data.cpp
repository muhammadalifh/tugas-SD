#include<iostream>
using namespace std;


struct pembeli
{
	char kode_pbl;
    string status;
    string nama;
};


struct barang
{
	char kode_brg;
	string nam_brg;
	int harga;
};



int main()
{
    //pembeli

     kode1.pbl=P001;
	 kode2.pbl=P002;
	 kode3.pbl=P003;
	 kode4.pbl=P004;
	 kode5.pbl=P005;
	 status1=M;
	 status2=M;
	 status3=BM;
	 status4=BM;
	 status5=M;
	 nama1=Diana;
	 nama2=Rina;
	 nama3=Lina;
	 nama4=Doni;
	 nama5=Dodi;

    //barang

     kode_brg1=BRG001;
     kode_brg2=BRG002;
     kode_brg3=BRG003;
     kode_brg4=BRG004;
     kode_brg5=BRG005;
     nama_brg1=Pensil;
     nama_brg2=buku tulis;
     nama_brg3=penghapus;
     nama_brg4=Penggaris;
     nama_brg5=ballpoint;
     harga1=2000;
     harga2=3500;
     harga3=1000;
     harga4=1500;
     harga5=2500;
}


nama_pembeli orang;
nama_barang beli;
int berapa;

nt pembeli()
{
    system ("cls");
    cout << "\inputkan berapa ?? : ";
    cin >> berapa;
    for (int i=1; i<=5; i++) {
        cout << "Masukkan Kode Pembeli : ";
        cin >> orang.kode1.pbl;
        cin >> orang.kode2.pbl;
        cin >> orang.kode3.pbl;
        cin >> orang.kode4.pbl;
        cin >> orang.kode5.pbl;
        cout << "Masukkan Status Pembeli (M/BM) : ";
        cin >> orang.status[i];
        cout << "Masukkan Nama Pembeli : ";
        cin >> orang.nama[i];
        cout << "\n";
    }
}

int barang()
{
    system ("cls");
    cout << "\Pingin Inputkan Berapa ?? : ";
    cin >> berapa;
    for (int i=1; i<=berapa; i++) {
        cout << "Masukkan Kode Barang : ";
        cin >> beli.kode_brng[i];
        cout << "Masukkan Nama Barang : ";
        cin >> beli.nama_brg[i];
        cout << "Masukkan Harga Barang : ";
        cin >> beli.harga_brg[i];
        cout << "\n";
    }
}

int view()
{
    system ("cls");
    for (int i=1; i<=5; i++) {
        cout << "Kode Pembeli : " << orang.kode_pbl[i] << "\n";
        cout << "Status Pembeli (M/BM) : " << orang.status[i] << "\n";
        cout << "Nama Pembeli : " << orang.nama[i] << "\n";
        cout << "\n";
    }
    cout << "===============\n";
    for (int i=1; i<=berapa; i++) {
        cout << "Kode Barang : " << beli.kode_brng[i] << "\n";
        cout << "Nama Barang : " << beli.nama_brg[i] << "\n";
        cout << "Harga Barang : " << beli.harga_brg[i] << "\n";
        cout << "\n";
    }
}

int main()
{
    int pilih;
    char lagi;
    do {
    system("cls");
    cout << "1. Masukkan Nama Pembeli \n";
    cout << "2. Masukkan Nama Barang \n";
    cout << "3. Tampikan Output Semua \n";
    cout << "Nomor Berapa ? : ";
    cin >> pilih;

    switch(pilih)
    {
        case 1:
            pembeli();
            break;
        case 2:
            barang();
            break;
        case 3:
            view();
            break;
        default:
            cout << "Nomor Salah \n";
    }
    cout << "\nLagi ?? (y/n) : ";
    cin >> lagi;
    } while(lagi == 'y');
    return 0;
}






