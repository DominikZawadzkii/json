#include <iostream>
#include <fstream>
using namespace std; 
int main()
	{
		string imie="Jan";
		string nazwisko="Nowak";
		string id="420";
			
		ofstream plik;
		plik.open("out.json");	
	     plik<< " [ \n { \n \"imie\" : \" "<<imie ;
	     plik<< " [ \n { \n \"nazwisko\" : \" "<<nazwisko ;
	     plik<< " [ \n { \n \"id\" : \" "<<id ;
	     plik.close(); 
	     return 0; 
	}
	
