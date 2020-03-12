#include <iostream>
#include <sstream>
using namespace std;

struct Pincel{
	bool tampa = true;
	int nTinta = 10;
    int maxTinta = 100;

    bool recarregar(){
        if (this->nTinta < this->maxTinta)
        {
            this->nTinta += 1;
            cout << "Recarregou\n";
            return true;
        }
        cout << "Seu Pincel não tem mais espaco\n";
        return false;
    }

    void escrever(){
    	if(this->tampa == false){
			if(this->nTinta > 0)
			{
				this->nTinta --;
				cout << "você escreveu ^^" << "\n";
			}
			else if(this->nTinta <= 0)
			{
				cout << ">>você não tem tinta o suficiente" << "\n";
			}
		}else{
			cout << ">>caneta tampada não pode escrever" << "\n";
		}
    }

    void tampar(){
        if(this->tampa == false)
        {
            this->tampa = true;
            cout << ">>Sua caneta foi tampada" << "\n";
        }
        else
        {
            cout << ">>Sua caneta ja esta destampada" << "\n";
        }
        
    }

    void destampar(){
        if(this->tampa == true)
        {
            this->tampa = false;
            cout << ">>Sua caneta foi destampada" << "\n";
        }
        else
        {
            cout << ">>Sua caneta ja esta destampada" << "\n";
        }
        

    }
};

int main(){
    Pincel * pincel = new Pincel();
    while(true){
        string line;
        getline(cin, line);
        stringstream ss(line);
        string cmd;
        ss >> cmd;
        if(cmd == "end"){
            break;
        }else if(cmd == "recarregar"){
            pincel->recarregar();
        }else if(cmd == "escrever"){
            pincel->escrever();
        }else if(cmd == "destampar"){
            pincel->destampar();
        }else if (cmd == "tampar"){
            pincel->tampar();
        }
        else{
            cout << "comando invalido\n";
        }
        cout << "\n";
        cout << "voce tem essa quantidade: " << pincel->nTinta << " de tinta" << "\n";
        if(pincel->tampa == true){
            cout << "seu Pincel esta tampado" << "\n";
        }
        else{
            cout << "Seu pincel esta destampado" << "\n";
        }
        cout << "======================" << "\n";
    }
    return 0;
}
