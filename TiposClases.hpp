#include <iostream>
using namespace std;
using namespace std;
class Clase{
    protected:
         double vida;
         double stamina;
         double ataque;
         double magia;
         double defenza;
         double agilidad;
    public:
        Clase(double hp, double sta, double atk, double mag, double def, double agil): vida(hp), stamina(sta), ataque(atk), magia(mag), defenza(def), agilidad(agil){}; 
        void viewStats(){
            cout<<"Vida ->      "<<getVida()<<" HP"<<endl;
            cout<<"Stamina ->   "<<getStamina()<<" Sta"<<endl;
            cout<<"Ataque ->    "<<getAtaque()<<" ATK"<<endl;
            cout<<"Magia ->     "<<getMagia()<<" MG"<<endl;
            cout<<"Defenza ->   "<<getDefenza()<<" DEF"<<endl;
            cout<<"Agilidad ->  "<<getAguilidad()<<" AGIL"<<endl;
        }
        //gettesr and setters
        double getVida(){
            return vida;
        }
        double getStamina(){
            return stamina;
        }
        double getAtaque(){
            return ataque;
        }
        double getMagia(){
            return magia;
        }
        double getDefenza(){
            return defenza;
        }
        double getAguilidad(){
            return agilidad;
        }
        void setVida(double hp){
            vida = hp;
        }
        void setStamina(double sta){
            stamina = sta;
        }
        void setAtaque(double atk){
            ataque = atk;
        }
        void setMagia(double mag){
            magia = mag;
        }
        void setDefenza(double def){
            defenza = def;
        }
        void setAgilidad(double agil){
            agilidad = agil;
        }
};

class Guerrero : public Clase{
    public:
    	Guerrero(double hp, double sta, double atk, double mag, double def, double agil) : Clase(hp, sta, atk, mag, def, agil){};
};
class Magico : public Clase{
    public:
		Magico(double hp, double sta, double atk, double mag, double def, double agil) : Clase(hp, sta, atk, mag, def, agil){};
};
class Sigilo : public Clase{
    public:
    	Sigilo(double hp, double sta, double atk, double mag, double def, double agil) : Clase(hp, sta, atk, mag, def, agil){};
};
