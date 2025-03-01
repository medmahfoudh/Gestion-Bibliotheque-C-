#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

//Author By M_BOUNA

int counter = 0;

class Bibliotheque{
protected:


    string Id,Titre , Auteur , Edition ;
public:

		void setId(string a){Id = a;}
		void setTitre(string b){Titre = b;}
		void setAuteur(string c){Auteur = c;}
		void setEdition(string d){Edition = d;}

		//getters - getting the values from private variables
		string getId(){return Id;}
		string getTitre(){return Titre;}
		string getAuteur(){return Auteur;}
		string getEdition(){return Edition;}

};
void increment(int i){
    i++;
    counter=i;
}
void decrement(int i){
    i--;
    counter=i;
}
void quit(){
	//quit function
	_Exit(1);
}

class Livre: public Bibliotheque{
protected:
    string NbrePage;
public:
    void setNbrePage(string e){NbrePage = e;}
    string getNbrePage(){return NbrePage;}


};
void AjouterLivre(int counter);
void SupprimerLivre(int counter);
void EditLivre(int counter);
void ChercheLivre(int counter);
void DisplayLivre(int counter);


class CD : public Bibliotheque{
protected:
    string duree;
public:
    void setDuree(string Duree){duree = Duree;}
    string getDuree(){return duree;}

};
void AjouterCD(int counter);
void SupprimerCD(int counter);
void EditCD(int counter);
void ChercheCD(int counter);
void DisplayCD(int counter);
class Casette: public Bibliotheque {
protected:
    string duree;
public:
    void setDuree(string Duree){duree = Duree;}
    string getDuree(){return duree;}

};
void AjouterCasette(int counter);
void SupprimerCasette(int counter);
void EditCasette(int counter);
void ChercheCasette(int counter);
void DisplayCasette(int counter);

void quitter();
Livre livre[10];
CD cd[10];
Casette casette[10];


int main(){
int choix;
int choix_multimedia;
int choix_cd;
int choix_casette;
system("CLS");
cout<<"GESTION D'UN BIBILOTHEQUE \n \n \n \n ";
cout<<"ENTRER VOITRE CHOIX: \n ";
cout<<"\n[1]AJOUTER UN LIVRE\n";
cout<<"[2]SUPPRIMER UN LIVRE\n";
cout<<"[3]EDIT UN LIVRE\n";
cout<<"[4]RECHERCHE UN LIVRE\n";
cout<<"[5]VOIR TOUS LES LIVRES\n";
cout<<"[6]MULTIMEDIA " ;
cout<<"\n[7]QUITTER\n\n";
cin>>choix;
system("CLS");

if(choix == 1){AjouterLivre(counter);}
else if (choix == 2){SupprimerLivre(counter);}
else if (choix == 3){EditLivre(counter);}
else if (choix == 4){ChercheLivre(counter);}
else if (choix == 5){DisplayLivre(counter);}
else if (choix == 6){
    cout<<"CHOIX LE TYPE DU MULTIMEDIA";
    cout<<"/n[1] CD\n" ;
    cout<<"[2]CASETTE\n";
    cin>>choix_multimedia;
    if (choix_multimedia == 1){
        cout<<"CD \n" ;
        cout<<"ENTRER VOITRE CHOIX: \n ";
        cout<<"\n[1]AJOUTER UN CD\n";
        cout<<"[2]SUPPRIMER UN CD\n";
        cout<<"[3]EDIT UN CD\n";
        cout<<"[4]RECHERCHE UN CD\n";
        cout<<"[5]VOIR TOUS LES CD\n";
        cout<<"\n[6]QUITTER\n";
        cin>>choix_cd;
        switch(choix_cd){
            case 1:
            AjouterCD(counter);
            break;
            case 2:
            SupprimerCD(counter);
            break;
            case 3:
            EditCD(counter);
            break;
            case 4:
            ChercheCD(counter);
            break;
            case 5:
            DisplayCD(counter);
            break;
            default:
            main();
            }
        }
    else if(choix_multimedia == 2){
        cout<<"CASETTE \n" ;
        cout<<"ENTRER VOITRE CHOIX: \n ";
        cout<<"[1]AJOUTER UN CASETTE\n";
        cout<<"[2]SUPPRIMER UN CASETTE\n";
        cout<<"[3]EDIT UN CASETTE\n";
        cout<<"[4]RECHERCHE UN CASETTE\n";
        cout<<"[5]VOIR TOUS LES CASETTES\n";
        cout<<"[6]QUITTER\n\n";
        cin>>choix_casette;
        switch(choix_casette){
            case 1:
                AjouterCasette(counter);
                break;
            case 2:
                SupprimerCasette(counter);
                break;
            case 3:
                EditCasette(counter);
                break;
            case 4:
                ChercheCasette(counter);
                break;
            case 5:
                DisplayCasette(counter);
                break;
            default:
                main();
            }

    }
    else{
        main();
    }
}
else if(choix == 7){
    quit();
}
else {
    main();
}
_getch();
return 0;

}



