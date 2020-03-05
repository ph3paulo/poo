#include <iostream>
using namespace std;

struct Pincel
{
	bool tampa = true;
	int nTinta = 10;
    int maxTinta = 100;

    bool recarregar()
    {
        if (this->nTinta < this->maxTinta)
        {
            this->nTinta += 1;
            cout << "Recarregou\n";
            return true;
        }
        cout << "Seu Pincel não tem mais espaco\n";
        return false;
    }

    void ecrever()
    {
		if(this->nTinta > 0)
		{
			this->nTinta --;
			cout << "você escreveu ^^" << "\n";
		}
		else if(this->nTinta <= 0)
		{
			cout << "você não tem tinta o suficiente" << "\n";
		}
    }

    void tampar()
    {
        if(this->tampa == false)
        {
            this->tampa = true;
            cout << "Sua caneta foi tampada" << "\n";
        }
        else
        {
            cout << "Sua caneta ja esta destampada" << "\n";
        }
        
    }

    void destampar()
    {
        if(this->tampa == true)
        {
            this->tampa = false;
            cout << "Sua caneta foi destampada" << "\n";
        }
        else
        {
            cout << "Sua caneta ja esta destampada" << "\n";
        }
        

    }
};

int main()
{
    Pincel * pincel = new Pincel();
    pincel->recarregar();
    pincel->recarregar();
    cout << "vc ainda tem essa quantidade: " << pincel->nTinta << " de tinta" << "\n";
    return 0;
}




