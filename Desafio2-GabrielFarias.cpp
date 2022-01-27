#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int contador=0;
    while (contador != 1){
        cout << "Digite 1 para somar" << endl;
        cout << "Digite 2 para subtrair" << endl;
        cout << "Digite 3 para multiplicar" << endl;
        cout << "Digite 4 para dividir" << endl;
        cout << "Digite 5 para o resto de uma divisão " << endl;
        cout << "Digite 6 para a raiz quadrada " << endl;
        cout << "Digite 7 para o fatorial " << endl;
        int escolha_usuario = 0;
        cin >> escolha_usuario;

        if (escolha_usuario != 6 && escolha_usuario != 7){
            cout << "Digite o primeiro numero: " << endl;
            int x = 0;
            cin >> x;

            cout << "Digite o segundo numero: " << endl;
            int y = 0;
            cin >> y;

            if (escolha_usuario == 1){
                cout << "O resultado da soma é "<< x + y << endl;
            }
            else if (escolha_usuario == 2){
                cout << "O resultado da subtração é "<< x - y << endl;
            }
            else if (escolha_usuario == 3){
                cout << "O resultado da multiplicação é "<< x * y << endl;
            }
            else if (escolha_usuario == 4){
                if (y == 0){
                    cout << "Não é possivel dividir por zero" << endl;
                }
                else{
                    cout << "O resultado da divisão é "<< x / y << endl; 
                }
            }
            else if (escolha_usuario == 5){
                cout  << "O resto da divisão é " << x % y << endl;
            }
        }
        else{
            cout << "Digite o número " << endl;
            int z = 0;
            cin >> z;

            if (escolha_usuario == 6){
                cout << "A raiz é " << sqrt(z) << endl;
            }
            else if (escolha_usuario == 7){
                int i, f;
                f=1;
                for (i = 1; i <= z; i++){
                    f*=i;
                }

                cout << "O fatorial é " << f << endl;
            }
        }
        cout << "Digite 1 para realizar uma nova operação ou 2 para encerrar "<< endl;
        int decisao=0;
        cin>>decisao;

        if (decisao==1){
            contador=0;
        }
        else if (decisao == 2){
            cout << "Adeus " << endl;
            contador=1;
        }
    }
    
    return 0;
}