void AjouterLivre(int counter){
    string Id,Titre,Auteur,Edition;
	cout<<"AJOUTER UN LIVRE\n\n";
	if(counter<10){
		cout<<"Entrer Id: ";
		cin>>Id;
		cout<<"Entrer Titre: ";
		cin>>Titre;
		cout<<"Entrer Le nom de l'auteur : ";
		cin>>Auteur;
		cout<<"Enter Edition: ";
		cin>>Edition;

		livre[counter].setId(Id); //assigning the values entered to book object
		livre[counter].setTitre(Titre);
		livre[counter].setAuteur(Auteur);
		livre[counter].setEdition(Edition);

		increment(counter);	//calling function to increment counter
		cout<<"\nLIVRE AJOUTE AVEC SUCCES!\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
		_getch();
		main();
	}
	else{
		cout<<"VOUS AVEZ ATTEINT LE NOMBRE MAXIMUM DE LIVRES A AJOUTER!\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
		_getch();
		main();
	}
}

void AjouterCD(int counter){
    string Id,Titre,Auteur,Edition;
    string duree;
	cout<<"AJOUTER UN CD\n\n";
	if(counter<10){
		cout<<"Entrer Id: ";
		cin>>Id;
		cout<<"Entrer Titre: ";
		cin>>Titre;
		cout<<"Entrer Le nom de l'auteur : ";
		cin>>Auteur;
		cout<<"Enter Edition: ";
		cin>>Edition;
		cout<<"Enter Le Duree: ";
		cin>>duree;

		cd[counter].setId(Id); //assigning the values entered to book object
		cd[counter].setTitre(Titre);
		cd[counter].setAuteur(Auteur);
		cd[counter].setEdition(Edition);
		cd[counter].setDuree(duree);

		increment(counter);	//calling function to increment counter
		cout<<"\nCD AJOUTE AVEC SUCCES!\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
		_getch();
		main();
	}
	else{
		cout<<"VOUS AVEZ ATTEINT LE NOMBRE MAXIMUM DE LIVRES A AJOUTER!\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
		_getch();
		main();
	}
}

