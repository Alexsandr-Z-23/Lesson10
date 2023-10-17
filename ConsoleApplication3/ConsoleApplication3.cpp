#include <iostream>
#include <math.h>
#include <Windows.h>
using namespace std;

//enum Operation
//{
//	Add, Subtract, Multiply
//};
//void calculate(int  n1, int n2, Operation op)
//{
//	switch (op)
//	{
//	case Operation:: Add:
//		cout << n1 + n2 << endl;
//		break;
//	case Operation::Subtract:
//		cout << n1 - n2 << endl;
//		break;
//	case Operation:: Multiply:
//		cout << n1 * n2 << endl;
//		break;
//	}
//}
//int main()
//{
//	calculate(10, 6, Operation::Add);
//	calculate(10, 6, Operation::Subtract);
//	calculate(10, 6, Operation::Multiply);
//	return 0;
//}
//int main()
//{
////	/*
////	int a = 9;
////	int b = 98;*/
////	/*
////	bool d = a < b;
////	bool f = a > b;
////	bool c = a <= b;
////	bool n = a >= b;
////	cout << (a<b)<<endl;
////	cout <<  d << endl;
////	cout << f << endl;
////	cout << c << endl;
////	cout << n << endl;
////	cout << "///////////////////////////" << endl;
////
////	bool m = a != b;
////	cout << m << endl;
////
////	*/
////
////	/*bool a = true;
////	bool b = !a;
////	bool c = !b;
////	cout << boolalpha << b << endl << c;*/
////
////	/*bool a = true;
////	bool b = false;
////	bool c = a&&b;
////	bool d = a && true;
////
////
////	cout << boolalpha << c << endl << d;*/
////
////	// if (уловие)        
////	// {
////	//		инструкция;   => (true) 
////	// }
////	// else              
////	// {
////	//		инструкция; => (false)
////	// }
////
////	/*int a = 21;
////	if (a>22)
////	{
////		cout << "a > 22" << endl;
////	}
////	else
////	{
////		cout << "a <= 22" << endl;
////	}*/
////
////	//int a = 8;
////	//if (a) cout << "a = true\n";
////	//else   cout << "a= false\n";
////
////	//cout << "///////////////////////\n";
////	//int b = 0;
////	//if (b) cout << "b = true\n";
////	//else   cout << "b= false\n";
////	//
////	//int c = a > b ? a - b : a + b;
////
////	//a > b ? cout<<a - b : cout<<a + b;
////	//setlocale(0, "");
////	//double num = 0;
////	//cout << "Введите значение от 1 до 100 =>";
////	//cin >> num;
////	//if (num>=1&&num <=100) // (1>=num<=100)
////	//{
////	//	if (num >= 50) cout << "Значение больше 50" << endl;
////	//	else if (num < 50) cout << "Значение меньше 50" << endl;
////	//	else cout << " Значение равно 50 " << endl;
////	//}
////	//else
////	//{
////	//	cout << "Значение вышло за данный диапазон!!! " << endl;
////	//}
////
//	/*setlocale(0, "");
//
//	int a ;
//	char operetion ;
//	cout << "Введите значение =>\n";
//	cin >> a;
//	cout << "Введите действие ' + , - , * ' =>\n";
//	cin >> operetion;
//
//	switch (operetion)
//	{
//	case '+':
//		cout << "a+a="<<a+a << "\n";
//		break;
//	case '-':
//		cout << "a-a= "<<a-a << "\n";
//		break;
//	case '*':
//		cout << "a*a= "<<a*a << "\n";
//		break;
//	default:
//		cout << "a не определен!" << "\n";
//		break;
//	}*/
//
//
//	return 0;
//}
//
//
int main()
{
	setlocale(LC_ALL, "rus");
	//int answer, A, B, RES;
	//	do { // вход в цикл
	//		// запрос на выбор операции
	//		
	//		cout << "\nSelect operation:\n";
	//		cout << "\n 1 - if you want to see SUM.\n";
	//		cout << "\n 2 - if you want to see DIFFERENCE.\n";
	//		cout << "\n 3 - if you want to exit.\n";
	//		cin >> answer;
	//		// анализ действия
	//		switch (answer) {
	//		case 1: // если пользователь выбрал сложение
	//			cout << "Enter first digit:\n";
	//			cin >> A;
	//			cout << "Enter second digit:\n";
	//			cin >> B;
	//			RES = A + B;
	//			cout << "\nAnswer: " << RES << "\n";
	//			break; // остановка switch
	//		case 2: // если пользователь выбрал вычитание
	//			cout << "Enter first digit:\n";
	//			cin >> A;
	//			cout << "Enter second digit:\n";
	//			cin >> B;
	//			RES = A - B;
	//			cout << "\nAnswer: " << RES << "\n";
	//			break; // остановка switch
	//		case 3: // если пользователь выбрал выход
	//			cout << "\nEXIT!!!\n";
	//			break;
	//		default: // если выбранное действие
	//			// некорректно
	//			cout << "\nError!!! This operator isn’t "
	//				"correct\n";
	//		}
	//	} while ((answer != 0) && ( answer!=3));
	//
	//cout << "\nBye. \n";
	/*	1. Инициализация переменной.
		2. Проверка условия.
		3. Выполнение действия, если условие истинно.
		4. Если условие ложно, выполнение следующего
		за циклом оператора.
		5. Если условие было истинно - изменение управляющей
		переменной.
		6. Проверка условия.Далее снова пункт 3 или 4.*/
	/*int rez = 0;
	for (int i=1;i<10;i++)
	{
	int a = i % 2;
		
		if (i % 2 == 0) 
		{
			cout << "Итерация "<<i << endl;
			cout << "!!!! CONTINUE !!!!" << endl<<endl;
			cout << "________________________________________________" << endl;
			continue;
		}
	
		rez = i + rez;
		
		cout << "Итерация не имеет остаток от деления => " << a << endl;
		cout << "Итерации " << i << " Результат =>" << rez << endl << endl;
		cout << "________________________________________________" << endl;
		if (i % 10 != 0) 
		{
			rez = i + rez;
			cout << "Итерация имеет остаток от деления => " << a << endl;
			cout << "Итерации " << i << " Результат =>" << rez << endl << endl;
		}
	}
	*/


	return 0;
}
//// 