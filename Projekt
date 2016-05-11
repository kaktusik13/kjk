#include <iostream>
#include <vector>

using namespace std;

class System
{
    public: string wl_alarmu();
    public: string wyl_alarmu();

    protected: char  zmiana_hasla();

    public: char odczyt_dziennika_aktywnosci();
}

class Right
{
    string wl_alarmu();
    string wyl_alarmu();
    public: char powiadomienia();
}

class Uzytkownik: public System
{
    private: string addRight();
    char nazwa_uzytkownika;
    vector <Right> rights;

}

class add_new_users : public Right
{
     private: string dodaj_uzytkownika();
     private: string usun_uzytkownika();
}

class dziennik_aktywnosci : public Right
{
    public: char odczyt_czujnikow();
    public: char odczyt_kamer();
    public: char odcyt_ostatnich_logowan_do_systemu();
}


class Urzadzenia_peryferyjne : public System
{
    //public: char odczyt_informacji();
    public: int data();
    public: int godzina();
    public: string stan();
}

class Kamery: public Urzadzenia_peryferyjne
{

}

class Kamera_zewn: public Kamery
{

}

class Kamera_wewn: public Kamery
{

}

class Czujniki: public Urzadzenia_peryferyjne
{

}

class Czujnik_dymu: public Czujniki {}

class Czujnik_gazu: public Czujniki{}

class Czujnik_temp: public Czujniki{}
class Temp_zewn: public Czujnik_temp {}
class Temp_wewn: public Czujnik_temp {}

class Czujnik_ruchu: public Czujniki{}
class Ruch_wewn: public Czujnik_ruchu {}
class Ruch_zewn: public Czujnik_ruchu{}

class Panel: public Urzadzenia_peryferyjne
{
   string wl_alarmu();
   string wyl_alarmu();

   char  zmiana_hasla();

   char odczyt_dziennika_aktywnosci();


};
/*int main()
{

}*/