void AjouterCasette(int counter){
    string Id,Titre,Auteur,Edition, duree;
	cout<<"AJOUTER UN CASETTE\n\n";
	if(counter<10){
		cout<<"Entrer Id: ";
		cin>>Id;
		cout<<"Entrer Titre: ";
		cin>>Titre;
		cout<<"Entrer Le nom de l'auteur : ";
		cin>>Auteur;
		cout<<"Enter Edition: ";
		cin>>Edition;
		cout<<"Enter Le Duree: ";
		cin>>duree;

        casette[counter].setId(Id); //assigning the values entered to book object
		casette[counter].setTitre(Titre);
		casette[counter].setAuteur(Auteur);
		casette[counter].setEdition(Edition);
		casette[counter].setDuree(duree);

		increment(counter);	//calling function to increment counter
		cout<<"\nCASETTEE AJOUTE AVEC SUCCES!\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
		_getch();
		main();
	}
	else{
		cout<<"VOUS AVEZ ATTEINT LE NOMBRE MAXIMUM DE LIVRES A AJOUTER!\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
		_getch();
		main();
	}
}
void SupprimerLivre(int counter){
	string Id;
	int choix;
	cout<<"SUPPRIMER UN LIVRE\n\n";
	if(counter==0){
		cout<<"IL N'Y A AUCUN LIVRE A SUPPRIMER!\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
		_getch();
		main();
	}
	cout<<"Enter Id: ";
	cin>>Id;

	for(int i=0;i<counter;i++){
		//finding a match using for loop
		if(livre[i].getId()==Id){
			cout<<"\nLIVRE TROUVE\n\n";
			cout<<"Voulez-vous supprimer ?\n[1]Oui\n[2]Non\n\nEntrez votre choix: ";
			cin>>choix;
			if(choix==1){
				livre[i].setId(""); //setting the value to none
				livre[i].setTitre("");
				livre[i].setAuteur("");
				livre[i].setEdition("");
				for(int a=i;a<counter;a++){
					//adjusting the values after deletion of data eg. data from book[4] copied to book[3]
					livre[a] = livre[a+1];
				}
				livre[9].setId(""); //adjustment if the library is full(10 books)
				livre[9].setTitre("");
				livre[9].setAuteur("");
				livre[9].setEdition("");
				decrement(counter); //calling function to decrement counter
				cout<<"\nLIVRE SUPPRIME AVEC SUCCES !\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
                _getch();
				main();
			}
			else{
				main();
			}
		}
	}
	cout<<"\nLIVRE INTROUVABLE !\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
    _getch();
	main();

}

void SupprimerCD(int counter){
	string Id;
	int choix;
	cout<<"SUPPRIMER UN CD\n\n";
	if(counter==0){
		cout<<"IL N'Y A AUCUN CD A SUPPRIMER!\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
		_getch();
		main();
	}
	cout<<"Entrer Id: ";
	cin>>Id;

	for(int i=0;i<counter;i++){

		if(cd[i].getId()==Id){
			cout<<"\nCD TROUVE\n\n";
			cout<<"Voulez-vous supprimer ?\n[1]Oui\n[2]Non\n\nEntrez votre choix: ";
			cin>>choix;
			if(choix==1){
				cd[i].setId("");
				cd[i].setTitre("");
				cd[i].setAuteur("");
				cd[i].setEdition("");
				cd[i].setDuree("");
				for(int a=i;a<counter;a++){

					cd[a] = cd[a+1];
				}
				cd[9].setId("");
				cd[9].setTitre("");
				cd[9].setAuteur("");
				cd[9].setEdition("");
				cd[9].setDuree("");
				decrement(counter);
				cout<<"\nCD SUPPRIME AVEC SUCCES !\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
				_getch();
				main();
			}
			else{
				main();
			}
		}
	}
	cout<<"\nCD INTROUVABLE !\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
	_getch();
	main();

}

void SupprimerCasette(int counter){
	string Id;
	int choix;
	cout<<"SUPPRIMER UN Casette\n\n";
	if(counter==0){
		cout<<"IL N'Y A AUCUN CASETTE A SUPPRIMER!\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
		_getch();
		main();
	}
	cout<<"Entrer Id: ";
	cin>>Id;

	for(int i=0;i<counter;i++){
		//finding a match using for loop
		if(casette[i].getId()==Id){
			cout<<"\nCASETTE TROUVE\n\n";
			cout<<"Voulez-vous supprimer ?\n[1]Oui\n[2]Non\n\nEntrez votre choix: ";
			cin>>choix;
			if(choix==1){
				casette[i].setId(""); //setting the value to none
				casette[i].setTitre("");
				casette[i].setAuteur("");
				casette[i].setEdition("");
				casette[i].setDuree("");
				for(int a=i;a<counter;a++){
					//adjusting the values after deletion of data eg. data from book[4] copied to book[3]
					casette[a] = casette[a+1];
				}
				casette[9].setId(""); //adjustment if the library is full(10 books)
				casette[9].setTitre("");
				casette[9].setAuteur("");
				casette[9].setEdition("");
				casette[9].setDuree("");
				decrement(counter); //calling function to decrement counter
				cout<<"\nCD SUPPRIME AVEC SUCCES !\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
				_getch();
				main();
			}
			else{
				main();
			}
		}
	}
	cout<<"\nCASETTE INTROUVABLE !\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
	_getch();
	main();

}

