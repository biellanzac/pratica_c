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

int main() {
	Data data1;
	Data data2(10, 10, 2023);
}





