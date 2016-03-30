#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <list>
#include <cstdint>

using namespace std;

class Zwierze
{
protected:
   int8_t masa;
public:
    virtual void daj_glos() = 0;
    char imie;

    vector <Zwierze*> Obserwatorzy;

    void zarejestruj_obserwatora(Zwierze*z)

    {
        cin >> imie;
        cout << imie << "rejestruje obserwatora " << z -> imie << endl;
    };

    void wyrejestruj_obserwatora(Zwierze* z)
     {
        cin >> imie;
        cout << "wyrejestruj obserwatora" << imie <<  z -> imie << endl;

         for (uint 32_t; i =0; i< a.size(); **i);
            a [i] -> wyrejestruj_obserwatora (z);
    };

    void powiadom_obserwatora()
    {
        vector <Zwierze*> :: iteration_it;
        for (it = Obserwatorzy.begin(); it= Obserwatorzy.endl(); ++i);
        {
            daj_glos();
        };
    }




};


class Krowa : public Zwierze
{
public:
    void daj_glos()
    {
        cout << "Muu!\n";
    }

};

class Koza : public Zwierze
{
public:
    void daj_glos()
    {
        cout << "Beeeeee!,100kg\n"<< endl;
    }
    /*int8_t masa()
    {
        cout << "100kg\n";
    }*/
};


class Kon :public Zwierze

{
public:
    void daj_glos()
    {
        cout <<"Ihaa!\n";
    }


};


class Zoo
{
protected:
    vector <Zwierze*> v;

public:
    Zoo(){
    srand(time(NULL));
    v.push_back(new Krowa());
    v.push_back(new Koza());
    v.push_back(new Kon());

}
void glosy() {
    for (int i=0; i<v.size(); ++i)
        v.at(i) -> daj_glos();
}
};




int main()
{
    //srand (time(NULL));
    //Zwierze *v.at(rand()%v.size()) -> zabij();




    Zoo zoo;
    zoo.glosy();



    return 0;
}
