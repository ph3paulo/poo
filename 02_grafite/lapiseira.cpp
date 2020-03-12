#include <iostream>
#include <sstream>
using namespace std;

struct Lapiseira{
	int grafite = 100;
    bool ponta = false;

    void recarregar(){
        if (this->grafite <= 99)
        {
            for(; this->grafite <= 100; this->grafite ++)
            {
                this->grafite += 1;
            }
        cout << ">>Regarregado" << "\n";

        }else{
        cout << ">>não precisa recarregar" << "\n";
        }
    }

    void escrever(int n){
        if(this->ponta == true){
            if(n > this->grafite)
            {
            cout << ">>voce não tem grafite suficiente" << "\n";
            }
            else if(this->grafite > 0)
            {
                this->grafite -= n;
                cout << ">>você escreveu ^^" << "\n";
            }
        }
        else{
            cout << ">>sua ponta esta guardada não pode escrever" << "\n";
        }
    }

    void poonta_para_fora(){
        if(this->ponta == false)
        {
            this->ponta = true;
            cout << ">>sua ponta esta para fora" << "\n";
        }
        else
        {
            cout << ">>sua ponta ja esta para fora" << "\n";
        }
        
    }

    void ponta_para_dentro(){
        if(this->ponta == true)
        {
            this->ponta = false;
            cout << ">>Sua ponta esta guardada" << "\n";
        }
        else
        {
            cout << ">>Sua ponta já esta guardada" << "\n";
        }
    }
    void status(){
        cout << ">>voce tem essa quantidade: " << this->grafite << " de grafite" << "\n";
        if(this->ponta == true){
            cout << ">>sua ponta esta para fora" << "\n";
        }
        else{
            cout << ">>Sua ponta esta guardada" << "\n";
        }
    }
};

int main(){
    Lapiseira * lapiseira = new Lapiseira();
    while(true){
        string line;
        getline(cin, line);
        stringstream ss(line);
        string cmd;
        int n = 0;
        ss >> cmd;
        ss >> n;
        if(cmd == "end"){
            break;
        }else if(cmd == "recarregar"){
            lapiseira->recarregar();
        }else if(cmd == "escrever"){
            lapiseira->escrever(n);
        }else if(cmd == "retira_ponta"){
            lapiseira->poonta_para_fora();
        }else if (cmd == "guarda_ponta"){
            lapiseira->ponta_para_dentro();
        }else if(cmd == "status"){
            lapiseira->status();
        }
        else{
            cout << "comando invalido\n";
        }
        cout << "==========================" << "\n";

    }
    return 0;
}