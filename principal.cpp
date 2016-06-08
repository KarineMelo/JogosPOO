// entrada e saida de dados
#include <iostream>
//Permite usar um  tipo de dado String
#include <string>
//permite usar o tempo como "semente" do gerador
#include <ctime>

using namespace std;

//Fuñção principal
int main(int argc, char* args[])
{
	bool sair = false; //Variavel logica usada na condição do laço
	string jog1, jog2; //Variaveis usadas para salvar o nome dos jogadores
	int vida1 = 20, vida2 = 20; // vida inicial dos jogadores
	int A = 4, D = 2; // ataque e defesa dos jogadores


	cout << "Digite o nome do jogador 1:" << endl; // Pede para que o jogador 1 digite seu nome.
	cin >> jog1; //Salva o nome digitado na variavel 

	cout << "Digite o nome do jogador 2:" << endl; // pede para que o jogador 2 digite seu nome
	cin >> jog2; //Salva o nome digitado na variavel 
	
	// enquanto a variavel receber a condição logica falsa o laço continua 
	while (sair == false) {

		//mostra os guerreiros e os dados do jogador
		cout << " o                       o" << endl;
		cout << ".T./                   \\.T." << endl;
		cout << " ^                       ^" << endl;
		cout << jog1 << "             " << jog2 << endl;
		cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;
		cout << "A:" << A << "           " << "A:" << A << endl;
		cout << "D:" << D << "           " << "D:" << D << endl;


		system("pause"); //o jogo pausa para que o jogador espere que as ações abaixo aconteçam 

		int dado6; //variavel usada para receber aleatoriamente o numero do dado 

		//comando uasado para que possa usar o comando rand fazer com que a variavel receba um numero aleatorio 
		srand((int)time(0));
		//Gera um número aleatorio
		dado6 = rand() % 6 + 1;

		//Se o número gerado for maior que quatro, executa o if
		if (dado6 > 4)
		{
			vida1 = vida1 - dado6; // usa o numero gerado como dano na vida do jogador
			cout << jog1 << " Dano:" << -dado6 << endl; // Mostra o dano  na vida do jogador
			cout << jog2 << " Acertou! " << endl;// diz que o jogador causou o dano
			cout << " Proxima jogada (Digite enter):" << endl;// manda apertar o enter para continuar
			cin.get();// espera que o jogador digite enter  
		}
		//Se o numero gerado for menor ou igual a quatro, executa else if.
		else if (dado6 <= 4)
		{

			cout << jog2 << " Errou! " << endl; //Mostra que o jogador errou
			cout << " Proxima jogada (Digite enter): " << endl;// manda apertar o enter para continuar 
			cin.get();//espera que o jogador digite enter  

		}
		//Mesma coisa para o jogador 2
		dado6 = rand() % 6 + 1;

		//Se o número gerado for maior que quatro, executa o if
		if (dado6 > 4)
		{

			vida2 = vida2 - dado6; //  usa o numero gerado como dano na vida do jogador
			cout << jog2 << " Dano:" << -dado6 << endl;//  Mostra o dano  na vida do jogador
			cout << jog1 << " Acertou!" << endl;// diz que o jogador causou o dano
			cout << " Proxima jogada (Digite enter):" << endl; //  manda apertar o enter para continuar 
			cin.get();//espera que o jogador digite enter  
		}
		//Se o número gerado for menor ou igual a quatro, executa o else if
		else if (dado6 <= 4) {

			cout << jog1 << " Errou!" << endl; //Mostra que o jogador errou
			cout << " Proxima jogada (Digite enter):" << endl; // manda apertar o enter para continuar
			cin.get();//espera que o jogador digite enter  

		}
		// mostra os status dos jogadores spos o final da rodada 
		cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;

		system("cls"); //Limpa a tela. se sair não limpa
		
					   
		// testa se a vida de algum jogador for = 0, executa o if para que a variavel logica se torne verdadeira e o laço acaba
		if (vida1 <= 0 || vida2 <= 0)
		{

			sair = true;
		}
		// se não for limpa a tela
		else system("cls");
	}

	//Mostra o fim do jogo
	cout << "Fim de jogo!" << endl;

	//Mostra se tem algum vencendor
	if (vida1 > 0) cout << jog1 << "Venceu!" << endl;
	else if (vida2 > 0) cout << jog2 << "Venceu!" << endl;
	else cout << "Os dois perderam!" << endl;
	return 0;


}
