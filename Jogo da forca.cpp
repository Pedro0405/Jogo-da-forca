
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	char palavra[30], letra[1], secreta[30];
	int t,i,chances, acertos;
	bool acerto;
	
	chances=6;
	t=0;
	i=0;
	acerto=false;
	acertos=0;
	
	cout<<"fale para seu amigo nao olhar para o pc e digite a palavra secretra \n";
	cin>>palavra;
	system("cls");
	
	while(palavra[i] != '\0'){
		i++;
		t++;
	}
	for (i=0;i<30;i++){
	
	secreta[i]='-';}
	
	
	while(chances>0 and acertos<t){
		cout<<"chances restantes: "<< chances <<"\n";
		cout<<"palavra secreta ";
		for(i=0;i<t;i++){
			cout<< " "<<secreta[i]<<" ";
		}
		cout<<"\ndigite uma letra \n";
		cin>>letra[0];
		for(i=0;i<t;i++){
			if(palavra[i]==letra[0]){
				acerto=true;
				secreta[i]=palavra[i];
				acertos++;	
			}
		}
		if(not acerto){
			chances--;
		}
			acerto=false;
			system("cls");
			
	}
	if(acertos==t){
		cout<<"Parabens, voce venceu \n";
	}
	else{
		cout<<"Que pena, voce perdeu  \n";
		cout<<"a paalavra era "<<palavra <<" ";	}
	
	system("pause");
	
	
	 
	
	
	
	
	
	
	return 0;
}


