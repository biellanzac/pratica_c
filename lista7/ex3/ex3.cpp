#include <iostream>

using namespace std;

class Data {
private:
    int dia;
    int mes;
    int ano;

    bool valida(int dia, int mes, int ano) {
    if (ano < 1 || mes < 1 || dia < 1 || dia > 31 || mes > 12) {
        cout << "Data inválida" << std::endl;
        return false; // Adicionando o retorno false para indicar que a data é inválida
    } else {
    	cout<< "Data valida"<< endl;
        return true;
    }
}

public:
    Data() : dia(1), mes(1), ano(1) {}

    Data(int dia, int mes, int ano) {
        if (valida(dia, mes, ano)) {
            this->dia = dia;
            this->mes = mes;
            this->ano = ano;
        } else {
            this->dia = 1;
            this->mes = 1;
            this->ano = 1;
        }
    }

    int getDia() const { return dia; }
    int getMes() const { return mes; }
    int getAno() const { return ano; }

    void adicionarDias(int dias) {
        dia += dias;
    }

    Data operator+(int dias) const {
        Data novaData(*this);
        novaData.adicionarDias(dias);
        return novaData;
    }

    int diferencaDias(const Data& outraData) const {
        return (outraData.ano - ano) * 365 + (outraData.mes - mes) * 30 + (outraData.dia - dia);
    }

    int operator-(const Data& outraData) const {
        return diferencaDias(outraData);
    }
};

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

class DataHora : public Data, public Hora {
    public:
        DataHora() : Data(), Hora() {}

        DataHora(const Data& data, const Hora& hora) : Data(data), Hora(hora) {}

        Hora diferencaDataHora(const DataHora& outraDataHora) const {

            int difSegundo = segundo - outraDataHora.segundo;
            int difMinuto = minuto - outraDataHora.minuto - (difSegundo < 0 ? 1 : 0);
            int difHora = hora - outraDataHora.hora - (difMinuto < 0 ? 1 : 0);

            difSegundo = (difSegundo + 60) % 60;
            difMinuto = (difMinuto + 60) % 60;
            difHora = (difHora + 24) % 24;

            return Hora(difHora, difMinuto, difSegundo);
    }

       Hora operator-(const DataHora& outraDataHora) const {
            return diferencaDataHora(outraDataHora);
    }

};

int main(){

}
