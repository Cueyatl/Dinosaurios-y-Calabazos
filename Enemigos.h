#include "Personaje.h"
class Enemigo : public Clase{
    public:
        Enemigo(double hp, double sta, double atk, double mag, double def, double agil) : Clase(hp, sta, atk, mag, def, agil){};
};

class Salvaje : public Enemigo(){
    public:
        Salvaje(double hp, double sta, double atk, double mag, double def, double agil) : Enemigo(hp, sta, atk, mag, def, agil){};
}
class NoMuerto : public Enemigo(){
    public:
        NoMuerto(double hp, double sta, double atk, double mag, double def, double agil) : Enemigo(hp, sta, atk, mag, def, agil){};
}
class Elemental : public Enemigo(){
    public:
        Elemental(double hp, double sta, double atk, double mag, double def, double agil) : Enemigo(hp, sta, atk, mag, def, agil){};
}

class Jabali : public Salvaje(){
    public:
        Jabali() : Salvaje(75,75,5,0,3,3){};
        double patada(){
            double dano = (getFuerza()*1.1);
            return dano;
        }
        double embestida(){
            double dano = (getFuerza()*1.25) + (getDefenza()*0.5);
            return dano;
        }
}
class Lobo : public Salvaje(){
    public:
        Lobo() : Salvaje(125,85,7,0,5,6){};
        double embestida(){
            double dano = (getFuerza()*1.25) + (getDefenza()*0.5);
            return dano;
        }
        double mordida(){
            double dano = (getFuerza()*1.4);
            return dano;
        }
        double golpeAlfa(){
            double dano = (getFuerza()*1.8);
            return dano;
        }
}
class Oso : public Salvaje(){
    public:
        Oso() : Salvaje(200,100,20,0,15,7){};
        double embestida(){
            double dano = (getFuerza()*1.25) + (getDefenza()*0.5);
            return dano;
        }
        double ataqueGarra(){
            double dano = (getFuerza()*1.45);
            return dano;
        }
        double mordida(){
            double dano = (getFuerza()*1.6);
            return dano;
        }
        double abrazoDeOso(){
            double dano = (getFuerza()*1.9);
            return dano;
        }
}
class Dinosaurio : public Salvaje(){
    public:
        Dinosaurio() : Salvaje(300,150,35,0,20,25){};
        double golpeCola(){
            double dano = (getFuerza()*1.25) + (getDefenza()*0.5);
            return dano;
        }
        double ataqueGarra(){
            double dano = (getFuerza()*1.45);
            return dano;
        }
        double mordida(){
            double dano = (getFuerza()*1.6);
            return dano;
        }
        double mordidaFuerte(){
            double dano = (getFuerza()*2);
            return dano;
        }
}

class Esqueleto : public NoMuerto(){
    public:
        Esqueleto() : NoMuerto(100,75,7,0,3,4){};
        double golpeEspada(){
            double dano = (getFuerza*1.2);
            return dano;
        }
}
class Zombie : public NoMuerto(){
    public:
        Zombie() : NoMuerto(125,100,9,0,4,5){};
        double agarre(){
            double dano = (getFuerza()*1.2);
            return dano;
        }
        double mordida(){
            double dano = (getFuerza()*1.4);
            return dano; 
        }
}
class Fantasma : public NoMuerto(){
    public:
        Fantasma() : NoMuerto(125,100,0,12,8,8){};
        double tormento(){
            double dano = (getMagia()*1.3);
            return dano;
        }
        double poltergeis(){
            double dano = (getMagia()*1.5);
            return dano;
        }
        double pocesionDemoniaca(){
            double dano = (getMagia()*2);
            return dano;
        }
}

class Hada : public Elemental(){
    public:
        Hada() : Elemental(80,100,0,8,5,4){};
        double bolaLuminosa(){
            double dano = (getMagia()*1.3);
            return dano;
        }
        double polvosMagicos(){
            double dano = (getMagia()*1.6);
            return dano;
        }
}
class Golem : public Elemental(){
    public:
        Hada() : Elemental(200,120,15,12,20,7){};
        double golpeFuerte(){
            double dano = (getFuerza()*1.3) + (getMagia()*0.7) + (getDefenza()*0.5);
            return dano;
        }
        double saltoRocoso(){
            double dano = (getFuerza()*1.5) + (getMagia()*0.8) + (getDefenza()*0.2);
            return dano;
        }
        double tormentaRocosa(){
            double dano = (getFuerza()*1.7) + (getMagia()*1.2) + (getDefenza()*0.7);
            return dano;
        }
}
