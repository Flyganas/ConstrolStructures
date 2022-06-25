#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define Escape 27

//#define IF_BASICS
//#define CALC_IF
//#define CALC_SWITCH
//#define WHILE_1
//#define WHILE_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef IF_BASICS
	int t;	//����������� �������
	cout << "������� ����������� �������: "; cin >> t;
	if (t > 0)
	{
		cout << "�� ����� �����" << endl;
	}
	else if (t > -10)	//� ��������� ������ (�����)
	{
		cout << "�� ����� �������" << endl;
	}


	/*if (Condition1)
	{
		....;
		code1;
		....;
	}
	else if (Condition2)
	{
		....;
		code2;
		....;
	}
	.....
	.....
	else if (ConditionN)
	{
		....;
		codeN;
		....;
	}
	else
	{
		....;
		Default code;
		....;
	}*/
#endif // IF_BASICS

#ifdef CALC_IF
	double a, b;//�����, �������� ������������
	char s;		//Sign - ���� ��������
	cout << "������� �������������� ���������: ";
	cin >> a >> s >> b;
	//cout << a << s << b << endl;
	if (s == '+')		cout << a << " + " << b << " = " << a + b << endl;
	else if (s == '-')	cout << a << " - " << b << " = " << a - b << endl;
	else if (s == '*')	cout << a << " * " << b << " = " << a * b << endl;
	else if (s == '/')	cout << a << " / " << b << " = " << a / b << endl;
	else				cout << "Error: No operation" << endl;
	cout << "��� ������ ������� Esc, ��� ����������� ������� ����� �������" << endl;
	if (_getch() != 27)	main();
#endif // CALC_1

#ifdef CALC_SWITCH
	double a, b;
	char s;
	cout << "������� �������������� ���������: ";
	cin >> a >> s >> b;
	switch (s)
	{
	case '+': cout << a << " + " << b << " = " << a + b << endl; break;
	case '-': cout << a << " - " << b << " = " << a - b << endl; break;
	case '*': cout << a << " * " << b << " = " << a * b << endl; break;
	case '/': cout << a << " / " << b << " = " << a / b << endl; break;
	default:  cout << "Error: No operation" << endl;
	}
	main();
#endif // CALC_SWITCH

#ifdef WHILE_1
	int i = 0;	//������� �����
	int n;		//���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	while (++i < n)	//��������� �����
	{	//���� �����:
		cout << i << " Hello World\n";
		//i++;
	}
#endif // WHILE_1


#ifdef WHILE_2
	int n;
	cout << "������� ���������� ���������:"; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
#endif // WHILE_2

	char key; //��� ���������� ����� ������� ��� �������.
	do
	{
		key = _getch(); //������� _getch() ������� ������� ������� � ���������� ASCII - ���  ������� �������. ����� ��� ��������� � ���������� conio.h
		cout << (int)key << "\t" << key << endl; //int(key) - ����� �������������� ���������� key � ��� ������ int,��� ����, ����� ������� ASCII - ��� ������� �������.
	} while (key != Escape);

}