void EditLivre(int counter){
	system("CLS");
	string editId,choix;
	string Id,Titre,Auteur,Edition;
	cout<<"\nEDIT LIVRE\n\n";
	if(counter==0){
		cout<<"IL N'Y A AUCUN LIVRE À MODIFIER !\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
		_getch();
		main();
	}
	cout<<"Enter Id: ";
	getline(cin,editId);
	for(int i=0;i<counter;i++){
		//finding a match using for loop
		if(livre[i].getId()==editId){
			cout<<"\nLIVRE TROUVE !\n\n";
			cout<<"Id: "<<livre[i].getId()<<endl;
			cout<<"TITRE: "<<livre[i].getTitre()<<endl;
			cout<<"AUTEUR: "<<livre[i].getAuteur()<<endl;
			cout<<"EDITION: "<<livre[i].getEdition()<<endl;
			cout<<"\nVoulez-vous modifier ?\n[1]Oui\n[2]Non\n\nEntrez votre choix :";
			getline(cin,choix);
			if(choix=="1"){
				//re-entering values
				cout<<"Enter Id: ";
				getline(cin,Id);
				cout<<"Enter Titre: ";
				getline(cin,Titre);
				cout<<"Enter Auteur: ";
				getline(cin,Auteur);
				cout<<"Enter Edition: ";
				getline(cin,Edition);

				livre[i].setId(Id);
				livre[i].setTitre(Titre);
				livre[i].setAuteur(Auteur);
				livre[i].setEdition(Edition);

				cout<<"\nLIVRE EDITE AVEC SUCCES !\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
				_getch();
				EditLivre(counter);//function call to self
			}
			else{
				main();
			}
		}
}
	cout<<"\nLIVRE INTROUVABLE !\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
	_getch();
	main();
}

void EditCD(int counter){
	system("CLS");
	string editId,choix;
	string Id,Titre,Auteur,Edition;
	string duree;
	cout<<"\nEDIT CD\n\n";
	if(counter==0){
		cout<<"IL N'Y A AUCUN CD A MODIFIER !\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
		_getch();
		main();
	}
	cout<<"Enter Id: ";
	getline(cin,editId);
	for(int i=0;i<counter;i++){
		//finding a match using for loop
		if(cd[i].getId()==editId){
			cout<<"\nCD TROUVE !\n\n";
			cout<<"Id: "<<cd[i].getId()<<endl;
			cout<<"TITRE: "<<cd[i].getTitre()<<endl;
			cout<<"AUTEUR: "<<cd[i].getAuteur()<<endl;
			cout<<"EDITION: "<<cd[i].getEdition()<<endl;
			cout<<"DUREE: "<<cd[i].getDuree()<<endl;
			cout<<"\nVoulez-vous modifier ?\n[1]Oui\n[2]Non\n\nEntrez votre choix :";
			getline(cin,choix);
			if(choix=="1"){
				//re-entering values
				cout<<"Enter Id: ";
				getline(cin,Id);
				cout<<"Enter Titre: ";
				getline(cin,Titre);
				cout<<"Enter Auteur: ";
				getline(cin,Auteur);
				cout<<"Enter Edition: ";
				getline(cin,Edition);
                cout<<"Enter Duree: ";
				getline(cin,duree);

				cd[i].setId(Id);
				cd[i].setTitre(Titre);
				cd[i].setAuteur(Auteur);
				cd[i].setEdition(Edition);
                cd[i].setDuree(duree);

				cout<<"\nCD EDITE AVEC SUCCES !\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
				_getch();
				EditCD(counter);//function call to self
			}
			else{
				main();
			}
		}
}
	cout<<"\nCD INTROUVABLE !\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
	_getch();
	main();
}

