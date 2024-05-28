#include "TiposClases.hpp"
class Espadachin : public Guerrero{
    public:
    	Espadachin() : Guerrero(100,100,10,0,6,5){};
};
class Berserker : public Guerrero{
    public:
    	Berserker() : Guerrero(125,80,15,0,8,2){};
};
class Mago : public Magico{
    public:
    	Mago() : Magico(80,115,0,15,3,2){};
};
class Sacerdote : public Magico{
    public:
    	Sacerdote() : Magico(100,175,0,8,2,1){};
};
class Ladron : public Sigilo{
    public:
    	Ladron() : Sigilo(90,125,6,0,4,10){};
};
class Arquero : public Sigilo{
    public:
    	Arquero() : Sigilo(100,100,12,0,2,8){};
};