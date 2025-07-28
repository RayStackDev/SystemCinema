#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;

char poltronas1[30][30], poltronas2[30][30], poltronas3[30][30];
int filme, val, linha[3], coluna[3];

void mostrarPoltrona() {
	
	switch(filme) {
		
		case 1:
			for(int i = 0; i < 30; i++){
				if (i < 9)
				   cout << i + 1 << "       ";
				else
				   cout << i + 1 <<"      ";
	 	
			    for(int j = 0; j < 30; j++){
			       cout << poltronas1[i][j] << "   ";
				}
			       cout << "\n";
			}
			
		    cout << "       ";
		    
		    for(int i = 0; i < 30; i++){
		    	if(i < 9)
		    	   cout << i + 1 << "   ";
		    	
		    	else << i + 1 << "  ";
			}
			
			cout << "\n\n";
			
			break;
			
		case 2:
			for(int i = 0, i < 30, i++) {
				if(i < 9)
				   cout << i + 1 << "      ";
				else 
				   cout << i + 1 << "     ";
				
				for(int j = 0; j < 30;++) {
				   cout << poltronas2[i][j] << "   ";
				}
				   cout << "\n";  
			}
			
			cout << "       ";
			
			for(int i = 0; i < 30; i++0){
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