void EditCasette(int counter){
	system("CLS");
	string editId,choix;
	string Id,Titre,Auteur,Edition;
	string duree;
	cout<<"\nEDIT CASETTE\n\n";
	if(counter==0){
		cout<<"IL N'Y A AUCUN CASETTE A MODIFIER !\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
		_getch();
		main();
	}
	cout<<"Enter Id: ";
	getline(cin,editId);
	for(int i=0;i<counter;i++){
		//finding a match using for loop
		if(casette[i].getId()==editId){
			cout<<"\nCASETTE TROUVE !\n\n";
			cout<<"Id: "<<casette[i].getId()<<endl;
			cout<<"TITRE: "<<casette[i].getTitre()<<endl;
			cout<<"AUTEUR: "<<casette[i].getAuteur()<<endl;
			cout<<"EDITION: "<<casette[i].getEdition()<<endl;
			cout<<"DUREE: "<<casette[i].getDuree()<<endl;
			cout<<"\nVoulez-vous modifier ?\n[1]Oui\n[2]Non\n\nEntrez votre choix :";
			getline(cin,choix);
			if(choix=="1"){
				//re-entering values
				cout<<"Enter Id: ";
				getline(cin,Id);
				cout<<"Enter Titre: ";
				getline(cin,Titre);
				cout<<"Enter Auteur: ";
				getline(cin,Auteur);
				cout<<"Enter Edition: ";
				getline(cin,Edition);
                cout<<"Enter Duree: ";
				getline(cin,duree);

				casette[i].setId(Id);
				casette[i].setTitre(Titre);
				casette[i].setAuteur(Auteur);
				casette[i].setEdition(Edition);
                casette[i].setDuree(duree);

				cout<<"\nCASETTE EDITE AVEC SUCCES !\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
				//_getch();
				EditCasette(counter);//function call to self
			}
			else{
				main();
			}
		}
}
	cout<<"\nCD INTROUVABLE !\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
	_getch();
	main();
}
void ChercheLivre(int counter){
	string Id;
	int choix;
	bool print = false; //boolean expression to decide which to print
	cout<<"RECHERCHER UN LIVRE\n\n";
	if(counter==0){
		cout<<"IL N'Y A AUCUN LIVRE A RECHERCHER !\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
		_getch();
		main();
	}
	cout<<"Enter Id: ";
	getline(cin,Id);
	for(int i=0;i<counter;i++){
		//finding a match using for loop
		if(livre[i].getId()==Id){
			cout<<"\nLIVRE TROUVE!\n\n";
			cout<<"ID: "<<livre[i].getId()<<endl;
			cout<<"TITLE: "<<livre[i].getTitre()<<endl;
			cout<<"AUTHOR: "<<livre[i].getAuteur()<<endl;
			cout<<"EDITION: "<<livre[i].getEdition()<<endl;
			print = true;
		}
	}
	if(print){
		cout<<"\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
		_getch();
		main();
	}
	//if there's no book found
	else{
		cout<<"\nLIVRE INTROUVABLE !\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
		_getch();
		main();
	}
}

