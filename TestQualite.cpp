//<><<>>
#include<fstream>
#include<iostream>
#include<string>
int main()
{
	int numeroLot;
	std::string nomProduit;
	float temperature;
	std::string statut;

	std::cout << "entrer le nom de produit  " << std::endl;
	std::getline(std::cin , nomProduit);

	std::cout << "entrer le numero de produit  " << std::endl;
	std::cin >> numeroLot ;

	std::cout << "entrer la temperature en degre celiscious  " << std::endl;
	std::cin >> temperature;
	std::cout << "********les infos sur le produit etudie est :  " << std::endl;
	std::cout << " ************** le nom de produit : " << nomProduit << std::endl;
	std::cout << "*************** le numero de produit : " << numeroLot << std::endl;
	if (temperature >= 2 && temperature <= 8)
	{
		statut = "conforme";
	}else {
		statut = "non conforme";
	}
    std::ofstream fichier("rapport_Lots.text", std::ios::app);

	if (fichier.is_open())

	{
		fichier << " *******Lot " << numeroLot<< "  ********produit " << nomProduit  << "  ****temperature " << temperature  <<" C " << "  *****statut " << statut << std::endl;
		std::cout << "ok , les donees sont eneregistrees dans un fichier rapport_Lots.text " << std::endl;
		fichier.close();

	}
	else {

		std::cout << "ooops , erreur ! impossible d'ouvrir le fichier le fichier de rapport" << std::endl;
	}
	return 0;
}