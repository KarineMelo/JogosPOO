//Corrida de carros
// entrada e saida de dados
#include <iostream> 
//Permite usar um  tipo de dado String
#include <string>
//permite usar o tempo como "semente" do gerador
#include <ctime>
using namespace std;

//indica fun��o void criada
void imprimir_espacos(int total1);

// fun��o principal
int main(int argc, char* args[])
{

	bool sair = false; //Variavel logica usada na condi��o do la�o
	string jog1, jog2; // Variaveis usadas para salvar o nome dos jogadores
	int total1 = 0, total2 = 0;// quantidade inicial de espa�os de cada carro

	cout << "Digite o nome do jogador 1:" << endl; // Pede para que o jogador 1 digite seu nome.
	cin >> jog1; //Salva o nome digitado na variavel 

	cout << "Digite o nome do jogador 2:" << endl; // pede para que o jogador 2 digite seu nome
	cin >> jog2; //Salva o nome digitado na variavel 
	
	// enquanto a variavel receber a condi��o logica falsa o la�o continua 
	while (sair == false)
	{


		//idica o tamanho da pista.
		int total_espacos = 80;

		//comando uasado para que possa usar o comando rand fazer com que a variavel receba um numero aleatorio 
		srand((int)time(0));
		//Gera um n�mero aleatorio entre 1 e 3
		total_espacos = rand() % 3 + 1;
		// Adiciona o numero gerado na variavel para aumentar a quatidade de espa�os
		total1 = total1 + total_espacos;

		//Gera um n�mero aleatorio entre 1 e 3
		total_espacos = rand() % 3 + 1;
		// Adiciona o numero gerado na variavel para aumentar a quatidade de espa�os
		total2 = total2 + total_espacos;

		//mostra a imagem do jogo e os status dos personagens

		cout << " Pista da MCtoy :" << endl;

		cout << " LARGADA:                                                               CHEGADA:" << endl;

		cout << " jogador 1:" << jog1 << endl; // usa o nome salvo na variavel jog1
		imprimir_espacos(total1);//usa o numero gerado para aumentar a quantidade de espa�os 
		cout << "  _  " << endl;// teto do carro
		imprimir_espacos(total1);//usa o numero gerado para aumentar a quantidade de espa�os
		cout << "-o-o>" << endl;// rodas do carro
		cout << "_______________________________________________________________________________" << endl;//pista de corrida

		cout << " Voc� avan�ou  " << total1 << endl;  //quantidades de espa�os avan�ados 


		cout << "Piloto 2:" << jog2 << endl;// usa o nome salvo na variavel jog2
		imprimir_espacos(total2);//usa o numero gerado para aumentar a quantidade de espa�os 
		cout << "  _  " << endl;// teto do carro
		imprimir_espacos(total2);//usa o numero gerado para aumentar a quantidade de espa�os
		cout << "-o-o>" << endl;// rodas do carro
		cout << "_______________________________________________________________________________" << endl;//pista de corrida



		cout << " Voc� avan�ou  " << total1 << endl;  //quantidades de espa�os avan�ados 


		//limpa a tela
		system("cls");


		// limpa a tela

		// testa se o caminha percorrido por algum jogador for = 80, executa o if para que a variavel logica se torne verdadeira e o la�o acaba
		if (total1 >= 80 || total2 >= 80)
		{
			sair = true;

		}

		//limpa a tela.
		else system("cls");


	}

	// mostra que o jogo acabou
	cout << "Fim de jogo!" << endl;

	//mostra se tem algum vencendor 
	if (total1 >= 80) cout << jog1 << "Voc� venceu! uhul!" << endl;

	else if (total2 >= 80) cout << jog2 << " Voc� venceu! uhul! " << endl;

	else cout << "EMPATE!" << endl;

	return 0; 

}



void imprimir_espacos(int total) //usa a fun��o void como "Super poder".
{

	for (int qntd_espacos = 0; qntd_espacos < total; qntd_espacos++)// La�o for 
	{
		cout << " ";// imprime os espa�os gerados aleatoriamente


	}

}