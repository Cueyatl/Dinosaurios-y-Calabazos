#include <iostream>
#include <vector>
#include <thread>
using namespace std;
class Arte{
	public:
		const vector<string> dibujo_1(){
			string linea_1 = "____________________________________________";
			string linea_2 = "____________________________________________";
			string linea_3 = "__||  ||___||  |_|___|___|__|  ||___||  ||__";
			string linea_4 = "|__|  |__|__|  |___|___|___||  |__|__|  |__|";
			string linea_5 = "__||  ||___||  |_|___|___|__|  ||___||  ||__";
			string linea_6 = "|__|  |__|__|  |    || |    |  |__|__|  |__|";
			string linea_7 = "__||  ||___||  |    || |    |  ||___||  ||__";
			string linea_8 = "|__|  |__|__|  |    || |    |  |__|__|  |__|";
			string linea_9 = "__||  ||___||  |    || |    |  ||___||  ||__";
			string linea_10 = "|__|  |__|__|  |    || |    |  |__|__|  |__|";
			string linea_11 = "__||  ||___||  |   O|| |O   |  ||___||  ||__";
			string linea_12 = "|__|  |__|__|  |    || |    |  |__|__|  |__|";
			string linea_13 = "__||  ||___||  |    || |    |  ||___||  ||__";
			string linea_14 = "|__|  |__|__|__|____||_|____|  |__|__|  |__|";
			string linea_15 = "LLL|  |LLLLL|______________||  |LLLLL|  |LLL";
			string linea_16 = "LLL|  |LLL|______________|  |  |LLLLL|  |LLL";
			string linea_17 = "LLL|__|L|______________|____|__|LLLLL|__|LLL";
			vector<string> dibujo = {linea_1,linea_2,linea_3,linea_4,linea_5,linea_6,linea_7,linea_8,linea_9,linea_10,linea_11,linea_12,linea_13};
 			
 			return dibujo;			
		}	
		const vector<string> dibujo_2(){
			string linea_1 = "____________________________________________";
			string linea_2 = "____________________________________________";
			string linea_3 = "||___||  |_|___|___|__|  ||___||  ||___||  |";
			string linea_4 = "|__|__|  |___|___|___||  |__|__|  |__|__|  |";
			string linea_5 = "||___||  |_|___|___|__|  ||___||  ||___||  |";
			string linea_6 = "|__|__|  |    || |    |  |__|__|  |__|__|  |";
			string linea_7 = "||___||  |    || |    |  ||___||  ||___||  |";
			string linea_8 = "|__|__|  |    || |    |  |__|__|  |__|__|  |";
			string linea_9 = "||___||  |    || |    |  ||___||  ||___||  |";
			string linea_10 = "|__|__|  |    || |    |  |__|__|  |__|__|  |";
			string linea_11 = "||___||  |   O|| |O   |  ||___||  ||___||  |";
			string linea_12 = "|__|__|  |    || |    |  |__|__|  |__|__|  |";
			string linea_13 = "||___||  |    || |    |  ||___||  ||___||  |";
			string linea_14 = "|__|__|__|____||_|____|  |__|__|  |__|__|  |";
			string linea_15 = "|LLLLL|______________||  |LLLLL|  |LLLLL|  |";
			string linea_16 = "|LLL|______________|  |  |LLLLL|  |LLLLL|  |";
			string linea_17 = "|L|______________|____|__|LLLLL|__|LLLLL|__|";
			vector<string> dibujo = {linea_1,linea_2,linea_3,linea_4,linea_5,linea_6,linea_7,linea_8,linea_9,linea_10,linea_11,linea_12,linea_13};
 			
 			return dibujo;
		}
		const vector<string> dibujo_3(){
			string linea_1 = "____________________________________________";
			string linea_2 = "____________________________________________";
			string linea_3 = "|  |_|___|___|__|  ||___||  ||___||  ||___||";
			string linea_4 = "|  |___|___|___||  |__|__|  |__|__|  |__|__|";
			string linea_5 = "|  |_|___|___|__|  ||___||  ||___||  ||___||";
			string linea_6 = "|  |    || |    |  |__|__|  |__|__|  |__|__|";
			string linea_7 = "|  |    || |    |  ||___||  ||___||  ||___||";
			string linea_8 = "|  |    || |    |  |__|__|  |__|__|  |__|__|";
			string linea_9 = "|  |    || |    |  ||___||  ||___||  ||___||";
			string linea_10 = "|  |    || |    |  |__|__|  |__|__|  |__|__|";
			string linea_11 = "|  |   O|| |O   |  ||___||  ||___||  ||___||";
			string linea_12 = "|  |    || |    |  |__|__|  |__|__|  |__|__|";
			string linea_13 = "|  |    || |    |  ||___||  ||___||  ||___||";
			string linea_14 = "|__|____||_|____|  |__|__|  |__|__|  |__|__|";
			string linea_15 = "|______________||  |LLLLL|  |LLLLL|  |LLLLL|";
			string linea_16 = "_____________|  |  |LLLLL|  |LLLLL|  |LLLLL|";
			string linea_17 = "___________|____|__|LLLLL|__|LLLLL|__|LLLLL|";
			vector<string> dibujo = {linea_1,linea_2,linea_3,linea_4,linea_5,linea_6,linea_7,linea_8,linea_9,linea_10,linea_11,linea_12,linea_13};
 			
 			return dibujo;
		}
		const vector<string> dibujo_4(){
			string linea_1 = "____________________________________________";
			string linea_2 = "____________________________________________";
			string linea_3 = "___|___|__|  ||___||  ||___||  ||___||  ||__";
			string linea_4 = "_|___|___||  |__|__|  |__|__|  |__|__|  |__|";
			string linea_5 = "___|___|__|  ||___||  ||___||  ||___||  ||__";
			string linea_6 = "  || |    |  |__|__|  |__|__|  |__|__|  |__|";
			string linea_7 = "  || |    |  ||___||  ||___||  ||___||  ||__";
			string linea_8 = "  || |    |  |__|__|  |__|__|  |__|__|  |__|";
			string linea_9 = "  || |    |  ||___||  ||___||  ||___||  ||__";
			string linea_10 = "  || |    |  |__|__|  |__|__|  |__|__|  |__|";
			string linea_11 = " O|| |O   |  ||___||  ||___||  ||___||  ||__";
			string linea_12 = "  || |    |  |__|__|  |__|__|  |__|__|  |__|";
			string linea_13 = "  || |    |  ||___||  ||___||  ||___||  ||__";
			string linea_14 = "__||_|____|  |__|__|  |__|__|  |__|__|  |__|";
			string linea_15 = "_________||  |LLLLL|  |LLLLL|  |LLLLL|  |LLL";
			string linea_16 = "_______|  |  |LLLLL|  |LLLLL|  |LLLLL|  |LLL";
			string linea_17 = "_____|____|__|LLLLL|__|LLLLL|__|LLLLL|__|LLL";
			vector<string> dibujo = {linea_1,linea_2,linea_3,linea_4,linea_5,linea_6,linea_7,linea_8,linea_9,linea_10,linea_11,linea_12,linea_13};
 			
 			return dibujo;
		}
		const vector<string> dibujo_5(){
			string linea_1 = "____________________________________________";
			string linea_2 = "____________________________________________";
			string linea_3 = "_|__|  ||___||  ||___||  ||___||  ||___||  |";
			string linea_4 = "___||  |__|__|  |__|__|  |__|__|  |__|__|  |";
			string linea_5 = "_|__|  ||___||  ||___||  ||___||  ||___||  |";
			string linea_6 = "    |  |__|__|  |__|__|  |__|__|  |__|__|  |";
			string linea_7 = "    |  ||___||  ||___||  ||___||  ||___||  |";
			string linea_8 = "    |  |__|__|  |__|__|  |__|__|  |__|__|  |";
			string linea_9 = "    |  ||___||  ||___||  ||___||  ||___||  |";
			string linea_10 = "    |  |__|__|  |__|__|  |__|__|  |__|__|  |";
			string linea_11 = "O   |  ||___||  ||___||  ||___||  ||___||  |";
			string linea_12 = "    |  |__|__|  |__|__|  |__|__|  |__|__|  |";
			string linea_13 = "    |  ||___||  ||___||  ||___||  ||___||  |";
			string linea_14 = "____|  |__|__|  |__|__|  |__|__|  |__|__|  |";
			string linea_15 = "___||  |LLLLL|  |LLLLL|  |LLLLL|  |LLLLL|  |";
			string linea_16 = "_|  |  |LLLLL|  |LLLLL|  |LLLLL|  |LLLLL|  |";
			string linea_17 = "____|__|LLLLL|__|LLLLL|__|LLLLL|__|LLLLL|__|";
			vector<string> dibujo = {linea_1,linea_2,linea_3,linea_4,linea_5,linea_6,linea_7,linea_8,linea_9,linea_10,linea_11,linea_12,linea_13};
 			
 			return dibujo;
		}
		const vector<string> dibujo_6(){
			string linea_1 = "____________________________________________";
			string linea_2 = "____________________________________________";
			string linea_3 = " ||___||  ||___||  ||___||  ||___||  ||___||";
			string linea_4 = " |__|__|  |__|__|  |__|__|  |__|__|  |__|__|";
			string linea_5 = " ||___||  ||___||  ||___||  ||___||  ||___||";
			string linea_6 = " |__|__|  |__|__|  |__|__|  |__|__|  |__|__|";
			string linea_7 = " ||___||  ||___||  ||___||  ||___||  ||___||";
			string linea_8 = " |__|__|  |__|__|  |__|__|  |__|__|  |__|__|";
			string linea_9 = " ||___||  ||___||  ||___||  ||___||  ||___||";
			string linea_10 = " |__|__|  |__|__|  |__|__|  |__|__|  |__|__|";
			string linea_11 = " ||___||  ||___||  ||___||  ||___||  ||___||";
			string linea_12 = " |__|__|  |__|__|  |__|__|  |__|__|  |__|__|";
			string linea_13 = " ||___||  ||___||  ||___||  ||___||  ||___||";
			string linea_14 = " |__|__|  |__|__|  |__|__|  |__|__|  |__|__|";
			string linea_15 = " |LLLLL|  |LLLLL|  |LLLLL|  |LLLLL|  |LLLLL|";
			string linea_16 = " |LLLLL|  |LLLLL|  |LLLLL|  |LLLLL|  |LLLLL|";
			string linea_17 = "_|LLLLL|__|LLLLL|__|LLLLL|__|LLLLL|__|LLLLL|";
			vector<string> dibujo = {linea_1,linea_2,linea_3,linea_4,linea_5,linea_6,linea_7,linea_8,linea_9,linea_10,linea_11,linea_12,linea_13};
 			
 			return dibujo;
		}
		const vector<string> dibujo_7(){
			string linea_1 = "____________________________________________";
			string linea_2 = "____________________________________________";
			string linea_3 = "||  ||___||  ||___||  ||___||  ||___||  ||__";
			string linea_4 = "_|  |__|__|  |__|__|  |__|__|  |__|__|  |__|";
			string linea_5 = "||  ||___||  ||___||  ||___||  ||___||  ||__";
			string linea_6 = "_|  |__|__|  |__|__|  |__|__|  |__|__|  |__|";
			string linea_7 = "||  ||___||  ||___||  ||___||  ||___||  ||__";
			string linea_8 = "_|  |__|__|  |__|__|  |__|__|  |__|__|  |__|";
			string linea_9 = "||  ||___||  ||___||  ||___||  ||___||  ||__";
			string linea_10 = "_|  |__|__|  |__|__|  |__|__|  |__|__|  |__|";
			string linea_11 = "||  ||___||  ||___||  ||___||  ||___||  ||__";
			string linea_12 = "_|  |__|__|  |__|__|  |__|__|  |__|__|  |__|";
			string linea_13 = "||  ||___||  ||___||  ||___||  ||___||  ||__";
			string linea_14 = "_|  |__|__|  |__|__|  |__|__|  |__|__|  |__|";
			string linea_15 = "L|  |LLLLL|  |LLLLL|  |LLLLL|  |LLLLL|  |LLL";
			string linea_16 = "L|  |LLLLL|  |LLLLL|  |LLLLL|  |LLLLL|  |LLL";
			string linea_17 = "L|__|LLLLL|__|LLLLL|__|LLLLL|__|LLLLL|__|L|_";
			vector<string> dibujo = {linea_1,linea_2,linea_3,linea_4,linea_5,linea_6,linea_7,linea_8,linea_9,linea_10,linea_11,linea_12,linea_13};
 			
 			return dibujo;
		}
		const vector<string> dibujo_8(){
			string linea_1 = "____________________________________________";
			string linea_2 = "____________________________________________";
			string linea_3 = "___||  ||___||  ||___||  ||___||  ||___||  |";
			string linea_4 = "_|__|  |__|__|  |__|__|  |__|__|  |__|__|  |";
			string linea_5 = "___||  ||___||  ||___||  ||___||  ||___||  |";
			string linea_6 = "_|__|  |__|__|  |__|__|  |__|__|  |__|__|  |";
			string linea_7 = "___||  ||___||  ||___||  ||___||  ||___||  |";
			string linea_8 = "_|__|  |__|__|  |__|__|  |__|__|  |__|__|  |";
			string linea_9 = "___||  ||___||  ||___||  ||___||  ||___||  |";
			string linea_10 = "_|__|  |__|__|  |__|__|  |__|__|  |__|__|  |";
			string linea_11 = "___||  ||___||  ||___||  ||___||  ||___||  |";
			string linea_12 = "_|__|  |__|__|  |__|__|  |__|__|  |__|__|  |";
			string linea_13 = "___||  ||___||  ||___||  ||___||  ||___||  |";
			string linea_14 = "_|__|  |__|__|  |__|__|  |__|__|  |__|__|__|";
			string linea_15 = "LLLL|  |LLLLL|  |LLLLL|  |LLLLL|  |LLLLL|___";
			string linea_16 = "LLLL|  |LLLLL|  |LLLLL|  |LLLLL|  |LLL|_____";
			string linea_17 = "LLLL|__|LLLLL|__|LLLLL|__|LLLLL|__|L|_______";
			vector<string> dibujo = {linea_1,linea_2,linea_3,linea_4,linea_5,linea_6,linea_7,linea_8,linea_9,linea_10,linea_11,linea_12,linea_13};
 			
 			return dibujo;
		}
		const vector<string> dibujo_9(){
			string linea_1 = "____________________________________________";
			string linea_2 = "____________________________________________";
			string linea_3 = " ||___||  ||___||  ||___||  ||___||  |_|___|";
			string linea_4 = " |__|__|  |__|__|  |__|__|  |__|__|  |___|__";
			string linea_5 = " ||___||  ||___||  ||___||  ||___||  |_|___|";
			string linea_6 = " |__|__|  |__|__|  |__|__|  |__|__|  |    ||";
			string linea_7 = " ||___||  ||___||  ||___||  ||___||  |    ||";
			string linea_8 = " |__|__|  |__|__|  |__|__|  |__|__|  |    ||";
			string linea_9 = " ||___||  ||___||  ||___||  ||___||  |    ||";
			string linea_10 = " |__|__|  |__|__|  |__|__|  |__|__|  |    ||";
			string linea_11 = " ||___||  ||___||  ||___||  ||___||  |   O||";
			string linea_12 = " |__|__|  |__|__|  |__|__|  |__|__|  |    ||";
			string linea_13 = " ||___||  ||___||  ||___||  ||___||  |    ||";
			string linea_14 = " |__|__|  |__|__|  |__|__|  |__|__|__|____||";
			string linea_15 = " |LLLLL|  |LLLLL|  |LLLLL|  |LLLLL|_________";
			string linea_16 = " |LLLLL|  |LLLLL|  |LLLLL|  |LLL|___________";
			string linea_17 = "_|LLLLL|__|LLLLL|__|LLLLL|__|L|_____________";
			vector<string> dibujo = {linea_1,linea_2,linea_3,linea_4,linea_5,linea_6,linea_7,linea_8,linea_9,linea_10,linea_11,linea_12,linea_13};
 			
 			return dibujo;
		}
		const vector<string> dibujo_10(){
			string linea_1 = "____________________________________________";
			string linea_2 = "____________________________________________";
			string linea_3 = "||  ||___||  ||___||  ||___||  |_|___|___|__";
			string linea_4 = "_|  |__|__|  |__|__|  |__|__|  |___|___|___|";
			string linea_5 = "||  ||___||  ||___||  ||___||  |_|___|___|__";
			string linea_6 = "_|  |__|__|  |__|__|  |__|__|  |    || |    ";
			string linea_7 = "||  ||___||  ||___||  ||___||  |    || |    ";
			string linea_8 = "_|  |__|__|  |__|__|  |__|__|  |    || |    ";
			string linea_9 = "||  ||___||  ||___||  ||___||  |    || |    ";
			string linea_10 = "_|  |__|__|  |__|__|  |__|__|  |    || |    ";
			string linea_11 = "||  ||___||  ||___||  ||___||  |   O|| |O   ";
			string linea_12 = "_|  |__|__|  |__|__|  |__|__|  |    || |    ";
			string linea_13 = "||  ||___||  ||___||  ||___||  |    || |    ";
			string linea_14 = "_|  |__|__|  |__|__|  |__|__|__|____||_|____";
			string linea_15 = "L|  |LLLLL|  |LLLLL|  |LLLLL|______________|";
			string linea_16 = "L|  |LLLLL|  |LLLLL|  |LLL|______________|  ";
			string linea_17 = "L|__|LLLLL|__|LLLLL|__|L|______________|____";
			vector<string> dibujo = {linea_1,linea_2,linea_3,linea_4,linea_5,linea_6,linea_7,linea_8,linea_9,linea_10,linea_11,linea_12,linea_13};
 			
 			return dibujo;
		}
		const vector<string> dibujo_11(){
			string linea_1 = "____________________________________________";
			string linea_2 = "____________________________________________";
			string linea_3 = "___||  ||___||  ||___||  |_|___|___|__|  ||_";
			string linea_4 = "_|__|  |__|__|  |__|__|  |___|___|___||  |__";
			string linea_5 = "___||  ||___||  ||___||  |_|___|___|__|  ||_";
			string linea_6 = "_|__|  |__|__|  |__|__|  |    || |    |  |__";
			string linea_7 = "___||  ||___||  ||___||  |    || |    |  ||_";
			string linea_8 = "_|__|  |__|__|  |__|__|  |    || |    |  |__";
			string linea_9 = "___||  ||___||  ||___||  |    || |    |  ||_";
			string linea_10 = "_|__|  |__|__|  |__|__|  |    || |    |  |__";
			string linea_11 = "___||  ||___||  ||___||  |   O|| |O   |  ||_";
			string linea_12 = "_|__|  |__|__|  |__|__|  |    || |    |  |__";
			string linea_13 = "___||  ||___||  ||___||  |    || |    |  ||_";
			string linea_14 = "_|__|  |__|__|  |__|__|__|____||_|____|  |__";
			string linea_15 = "LLLL|  |LLLLL|  |LLLLL|______________||  |LL";
			string linea_16 = "LLLL|  |LLLLL|  |LLL|______________|  |  |LL";
			string linea_17 = "LLLL|__|LLLLL|__|L|______________|____|__|LL";
			vector<string> dibujo = {linea_1,linea_2,linea_3,linea_4,linea_5,linea_6,linea_7,linea_8,linea_9,linea_10,linea_11,linea_12,linea_13};
 			
 			return dibujo;
		}
		const vector<string> dibujo_12(){
			string linea_1 = "____________________________________________";
			string linea_2 = "____________________________________________";
			string linea_3 = " ||___||  ||___||  |_|___|___|__|  ||___||  ";
			string linea_4 = " |__|__|  |__|__|  |___|___|___||  |__|__|  ";
			string linea_5 = " ||___||  ||___||  |_|___|___|__|  ||___||  ";
			string linea_6 = " |__|__|  |__|__|  |    || |    |  |__|__|  ";
			string linea_7 = " ||___||  ||___||  |    || |    |  ||___||  ";
			string linea_8 = " |__|__|  |__|__|  |    || |    |  |__|__|  ";
			string linea_9 = " ||___||  ||___||  |    || |    |  ||___||  ";
			string linea_10 = " |__|__|  |__|__|  |    || |    |  |__|__|  ";
			string linea_11 = " ||___||  ||___||  |   O|| |O   |  ||___||  ";
			string linea_12 = " |__|__|  |__|__|  |    || |    |  |__|__|  ";
			string linea_13 = " ||___||  ||___||  |    || |    |  ||___||  ";
			string linea_14 = " |__|__|  |__|__|__|____||_|____|  |__|__|  ";
			string linea_15 = " |LLLLL|  |LLLLL|______________||  |LLLLL|  ";
			string linea_16 = " |LLLLL|  |LLL|______________|  |  |LLLLL|  ";
			string linea_17 = "_|LLLLL|__|L|______________|____|__|LLLLL|  ";
			vector<string> dibujo = {linea_1,linea_2,linea_3,linea_4,linea_5,linea_6,linea_7,linea_8,linea_9,linea_10,linea_11,linea_12,linea_13};
 			
 			return dibujo;
		}
		void transicion(){
			this_thread::sleep_for(chrono::seconds(1));
			system("cls");
		}
		void imprimirASCII(vector<string> dibujo1, vector<string> dibujo2){
			for(int i=0;i<dibujo1.size();i++){
				cout<<dibujo1[i]<<dibujo2[i]<<endl;
			}
		}	
};
int main(){
	Arte* user = new Arte();
	for(int i=0;i<2;i++){
		user->imprimirASCII(user->dibujo_1(),user->dibujo_7());
		user->transicion();
		user->imprimirASCII(user->dibujo_2(),user->dibujo_8());
		user->transicion();
		user->imprimirASCII(user->dibujo_3(),user->dibujo_9());
		user->transicion();
		user->imprimirASCII(user->dibujo_4(),user->dibujo_10());
		user->transicion();
		user->imprimirASCII(user->dibujo_5(),user->dibujo_11());
		user->transicion();
		user->imprimirASCII(user->dibujo_6(),user->dibujo_12());
		user->transicion();
		user->imprimirASCII(user->dibujo_7(),user->dibujo_1());
		user->transicion();
		user->imprimirASCII(user->dibujo_7(),user->dibujo_3());
		user->transicion();
		user->imprimirASCII(user->dibujo_9(),user->dibujo_5());
		user->transicion();
		user->imprimirASCII(user->dibujo_10(),user->dibujo_6());
		user->transicion();
		user->imprimirASCII(user->dibujo_11(),user->dibujo_7());
		user->transicion();
		user->imprimirASCII(user->dibujo_12(),user->dibujo_6());
		user->transicion();
	}
	return 0;
}