#include <iostream>
#include <bitset>
#include <fstream>
#include <Windows.h>
int main()
{



std::fstream plik; 
plik.open("bit.txt", std::ios::in | std::ios::app);

if(plik.good() == true)
{
int Input_Value;
std::cout << "Wprowadz liczbe decymalna" << std::endl;
std::cin >> Input_Value;
if(Input_Value < 0 || Input_Value > 255)	
{
	std::cout << "W 8-bitowym zapisie binarnym liczba minimalna to 0 natomiast maxymalna to 255." << std::endl;
	Sleep(1300);
	exit(-1);
}
std::cout <<"Liczba: " << Input_Value << " Zostanie zamieniona na binarna, sprawdz plik .txt" << std::endl;
Sleep(1000);
std::bitset <8> Binar (Input_Value);
plik << "================" << std::endl;
plik << "Liczba decymalna: " << Input_Value << std::endl;
plik << "Liczba binarna 8-bitowa: " << Binar << std::endl;
plik << "================" << std::endl;
plik.close();
}

else {
	std::cout << "Wystapil blad z zapisem!" << std::endl;
	Sleep(1000);
	exit(-1);
}

system("pause");
}