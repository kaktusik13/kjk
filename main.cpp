#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <list>

using namespace std;

class Zwierze
{
protected:
   int8_t masa;
public:
    virtual void daj_glos() = 0; 



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
        cout << "Beeeeee!\n";
    }
    int8_t masa()
    {
        cout << "100kg\n";
    }
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


class Obserwator
{
    public:
    virtual void update() =0;
};



class Obserwowany {
protected:
    std::list <Obserwator*> obserwatorzy;
public:
    void dodaj(Obserwator *Zwierze) {
        obserwatorzy.push_back (Zwierze);
    }
    void usun(Obserwator *Zwierze) {
        obserwatorzy.remove (Zwierze);
    }

    void powiadom () {
        std::list<Obserwator *>::iterator it;
        for (it = obserwatorzy.begin(); it != obserwatorzy.end(); it++) {
            (*it)->update ();
        }
    }
};



class ObserwowanyKon : public Obserwowany, public Kon {
    std::string stan;
public:
    ObserwowanyKon ( void daj_glos()) : Kon(daj_glos) {
    }

    std::string pobierzStan () {
        return stan;
    }

    void ustawStan (const std::string& s) {
        stan = s;
        std::cout << "Stan: " << stan << std::endl;
        powiadom();
    }
};


int main()
{
    //srand (time(NULL));
    //Zwierze *v.at(rand()%v.size()) -> zabij();




    Zoo zoo;
    zoo.glosy();




    return 0;
