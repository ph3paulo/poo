#include <iostream>
#include <sstream>
using namespace std;

struct Ponta {
    bool estado_ponta = false;
    int quantidade_ponta = 1000;
};

struct Lapiseira{
    Ponta * ponta {nullptr};

    void colocar_ponta(Ponta * ponta){
        if(this->ponta != nullptr)
            cout << ">>ja tem ponta na lapiseira" << "\n";
        else{
            this->ponta = ponta;
            cout << ">>ponta colocada" << "\n";
        }
    }
    void retira_ponta(){
        this->ponta = nullptr;
        cout << ">>ponta retirada";
    }

    void recarregar(){
        if(this->ponta == nullptr){
            cout << ">>sem ponta" << "\n";
        }else{
            if (ponta->quantidade_ponta <= 99)
            {
                for(; ponta->quantidade_ponta <= 100; ponta->quantidade_ponta ++)
                {
                    ponta->quantidade_ponta += 1;
                }
            cout << ">>Regarregado" << "\n";

            }else{
            cout << ">>não precisa recarregar" << "\n";
            }
        }
    }

    void escrever(int n){
        if(this->ponta == nullptr){
            cout << ">>sem ponta" << "\n";
        }else{
            if(ponta->estado_ponta == true){
                if(n > ponta->quantidade_ponta)
                {
                    int n_novo = n - ponta->quantidade_ponta;
                    ponta->quantidade_ponta = 0;
                cout << ">>Voce não tinha grafite o suficiente faltou: " << n_novo << "\n";
                }
                else if(ponta->quantidade_ponta > 0)
                {
                    ponta->quantidade_ponta -= n;
                    cout << ">>você escreveu ^^" << "\n";
                }
            }
            else{
                cout << ">>sua ponta esta guardada não pode escrever" << "\n";
            }
        }
    }

    void ponta_para_fora(){
        if(this->ponta == nullptr){
            cout << ">>sem ponta" << "\n";
        }else{
            if(ponta->estado_ponta == false)
            {
                ponta->estado_ponta = true;
                cout << ">>sua ponta esta para fora" << "\n";
            }
            else
            {
                cout << ">>sua ponta ja esta para fora" << "\n";
            }
            
        }
    }

    void ponta_para_dentro(){
        if(this->ponta == nullptr){
            cout << ">>sem ponta" << "\n";
        }else{
            if(ponta->estado_ponta == true)
            {
                ponta->estado_ponta = false;
                cout << ">>Sua ponta esta guardada" << "\n";
            }
            else
            {
                cout << ">>Sua ponta já esta guardada" << "\n";
            }
        }
    }

    void status(){
        if(this->ponta == nullptr){
            cout << ">>sem ponta" << "\n";
        }else{
            cout << ">>voce tem essa quantidade: " << ponta->quantidade_ponta << " de grafite" << "\n";
            if(ponta->estado_ponta == true){
                cout << ">>sua ponta esta para fora" << "\n";
            }
            else{
                cout << ">>Sua ponta esta guardada" << "\n";
            }
        }
    }
};

int main(){
    Lapiseira lapiseira;
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
            lapiseira.recarregar();
        }else if(cmd == "escrever"){
            lapiseira.escrever(n);
        }else if(cmd == "sai_ponta"){
            lapiseira.ponta_para_fora();
        }else if (cmd == "guarda_ponta"){
            lapiseira.ponta_para_dentro();
        }else if(cmd == "status"){
            lapiseira.status();
        }else if(cmd == "colocar_ponta"){
            lapiseira.colocar_ponta(new Ponta());
        }else if(cmd == "retira_ponta"){
            lapiseira.retira_ponta();
        }else{
            cout << ">>comando invalido\n";
        }
        cout << "==========================" << "\n";

    }
    return 0;
}