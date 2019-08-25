#include <iostream>
#include <string.h>
#define MAX 10
using namespace std;

class Carro
{
    public:
        char nome[100];
        char cor[20];
        char placa[20];
        double preco;

};

void exibe_carros(Carro c[],int tam){
    for(int i = 0; i <= tam; i++){
        cout << "Nome: " << c[i].nome << endl;
        cout << "Preco: " << c[i].preco << endl;
        cout << endl;
    }
}
// Ordenação com buble sort
void buble(Carro *pcarros, int tam)
{
    int i, j;
    Carro aux;
    for(i = tam; i >= 0; i--)
    {
       for(j = 1; j<= i; j++)
       {
            if(strcmp(pcarros[j-1].nome, pcarros[j].nome) > 0)
            {
                aux = pcarros[j-1];
                pcarros[j-1] = pcarros[j];
                pcarros[j] = aux;
            }
       } 
    }
}

int main()
{
    Carro carros[MAX];
    int i = 0;
    char resp;
    while(1)
    {
        cout << "Digite o nome: "  <<  endl;  
        cin >> carros[i].nome;
        cout << "Digite o preco: "  <<  endl;
        cin >> carros[i].preco;
        cout << "Continuar? <S/N>" << endl;
        cin >> resp;
        if(resp != 'S')
        {
            break;
        }
        i++;
        if(i == MAX)
            break;  
    }
    buble(carros,i);
    exibe_carros(carros, i);
    return 0;
}   