#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;

char poltronas1[30][30], poltronas2[30][30], poltronas3[30][30];
int filme, val, linha[3], coluna[3];

void mostrarPoltrona(){
	
	switch(filme) {
		
		case 1:
			for(int i = 0; i < 30; i++){
				if (i < 9)
				   cout << i + 1 << "       ";
				else
				   cout << i + 1 << "      ";
	 	
			    for(int j = 0; j < 30; j++){
			       cout << poltronas1[i][j] << "   ";
				}
			       cout << "\n";
			}
			
		    cout << "       ";
		    
		    for(int i = 0; i < 30; i++){
		    	if(i < 9)
		    	   cout << i + 1 << "   ";
		    	
		    	else 
				   cout << i + 1 << "  ";
			}
			
			cout << "\n\n";
			
			break;
			
		case 2:
			for(int i = 0; i < 30; i++) {
				if(i < 9)
				   cout << i + 1 << "      ";
				else 
				   cout << i + 1 << "     ";
				
				for(int j = 0; j < 30; j++) {
				   cout << poltronas2[i][j] << "   ";
				}
				   cout << "\n";  
			}
			
			cout << "       ";
			
			for(int i = 0; i < 30; i++){
				if(i < 9)
				   cout << i + i << "   ";
				else
				   cout << i + 1 << "  ";
			}
			
			cout << "\n\n";
			
			break;
			
		case 3:
			for(int i = 0; i < 30; i++){
				if(i < 9)
				   cout << i + 1 << "      ";
				else
				   cout << i + 1 << "     ";
				
				for(int j = 0; j < 30; j++){
				   cout << poltronas3[i][j] << "   ";
				}
				cout << "\n";
			}
			
			cout << "       ";
			
			for(int i = 0; i < 30; i++){
				if(i < 9)
				   cout << i + 1 << "   ";
				else
				   cout << i + 1 << "  ";
			}
			
			cout << "\n\n";
			
			break;
	}
}

void marcarPoltronas(){
	switch(filme) {
		case 1:
			poltronas1[linha[0] - 1][coluna[0] - 1] = '0';
			break;
		case 2:
		    poltronas2[linha[1] - 1][coluna[1] - 1] = '0';
		    break;
		case 3:
		    poltronas3[linha[2] - 1][coluna[2] - 1] = '0';
		    break;
	}
}

void desfazerPoltrona(){
	switch(filme) {
		case 1:
			poltronas1[linha[0] - 1][coluna[0] - 1] = 'x';
			break;
		case 2:
		    poltronas2[linha[1] - 1][coluna[1] - 1] = 'x';
			break;
		case 3:
		    poltronas3[linha[2] - 1][coluna[2] - 1] = 'x';
			break;	
	}
}

void verificarPoltronas(){
	switch(filme) {
		case 1:
			if(poltronas1[linha[0] - 1][coluna[0] - 1] == '-') {
				cout << "\n\nEssa poltrona já está em uso.\n\n";
				val = 1;
			} else
			    val = 0;
			break;
			
		case 2:
			if(poltronas2[linha[1] - 1][coluna[1] - 1] == '-') {
				cout << "\n\nEssa poltrona já está em uso.\n\n";
				val = 1;
			} else
			    val = 0;
			break;
			
		case 3:
			if(poltronas3[linha[2] - 1][coluna[2] - 1] == '-') {
				cout << "\n\nEssa poltrona já está em uso.\n\n";
				val = 1;
			} else
			    val = 0;
			break;
	}
}

void mudarValor(){
	switch(filme){
		case 1:
			poltronas1[linha[0] - 1][coluna[0] - 1] = '-';
			break;
		case 2:
			poltronas2[linha[1] - 1][coluna[1] - 1] = '-';
			break;
		case 3:
			poltronas3[linha[2] - 1][coluna[2] - 1] = '-';
			break;
	}
}

bool sessaoCheia(){
	switch(filme){
		case 1:
			for(int i = 0; i < 30; i++){
				for(int j = 0; j <30; j++){
					if(poltronas1[i][j] != '-')
					return false;
				}
			}
	        break;
	    case 2:
	    	for(int i = 0; i < 30; i++){
	    		for(int j = 0; j < 30; j++){
	    			if(poltronas2[i][j] != '-')
	    			return false;
				}
			}
			break;
		case 3:
			for(int i = 0; i < 30; i++){
				for(int j = 0; j < 30; j++){
					if(poltronas3[i][j] != '-')
					return false;
				}
			}
			break;
	}
	return true;
}

