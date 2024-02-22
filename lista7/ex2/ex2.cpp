#include <iostream>

using namespace std;

class Hora{
	private:
		int hora;
		int minuto;
		int segundo;
		
	bool validar(int hora, int minuto, int segundo){
		if(hora < 1 || minuto < 1 || segundo < 1){
			cout << "Horario invalido" << endl;
			return false;
		}else{
			if(minuto > 59){
				hora++;
				minuto = 0;
			}else if(segundo > 59){
				minuto++;
				segundo = 0;
			}
			return true;
		}
	}
	
	public:
		Hora() : hora(0), minuto(0), segundo(0){}
		
		Hora(int hora, int minuto, int segundo){
			if(validar(hora, minuto, segundo)){
				this->hora = hora;
				this->minuto = minuto;
				this->segundo = segundo; 
			}else{
				this->hora = 0;
				this->minuto = 0;
				this->segundo = 0;
			}
		}
		
		int getHora(){
			return hora;
		}
		int getMinuto(){
			return minuto;
		}
		int getSegundo(){
			return segundo;
		}
		
		void adicionarHora(const Hora& outraHora) {
        segundo += outraHora.segundo;
        minuto += outraHora.minuto + segundo / 60;
        hora += outraHora.hora + minuto / 60;

        segundo %= 60;
        minuto %= 60;
        hora %= 24;
    }

        Hora operator+(const Hora& outraHora) const {
            Hora novaHora(*this);
            novaHora.adicionarHora(outraHora);
            return novaHora;
    }

        Hora diferencaHoras(const Hora& outraHora) const {
            int difSegundo = segundo - outraHora.segundo;
            int difMinuto = minuto - outraHora.minuto - (difSegundo < 0 ? 1 : 0);
            int difHora = hora - outraHora.hora - (difMinuto < 0 ? 1 : 0);

           difSegundo = (difSegundo + 60) % 60;
           difMinuto = (difMinuto + 60) % 60;
           difHora = (difHora + 24) % 24;

        return Hora(difHora, difMinuto, difSegundo);
    }

        Hora operator-(const Hora& outraHora) const {
            return diferencaHoras(outraHora);
    }

};

int main(){
}

 
