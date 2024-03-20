#include <iostream>
using namespace std;

/*Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das 
informações número de anos que ele fuma, quantidade] de cigarros fumados por dia e preço de 
uma carteira. 
*/

int main()
{
	int qntDin;
	int qntCiga;
	int qntCart;
	float preCiga;
	double preCart;
	int numeAnos;
	int numeDias;
	int totalCiga;
	
	cout << "Ha quantos anos voce fuma?: \n";
	cin >> numeAnos;
	cout << "Quantos cigarros voce fuma por dia?: \n";
	cin >> qntCiga;
	cout << "Quantos cigarros vem na carteira?: \n";
	cin >> qntCart;
	cout << "Qual o preco da carteira de cigarro?: \n";
	cin >> preCart;
	
	preCiga = qntCart/preCart;
	numeDias = numeAnos*365;
	totalCiga = numeDias*qntCiga;
	qntDin = totalCiga*preCiga;
	
	cout << "Voce ja gastou um total de: " << qntDin << " reais em cigarros. \n";
}

 
