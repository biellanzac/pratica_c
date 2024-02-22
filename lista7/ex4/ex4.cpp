#include <iostream>
#include <string>

using namespace std;

class Pessoa{
	private:
		string Nome;
	public:
		Pessoa(string, string);
		string getNome();
};

class Fisica:public Pessoa{
	private:
		string cpf;
	public:
		fisica(string);
		string getCpf();
};

class Conta{
	private:
		int numero;
		float saldo;
	public:
		string pix;
		
	Conta(int numero) : numero(numero), saldo(0.0){}
	
	float getSaldo() const {
		return saldo;
	};
	
	void sacarValor(float valor){
		if(valor < 0){
			cout << "Impossivel sacar algo de um saldo negativo" << endl;
		}else{
			saldo -= valor;
		}
	};
	
	void depositarValor(float valor){
		if(valor < 0){
			cout << "Valor invalido" << endl;
		}else{
			saldo += valor;
		}
	};
	
	int getConta() const{
		return numero;
	};
};

class Corrente : public Conta{
}; 

class Poupanca : public Conta{
	private:
		int aniversario;
		float valor;
	public:
		int getAniversario() const{
			return aniversario;
		};
		int aplicaJuros() const{
			return valor;
		}
};

//acho que tem algum erro no diagrama uml, considerei float limite como privado, e especial publico acessando os dados privados do limite
class Especial : public Conta{
	private:
		float limite;
	public:
		Especial();
};

class Historico{
	private:
		int numero_conta;
		int operacao;
		float valor;
	public:
		void operar(Conta& conta, int operacao, float valor) {
            if (operacao == 1) {
                conta.depositarValor(valor);
        } else if (operacao == 2) {
                conta.sacarValor(valor);
        } else {
            cout << "Operação inválida." << endl;
        }
    }
};



int main(){
	
}