void trancarSessao() {
	system("cls");
	cout << "                                       -------------------------------------\n";
	cout << "                                             QUAL SESSÃO DESEJA FECHAR\n";
	cout << "                                       -------------------------------------\n";
	cout << "                                          filme 1      filme 2	   filme 3\n\n";
	cout << "                                            [1]          [2]          [3]\n\n";
	cin >> filme;
	
	switch(filme){
		case 1:
			for(int i = 0; i < 30; i++){
				for(int j = 0; j < 30; j++){
					poltronas1[i][j] = '-';
				}
			}
			break;
		case 2:
			for(int i = 0; i < 30; i++){
				for(int j = 0; j < 30; j++){
					poltronas2[i][j] = '-';
				}
			}
			break;
		case 3:
			for(int i = 0; i < 30; i++){
				for(int j = 0; j < 30; j++){
					poltronas3[i][j] = '-';
				}
			}
			break;
	}
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	for(int i = 0; i < 30; i++) {
		for(int j = 0; j < 30; j++) {
			poltronas1[i][j] = 'x';
			poltronas2[i][j] = 'x';
			poltronas3[i][j] = 'x';
		}
	}
	
	do {
		do {
			do{
				cout << "                                       -------------------------------------\n";
				cout << "                                                 ESCOLHA O FILME\n";
				cout << "                                       -------------------------------------\n";
				cout << "                                          filme 1      filme 2	   filme 3\n\n";
				cout << "                                            [1]          [2]          [3]\n\n";
				cin >> filme;
				
				if(filme != 1 && filme != 2 && filme != 3 && filme != 1234){
					system("cls");
					cout << "\n\n         Número inválido\n\n\n";
					system("pause");
					system("cls");
				}
				
				else if (filme == 1234)
				    trancarSessao();
				    
				else if (sessaoCheia()) {
					cout << "\n\nA sessão selecionada está completamente cheia.\n\n\n\n\n             Escolha outro filme.\n\n";
					system("pause");
					system("cls");
				}
				system("cls");
				
			}while(filme != 1 && filme != 2 && filme != 3);
			
		}while(sessaoCheia());
		
		do{
			system("cls");
			
			do{
				cout << "                                       -------------------------------------\n";
				cout << "                                                 ESCOLHA SUA POLTRONA\n";
				cout << "                                       -------------------------------------\n";
				cout << "                                                         TELA\n\n";
				
				mostrarPoltrona();
				
				do{
					do{
						cout << "Digite a linha da sua poltrona: ";
						cin >> linha[filme - 1];
						
						if(linha[filme - 1] < 1 || linha[filme - 1] > 30)
						    cout << "\nNúmero inválido\n\n";
						    
					}while(linha[filme - 1] < 1 || linha[filme - 1] > 30);
					
					do{
						cout << "Digite a coluna da sua poltrona: ";
						cin >> coluna[filme - 1];
						
						if(coluna[filme - 1] < 1 || coluna[filme - 1] > 30)
						    cout << "\n\nNúmero invalido\n\n";
						
					}while(coluna[filme - 1] < 1 || coluna[filme - 1] > 30);
					
					verificarPoltronas();
					
					switch(filme){
						case 1:
							if(poltronas1[linha[0] - 1][coluna[0] - 1] != '-')
							    marcarPoltronas();
							break;
						case 2: 
						    if(poltronas2[linha[1] - 1][coluna[1] - 1] != '-')
						        marcarPoltronas();
						    break;
						case 3: 
						    if(poltronas3[linha[2] - 1][coluna[2] - 1] != '-')
							    marcarPoltronas();
						    break; 
					}	
				}while(val == 1);
				
				system("cls");
				
				cout << "                                       -------------------------------------\n";
				cout << "                                                 ESCOLHA SUA POLTRONA\n";
				cout << "                                       -------------------------------------\n";
				cout << "                                                         TELA\n\n";
				
				mostrarPoltrona();
				
				do{
					cout << "Tem certeza?\n\n";
					cout << "[0]Sim   [1]Não\n\n";
					cin >> val;
					
					if(val == 1) {
						system("cls");
						desfazerPoltrona();
					}
					else if(val != 0 && val != 1)
					    cout << "\n\nNúmero invalido\n\n";
					    
				}while(val != 0 && val != 1);
			}while(val == 1);
			
			val = 0;
			
			do{
				cout << "Deseja adicionar outra poltrona?";
				cout << "\n[0]Sim   [1]Não\n\n";
				cin >> val;
				
				mudarValor();
				
				if(val != 0 && val != 1);
				    cout << "\n\nNúmero invalido\n\n";
				    
			}while(val != 0 && val != 1);
			
		}while(val == 0);
		
		system("cls");
		
		cout << "\n\n                                       -------------------------------------\n";
		cout << "                                                     BOM FILME\n";
		cout << "                                       -------------------------------------\n";
		
		val = 1;
		system("pause");
		system("cls");
	}while(val == 1);
	
	return 0;
}
