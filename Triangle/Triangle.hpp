//Zadanie 3.
//Napisz i przetestuje klas� Triangle, kt�ra w c - torze przyjmuje 3 boki
//- dodaj metode getArea, kt�ra wyliczy pole
//pole wylicz za pomoc� wzoru Herona : https://www.mathopenref.com/heronsformula.html
//-dodaj metod� getPerimeter, kt�ra wyliczy obw�d
//- dodaj metod� isValid, kt�ra zwr�ci prawd� je�eli tr�j�kt jest poprwany
//Tr�jk�t jest porpwany, gdy suma d�ugo�ci dw�ch bok�w tr�jk�ta jest zawsze wi�ksza od d�ugo�ci trzeciego boku
//- je�eli tr�jk�t nie moze istnie� to niech wszystkie funkcje co� wyliczaj�ce zwracaj� 0

#pragma once

class Triangle
{
public:
	Triangle(int a, int b, int c);
	int getArea();
	int getPermiter();
	bool isValid();
private:
	int _a;
	int _b;
	int _c;
};