#include "Personaje.h"
#include <iostream>
using namespace std;
class SistemaKarma{
    private:
        double karma = 0;
    public:
        void setKarma(double k){
            karma = k;
        }
        void verKarma(){
            if(karma>0){
                cout<<"Tu carma es bueno, tienes "<<karma<<" puntos karma."<<endl;
            }else if(karma<0){
                cout<<"Tu carma es malo, tienes "<<karma<<" puntos karma."<<endl;
            }else{
                cout<<"Tu carma es neutro, no cuentas con ningun punto karma. "<<endl;
            }
        }
};