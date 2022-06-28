#include <iostream>
#include <string>

using namespace std;

class Hero{
    public:
        string nama;

    public:
        void setNama(string isiNama) {
            this->nama = isiNama;
            cout << "NAMA: " << this->nama << endl;
        }
};

class Senjata: public Hero{
    public:
        string senjata;
        int kekuatan;

    public:
        Senjata(string isiSenjata, int isiKekuatan) {
            this->senjata = isiSenjata;
            this->kekuatan = isiKekuatan;
        }

        void display() {
            cout << "SENJATA: " << this->senjata << endl;
            cout << "KEKUATAN: " << this->kekuatan << endl;
        }

        string getSenjata() {
            return this->senjata + "\n";
        }
};

int main(int argc, char const *argv[])
{
    Senjata player1 = Senjata("Pistol", 40);
    player1.setNama("Rifa'i Sopyan Syauri");
    cout << player1.getSenjata();
    return 0;

}
