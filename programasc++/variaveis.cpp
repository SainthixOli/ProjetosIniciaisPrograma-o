
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void gayzada(bool talvez) {
    if(talvez) {
        cout << " SIMMMMMMMMMMMMM!\n\n" << endl;
    } else {
        cout << " NAOOOOOO!\n\n" << endl;
    }
}


int main()
{
    int idade;
    string nome;
    double altura;
    char sexo;
    bool gayOuNao;

    idade = 19;
    nome = "Oliver";
    altura = 1.80;
    sexo = 'M';
    gayOuNao = true;
    
    cout << fixed << setprecision(2);
    cout << "\n\nIdade = " << idade << endl;
    cout << "Nome = " << nome << endl;
    cout << "Altura = " << altura << endl;
    cout << "Sexo = " << sexo << endl;
    
    cout << "O HOMI É GAY OU NAO?";
    gayzada(gayOuNao); 

    cout << "\n\nO " << nome << " que tem " << idade << " anos de idade, com altura de " << altura << " do sexo " << sexo << " É GAY OU  NAO? ";
    gayzada(gayOuNao); 
    return 0;
}