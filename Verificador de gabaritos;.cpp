// ex 10 
#include <iostream>
#include <conio.h>

using namespace std;

char gabarito[10], resposta[10], op, op1;
int total, aprovado, reprovado, i;


void gabaritos(){
	cout << "\n\nDigite as respostas do gabarito :";
	for(i=0;i<10;i++){
		cout << "\nDigite a resposta : \n .a .b .c .d .e \n";
			gabarito[i]=getch();

		if (gabarito[i] != 'a' && gabarito[i] != 'b' && gabarito[i] != 'c' && gabarito[i] != 'd' && gabarito[i] != 'e') {
			cout << "\n\n--opcao invalida--";
			cout << "\nVoltando ao inicio ...";
			system("cls");
			return gabaritos();
		}
	}
	}
	
void respostas(){
	system("cls");
	cout << "\nDigite as respostas do aluno :";
	for(i=0;i<10;i++){
		cout << "\nDigite a resposta : \n .a .b .c .d .e";
		resposta[i] = getch();
        cout << "\nResposta " << i << " confirmada";

		if (resposta[i] != 'a' && resposta[i] != 'b' && resposta[i] != 'c' && resposta[i] != 'd' && resposta[i] != 'e') {
			cout << "\n\n--opcao invalida--";
			cout << "\nVoltando ao inicio ...";
			system("cls");
			return respostas();
		}
		
	}
}
	
main() {
	
	gabaritos();
	respostas();
	
	for(i=0;i<10;i++){
		if(gabarito[i]==resposta[i]){
			cout << "\n[v] .Acertou a questao" << i;
			total++;
		} else {
			cout << "\n[x] .Errou a questao" << i;
		}
	}
	
	cout << "\nO total de questoes acertas foi : " << total;
	
	if(total>=6){
		cout << "\n********************";
		cout << "\n***Aluno Aprovado***";
		cout << "\n********************";
	} else { 
	    cout << "\n********************";
		cout << "\n***Aluno reprovado**";
		cout << "\n********************";
	}
	
	
	
	
	
	
}
