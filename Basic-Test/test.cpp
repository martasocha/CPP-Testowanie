#include "pch.h" //optymalizuje wczesniej pliku naglowkowe, podlacza inne naglowki
#include "../Basic/Calculator.hpp"
//dyrektorywy preprocesora, czyli makra. Interfejs jest zrobiony za pomoca makr

TEST(CalculatorTest, Sum2plus2equals4) //testcase mowi co testujemy, a test to nazwa testu
{
	Calculator calc; //GIVEN
	int result = calc.sum(2, 2); //WHEN

	EXPECT_EQ(result, 4); //THEN
}


//TEST(TestCase1, Test1) //Makro definiujace test o nazwie Test1 w test case o nazwie TestCase1
////Testcasow mozna tworzyc dowolna ilosc, testow mozna tworzyc dowolna ilosc
//{
//  EXPECT_EQ(1, 1); //asercje, assert czyli zaluz ASSERT_*/EXPECT_*
//  EXPECT_TRUE(true);
//}
//
////roznica miedzy EXPECT, a ASSERT  - ASSERT kiedy jest nieprawdziwy, przerywa wykonywanie programu, EXPECT wykona test do konca
//TEST(TestCase1, Test2)
//{
//	ASSERT_EQ(1, 1); //ASSERT i EXPECT  sa wymienne, ASSERT_EQ sprawdz rownosc (1 = 1)
//	ASSERT_TRUE(true); //EXPECT_TRUE  sprawdza poprawnosc wyrazenia w nawiasach
//}
//
//TEST(TestCase1, Test3)
//{
//	ASSERT_EQ(1, 2); // sprawdzamy czy 1 jest rowne 2, oczywiscie to blad
//	ASSERT_TRUE(false);
//}