void ChercheCD(int counter){
	string Id;
	int choix;
	bool print = false; //boolean expression to decide which to print
	cout<<"RECHERCHER UN CDn\n";
	if(counter==0){
		cout<<"IL N'Y A AUCUN CD A RECHERCHER !\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
		_getch();
		main();
	}
	cout<<"Enter Id: ";
	getline(cin,Id);
	for(int i=0;i<counter;i++){
		//finding a match using for loop
		if(cd[i].getId()==Id){
			cout<<"\nLIVRE TROUVE!\n\n";
			cout<<"ID: "<<cd[i].getId()<<endl;
			cout<<"TITLE: "<<cd[i].getTitre()<<endl;
			cout<<"AUTHOR: "<<cd[i].getAuteur()<<endl;
			cout<<"EDITION: "<<cd[i].getEdition()<<endl;
			cout<<"DUREE: "<<cd[i].getDuree()<<endl;
			print = true;
		}
	}
	if(print){
		cout<<"\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
		_getch();
		main();
	}
	//if there's no book found
	else{
		cout<<"\nCD INTROUVABLE !\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
		_getch();
		main();
	}
}

void ChercheCasette(int counter){
	string Id;
	int choix;
	bool print = false; //boolean expression to decide which to print
	cout<<"RECHERCHER UN CASETTEn\n";
	if(counter==0){
		cout<<"IL N'Y A AUCUN CASETTE A RECHERCHER !\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
		_getch();
		main();
	}
	cout<<"Enter Id: ";
	getline(cin,Id);
	for(int i=0;i<counter;i++){
		//finding a match using for loop
		if(casette[i].getId()==Id){
			cout<<"\nLIVRE TROUVE!\n\n";
			cout<<"ID: "<<casette[i].getId()<<endl;
			cout<<"TITRE: "<<casette[i].getTitre()<<endl;
			cout<<"AUTEUR: "<<casette[i].getAuteur()<<endl;
			cout<<"EDITION: "<<casette[i].getEdition()<<endl;
			cout<<"DUREE: "<<casette[i].getDuree()<<endl;
			print = true;
		}
	}
	if(print){
		cout<<"\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
		_getch();
		main();
	}
	//if there's no book found
	else{
		cout<<"\nCASETTE INTROUVABLE !\n\nAppuyez sur n'importe quelle touche pour continuer . . .";
		_getch();
		main();
	}
}
void DisplayLivre(int counter){
	//iterating all the values on the library using book array
	cout<<"VOIR TOUS LES LIVRES\n\n";
	for(int i=0;i<counter;i++){
		cout<<"DETAILS DU LIVRE\n\n";
		cout<<"ID: "<<livre[i].getId()<<endl;
		cout<<"TITRE: "<<livre[i].getTitre()<<endl;
		cout<<"AUTEUR: "<<livre[i].getAuteur()<<endl;
		cout<<"EDITION: "<<livre[i].getEdition()<<endl;
	}
	cout<<"Appuyez sur n'importe quelle touche pour continuer . . .";
	_getch();
	main();
}
void DisplayCD(int counter){
	//iterating all the values on the library using book array
	cout<<"VOIR TOUS LES CD\n\n";
	for(int i=0;i<counter;i++){
		cout<<"DETAILS DU CD\n\n";
		cout<<"ID: "<<cd[i].getId()<<endl;
		cout<<"TITRE: "<<cd[i].getTitre()<<endl;
		cout<<"AUTEUR: "<<cd[i].getAuteur()<<endl;
		cout<<"EDITION: "<<cd[i].getEdition()<<endl;
		cout<<"DUREE: "<<cd[i].getDuree()<<endl;
	}
	cout<<"Appuyez sur n'importe quelle touche pour continuer . . .";
	_getch();
	main();
}

void DisplayCasette(int counter){
	//iterating all the values on the library using book array
	cout<<"VOIR TOUS LES CD\n\n";
	for(int i=0;i<counter;i++){
		cout<<"DETAILS DU CASETTE\n\n";
		cout<<"ID: "<<casette[i].getId()<<endl;
		cout<<"TITRE: "<<casette[i].getTitre()<<endl;
		cout<<"AUTEUR: "<<casette[i].getAuteur()<<endl;
		cout<<"EDITION: "<<casette[i].getEdition()<<endl;
		cout<<"DUREE: "<<casette[i].getDuree()<<endl;
	}
	cout<<"Appuyez sur n'importe quelle touche pour continuer . . .";
	_getch();
	main();
}
