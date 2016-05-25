#include <iostream>
#include <cstdio>
#include <iostream>
#include <vector>
#include <list>

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

    char powiadomienia()
    {
        int data[10];
        int godzina[10];
        string tresc[100];
    }

    public:
    void wyslij_powiadomienie(Uzytkownik*)
    {
        vector <Uzytkownik*> itertion:: it;
        for (it = Uzytkownik.begin(); it= Obserwator.endl(); ++i);
        {
            powiadomienia();
        };
        cout<< "data"<< data<< "godzina"<< godzina<< tresc<< endl;
    };
}

class Uzytkownik: public System
{
   public: string addRight();
    char nazwa_uzytkownika;
    vector <Right> rights;

}

class add_delete_new_users : public Right
{
     char nazwa_uzytkownika;
     vector <Uzytkownik*> Obserwator;


     private:
     if (nazwa_uzytkownika = "ADMIN")
     {
         void dodaj_uzytkownika();
         void usun_uzytkownika ();
     };

     void dodaj_uzytkownika(Uzytkownik* n)
    {
        cin >> nazwa_uzytkownika;
        cout << nazwa_uzytkownika << "dodaj uzytkownika " << n -> nazwa_uzytkownika << endl;
    };


     void usun_uzytkownika(Uzytkownik* n)
     {
        cin >> nazwa_uzytkownika;
        cout << "usun uzytkownika" << nazwa_uzytkownika <<  n -> nazwa_uzytkownika << endl;

        // for (uint32_t i =0; i< a.size(); **i);
           // a [i] -> usun_uzytkownika (n);
     };



}

class dziennik_aktywnosci : public Right
{
    public:
    char odczyt_czujnikow();
    char odczyt_kamer();
    char odczyt_ostatnich_logowan_do_systemu();
    void ostatnie_logowanie ()
    {
        int data[10];
        int godzina[10];
        char nazwa_uzytkownika;
        cout << data << godzina << nazwa_uzytkownika << endl;
    }


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
   /*int data[10];
    int godzina[10];
    string stan;*/
{
    //cin.get (data, godzina, stan)
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
