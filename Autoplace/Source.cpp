#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <ctime>
#include <vector>
#include <Windows.h>

using namespace std;

// ��������� �������
void firstPage();
void modelBMW();
void modelMercedes();
void modelAudi();
void modelPorsche();
void mark();
void findCars();
void parameters();
void Selection();
void middle(const string& s);
void classSelectionMark(int choice);
void classSelectionBMW(int choice);
void classSelectionMercedes(int choice);
void classSelectionAudi(int choice);
void classSelectionPorsche(int choice);
int back(int command);
void createBMW();
void createAudi();
void createMercedes();
void createPorsche();
void search(string option, string minValue, string maxValue = "");

// ����� ����
class Auto
{
public:
	string name, bodyIndex, bodyType, color, engine�apacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price;

	void show()
	{
		system("cls");
		cout << endl;
		middle("����������� ��������������");
		cout << endl << endl;
		cout << "\t\t\t\t\t\t��������             " + name << endl << endl;
		cout << "\t\t\t\t\t\t������ ������        " + bodyIndex << endl << endl;
		cout << "\t\t\t\t\t\t��� ������           " + bodyType << endl << endl;
		cout << "\t\t\t\t\t\t����                 " + color << endl << endl;
		cout << "\t\t\t\t\t\t����� ���������      " + engine�apacity << endl << endl;
		cout << "\t\t\t\t\t\t���������� �/�       " + hp << endl << endl;
		cout << "\t\t\t\t\t\t���                  " + gearbox << endl << endl;
		cout << "\t\t\t\t\t\t������               " + driveUnit << endl << endl;
		cout << "\t\t\t\t\t\t����.��������        " + maxSpeed << endl << endl;
		cout << "\t\t\t\t\t\t������ �� 100 ��/�   " + overclocking << endl << endl;
		cout << "\t\t\t\t\t\t����                 " + price << endl << endl;
	}
};

// ����� ���
class BMW : public Auto
{
public:
	BMW()
	{

	}
	BMW(string name, string bodyIndex, string bodyType, string color, string engine�apacity, string hp,
		string gearbox, string driveUnit, string maxSpeed, string overclocking, string price)
	{
		this->name = name;
		this->bodyIndex = bodyIndex;
		this->bodyType = bodyType;
		this->color = color;
		this->engine�apacity = engine�apacity;
		this->hp = hp;
		this->gearbox = gearbox;
		this->driveUnit = driveUnit;
		this->maxSpeed = maxSpeed;
		this->overclocking = overclocking;
		this->price = price;
	}
};

// ����� ��������
class Mercedes : public Auto
{
public:
	Mercedes()
	{

	}
	Mercedes(string name, string bodyIndex, string bodyType, string color, string engine�apacity, string hp,
		string gearbox, string driveUnit, string maxSpeed, string overclocking, string price)
	{
		this->name = name;
		this->bodyIndex = bodyIndex;
		this->bodyType = bodyType;
		this->color = color;
		this->engine�apacity = engine�apacity;
		this->hp = hp;
		this->gearbox = gearbox;
		this->driveUnit = driveUnit;
		this->maxSpeed = maxSpeed;
		this->overclocking = overclocking;
		this->price = price;
	}
};

// ����� ����
class Audi : public Auto
{
public:
	Audi()
	{

	}
	Audi(string name, string bodyIndex, string bodyType, string color, string engine�apacity, string hp,
		string gearbox, string driveUnit, string maxSpeed, string overclocking, string price)
	{
		this->name = name;
		this->bodyIndex = bodyIndex;
		this->bodyType = bodyType;
		this->color = color;
		this->engine�apacity = engine�apacity;
		this->hp = hp;
		this->gearbox = gearbox;
		this->driveUnit = driveUnit;
		this->maxSpeed = maxSpeed;
		this->overclocking = overclocking;
		this->price = price;
	}
};

// ����� �����
class Porsche : public Auto
{
public:
	Porsche()
	{

	}
	Porsche(string name, string bodyIndex, string bodyType, string color, string engine�apacity, string hp,
		string gearbox, string driveUnit, string maxSpeed, string overclocking, string price)
	{
		this->name = name;
		this->bodyIndex = bodyIndex;
		this->bodyType = bodyType;
		this->color = color;
		this->engine�apacity = engine�apacity;
		this->hp = hp;
		this->gearbox = gearbox;
		this->driveUnit = driveUnit;
		this->maxSpeed = maxSpeed;
		this->overclocking = overclocking;
		this->price = price;
	}
};

// ������ ���� �����
vector<Auto>cars;

// ������ ����� �� ����������
vector<Auto>tempCars;

// ������� �������
int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	createBMW();
	createMercedes();
	createAudi();
	createPorsche();
	firstPage();
	int switcher, selection, count;
	bool temp = false;
	do
	{
		if (temp == true)
		{
			firstPage();
		}
		temp = false;
		middle("1 - ����������� ����������    2 - ����������� �����    0 - �������� ����������");
		switcher = _getch() - 48;
		cout << endl;
		switch (switcher)
		{
		case 1:
		{
			bool boolTemp = false;
			do {
				system("cls");
				cout << endl;
				middle("�������� �����������");
				cout << endl << endl;
				middle("�������� �����: ");
				mark();
				selection = _getch() - 48;
				cout << endl;
				classSelectionMark(selection);
				cout << endl;
				int intTemp = 0;
				do {
					intTemp = 0;
					middle("1 - ����������� ������ ����������     0 - ����� � ������� ����");
					count = _getch() - 48;
					if (count == 1)
					{
						boolTemp = true;
					}
					else if (count == 0)
					{
						boolTemp = false;
						system("cls");
						firstPage();
					}
					else
					{
						cout << endl;
						middle("��������, �� ����� ������� �� ����������!");
						cout << endl;
						intTemp = 1;
					}
				} while (intTemp != 0);
			} while (boolTemp);
			break;
		}
		case 2:
		{
			temp = true;
			findCars();
			break;
		}
		case 0:
		{
			cout << endl;
			middle("����� �������!");
			cout << endl;
			break;
		}
		default:
		{
			cout << endl;
			middle("��������, �� ����� ������� �� ����������!");
			cout << endl << endl;
			break;
		}
		}
	} while (switcher != 0);
	return 0;
}

// �����������
void firstPage()
{
	cout << endl;
	middle("����� ���������� �� Autoplace");
	cout << endl;
}

// ������� ������ ����� �����������
void mark()
{
	cout << endl;
	cout << "\t\t\t\t\t\t\t 1. BMW\n" << endl;
	cout << "\t\t\t\t\t\t\t 2. Mercedes\n" << endl;
	cout << "\t\t\t\t\t\t\t 3. Audi\n" << endl;
	cout << "\t\t\t\t\t\t\t 4. Porsche\n" << endl;
}

// ������� ������ ������� ���
void modelBMW()
{
	cout << endl;
	cout << "\t\t\t\t\t\t    1. M2           5. M6\n" << endl;
	cout << "\t\t\t\t\t\t    2. M3           6. X5M\n" << endl;
	cout << "\t\t\t\t\t\t    3. M4           7. X6M\n" << endl;
	cout << "\t\t\t\t\t\t    4. M5           8. Z4M\n" << endl;
}

// ������� ������ ������� ���������
void modelMercedes()
{
	cout << endl;
	cout << "\t\t\t\t\t       1. C63 AMG          5. CLS63 AMG\n" << endl;
	cout << "\t\t\t\t\t       2. E63 AMG          6. GLE63 AMG\n" << endl;
	cout << "\t\t\t\t\t       3. S63 AMG          7. GLC63 AMG\n" << endl;
	cout << "\t\t\t\t\t       4. G63 AMG          8. GLS63 AMG\n" << endl;
}

// ������� ������ ������� ����
void modelAudi()
{
	cout << endl;
	cout << "\t\t\t\t\t\t   1. RS2          5. RS6\n" << endl;
	cout << "\t\t\t\t\t\t   2. RS3          6. RS7\n" << endl;
	cout << "\t\t\t\t\t\t   3. RS4          7. RS Q3\n" << endl;
	cout << "\t\t\t\t\t\t   4. RS5          8. TT RS\n" << endl;
}

// ������� ������ ������� �����
void modelPorsche()
{
	cout << endl;
	cout << "\t\t\t\t\t    1. 911 Turbo S          5. Carrera GT\n" << endl;
	cout << "\t\t\t\t\t    2. Macan GTS            6. Panamera GTS\n" << endl;
	cout << "\t\t\t\t\t    3. Cayenne Turbo        7. Boxter S\n" << endl;
	cout << "\t\t\t\t\t    4. Cayman GTS           8. 911 GT2 RS\n" << endl;
}

// ����� ������ �� ����� ������
void middle(const string& s)
{
	int width_field = 127;
	string v(width_field, ' ');
	string v1;

	int l_word = s.size();
	int l_field = v.size();
	int step = (l_field - l_word) / 2;

	for (int i = 0; i < l_word; i++)
	{
		v1.push_back(s[i]);
	}
	copy(v1.begin(), v1.end(), v.begin() + step);
	for (auto x : v)
	{
		cout << x;
	}
	cout << endl;
}

// ������� ������ ����� �����������
void classSelectionMark(int choice)
{
	switch (choice)
	{
		int value;
	case 1:
	{
		middle("�������� ������:");
		modelBMW();
		value = _getch() - 48;
		cout << endl;
		classSelectionBMW(value);
		break;
	}
	case 2:
	{
		middle("�������� ������:");
		modelMercedes();
		value = _getch() - 48;
		cout << endl;
		classSelectionMercedes(value);
		break;
	}
	case 3:
	{
		middle("�������� ������:");
		modelAudi();
		value = _getch() - 48;
		cout << endl;
		classSelectionAudi(value);
		break;
	}
	case 4:
	{
		middle("�������� ������:");
		modelPorsche();
		value = _getch() - 48;
		cout << endl;
		classSelectionPorsche(value);
		break;
	}
	default:
	{
		middle("��������, �� ����� ������� �� ����������!");
		cout << endl;
	}
	}
}

// ������� ������ ������� ���
void classSelectionBMW(int choice)
{
	switch (choice)
	{
	case 1:
	{
		cars[0].show();
		break;
	}
	case 2:
	{
		cars[1].show();
		break;
	}
	case 3:
	{
		cars[2].show();
		break;
	}
	case 4:
	{
		cars[3].show();
		break;
	}
	case 5:
	{
		cars[4].show();
		break;
	}
	case 6:
	{
		cars[5].show();
		break;
	}
	case 7:
	{
		cars[6].show();
		break;
	}
	case 8:
	{
		cars[7].show();
		break;
	}
	default:
	{
		middle("��������, �� ����� ������� �� ����������!");
		cout << endl;
	}
	}
}

// ������� ������ ������� ��������
void classSelectionMercedes(int choice)
{
	switch (choice)
	{
	case 1:
	{
		cars[8].show();
		break;
	}
	case 2:
	{
		cars[9].show();
		break;
	}
	case 3:
	{
		cars[10].show();
		break;
	}
	case 4:
	{
		cars[11].show();
		break;
	}
	case 5:
	{
		cars[12].show();
		break;
	}
	case 6:
	{
		cars[13].show();
		break;
	}
	case 7:
	{
		cars[14].show();
		break;
	}
	case 8:
	{
		cars[15].show();
		break;
	}
	default:
	{
		middle("��������, �� ����� ������� �� ����������!");
		cout << endl;
	}
	}
}

// ������� ������ ������� ����
void classSelectionAudi(int choice)
{
	switch (choice)
	{
	case 1:
	{
		cars[16].show();
		break;
	}
	case 2:
	{
		cars[17].show();
		break;
	}
	case 3:
	{
		cars[18].show();
		break;
	}
	case 4:
	{
		cars[19].show();
		break;
	}
	case 5:
	{
		cars[20].show();
		break;
	}
	case 6:
	{
		cars[21].show();
		break;
	}
	case 7:
	{
		cars[22].show();
		break;
	}
	case 8:
	{
		cars[23].show();
		break;
	}
	default:
	{
		middle("��������, �� ����� ������� �� ����������!");
		cout << endl;
	}
	}
}

// ������� ������ ������� �����
void classSelectionPorsche(int choice)
{
	switch (choice)
	{
	case 1:
	{
		cars[24].show();
		break;
	}
	case 2:
	{
		cars[25].show();
		break;
	}
	case 3:
	{
		cars[26].show();
		break;
	}
	case 4:
	{
		cars[27].show();
		break;
	}
	case 5:
	{
		cars[28].show();
		break;
	}
	case 6:
	{
		cars[29].show();
		break;
	}
	case 7:
	{
		cars[30].show();
		break;
	}
	case 8:
	{
		cars[31].show();
		break;
	}
	default:
	{
		middle("��������, �� ����� ������� �� ����������!");
		cout << endl;
	}
	}
}

// ���������� ��������� "<<"
ostream& operator<<(ostream& os, const Auto point)
{
	{
		os << point.name << endl;
	}
	return os;
}

// ������� ������������ ������
void findCars()
{
	system("cls");
	cout << endl;
	middle("����������� �����");
	cout << endl;
	int command;
	string index, bloom, type, before, from, from2, before2;
	do {
		cout << endl;
		middle("�������� ��������� ������:");
		parameters();
		command = _getch() - 48;
		switch (command)
		{
		case 1:
		{
			system("cls");
			cout << endl;
			middle("����� �� ��������");
			cout << "\n\t\t\t\t\t\t ������� �������� ����������:" << endl;
			cout << "\n\t\t\t\t\t\t    ��������, �.�. ��: ";
			cin >> from;
			cout << "\n\t\t\t\t\t\t    ��������, �.�. ��: ";
			cin >> before;
			search("hp", from, before);
			command = back(command);

			break;
		}
		case 2:
		{
			system("cls");
			cout << endl;
			middle("����� �� ���� ������");
			cout << "\n\t\t\t\t  ������� ��� ������ ���������� � ��������� �����: ";
			cin >> type;
			search("bodyType", type);
			command = back(command);
			break;
		}
		case 3:
		{
			system("cls");
			cout << endl;
			middle("����� �� ������� ������");
			cout << "\n\t\t\t      ������� ������ ������ ���������� � ��������� ����� (���� ������������): ";
			cin >> index;
			search("bodyIndex", index);
			command = back(command);
			break;
		}
		case 4:
		{
			system("cls");
			cout << endl;
			middle("����� �� �����");
			cout << "\n\t\t\t\t\t������� ���� ���������� c ��������� �����: ";
			cin >> bloom;
			search("colour", bloom);
			command = back(command);
			break;
		}
		case 5:
		{
			system("cls");
			cout << endl;
			middle("����� �� ����");
			cout << "\n\t\t\t\t\t\t   ������� ���� ����������:" << endl;
			cout << "\n\t\t\t\t\t\t      ����, ��: ";
			cin >> from2;
			cout << "\n\t\t\t\t\t\t      ����, ��: ";
			cin >> before2;
			search("price", from2, before2);
			command = back(command);
			break;
		}
		case 0:
		{
			system("cls");
			break;
		}
		default:
		{
			system("cls");
			cout << endl;
			middle("��������, �� ����� ������� �� ����������!");
			cout << endl;
			break;
		}
		}
	} while (command != 0);
}

// ������� ������ ���������� ������
void parameters()
{
	cout << endl;
	cout << "\t\t\t\t\t\t     1. ����� �� ��������\n" << endl;
	cout << "\t\t\t\t\t\t     2. ����� �� ���� ������\n" << endl;
	cout << "\t\t\t\t\t\t     3. ����� �� ������� ������\n" << endl;
	cout << "\t\t\t\t\t\t     4. ����� �� �����\n" << endl;
	cout << "\t\t\t\t\t\t     5. ����� �� ����\n" << endl;
	cout << "\t\t\t\t\t\t     0. ����� � ������� ����\n" << endl;
}

// ������� ������������ ������ �� ����������
void search(string option, string minValue, string maxValue)
{
	int temp = 0, counter = 1;
	cout << endl << endl;
	if (option == "hp")
	{
		for (auto i : cars)
		{
			if (atoi(i.hp.c_str()) >= atoi(minValue.c_str()) && atoi(i.hp.c_str()) <= atoi(maxValue.c_str()))
			{
				if (counter < 10)
				{
					cout << "\t\t\t\t\t\t  " << counter << ". ���������� ";
				}
				else
				{
					cout << "\t\t\t\t\t\t " << counter << ". ���������� ";
				}
				cout << i << endl;
				temp = 1;
				counter++;
				tempCars.push_back(i);
			}
		}
		if (temp == 1)
		{
			Selection();
		}
	}
	else if (option == "bodyType")
	{
		for (auto i : cars)
		{
			if (i.bodyType == minValue)
			{
				if (counter < 10)
				{
					cout << "\t\t\t\t\t\t  " << counter << ". ���������� ";
				}
				else
				{
					cout << "\t\t\t\t\t\t " << counter << ". ���������� ";
				}
				cout << i << endl;
				temp = 1;
				counter++;
				tempCars.push_back(i);
			}
		}
		if (temp == 1)
		{
			Selection();
		}
	}
	else if (option == "bodyIndex")
	{
		for (auto i : cars)
		{
			if (i.bodyIndex == minValue)
			{
				if (counter < 10)
				{
					cout << "\t\t\t\t\t\t  " << counter << ". ���������� ";
				}
				else
				{
					cout << "\t\t\t\t\t\t " << counter << ". ���������� ";
				}
				cout << i << endl;
				temp = 1;
				counter++;
				tempCars.push_back(i);
			}
		}
		if (temp == 1)
		{
			Selection();
		}
	}
	else if (option == "colour")
	{
		for (auto i : cars)
		{
			if (i.color == minValue)
			{
				if (counter < 10)
				{
					cout << "\t\t\t\t\t\t  " << counter << ". ���������� ";
				}
				else
				{
					cout << "\t\t\t\t\t\t " << counter << ". ���������� ";
				}
				cout << i << endl;
				temp = 1;
				counter++;
				tempCars.push_back(i);
			}
		}
		if (temp == 1)
		{
			Selection();
		}
	}
	else if (option == "price")
	{
		for (auto i : cars)
		{
			if (atoi(i.price.c_str()) >= atoi(minValue.c_str()) && atoi(i.price.c_str()) <= atoi(maxValue.c_str()))
			{
				if (counter < 10)
				{
					cout << "\t\t\t\t\t\t  " << counter << ". ���������� ";
				}
				else
				{
					cout << "\t\t\t\t\t\t " << counter << ". ���������� ";
				}
				cout << i << endl;
				temp = 1;
				counter++;
				tempCars.push_back(i);
			}
		}
		if (temp == 1)
		{
			Selection();
		}
	}
	if (temp == 0)
	{
		middle("������ �� �������!");
		cout << endl;
	}
}

// ������� ��������� ���������� ���������
void Selection()
{
	bool temp = false;
	int count;
	string tempCount;
	cout << endl;
	middle("����� ���������� ������� ����������� ���������?");
	cout << endl;
	do {
		cout << "\t\t\t\t\t\t\t������� �����: ";
		cin >> tempCount;
		count = atoi(tempCount.c_str());
		if (count > 0 && count <= tempCars.size())
		{
			tempCars[count - 1].show();
			tempCars.clear();
			temp = true;
		}
		else
		{
			cout << endl;
			middle("���������� ��� ����� ������� �� ������!");
			cout << endl;
		}
	} while (!temp);
}

// ������� ������
int back(int command)
{
	bool temp = false;
	int back, rez = command;
	do {
		cout << endl;
		middle("1 - ����� � ����������� �����    0 - ����� � ������� ����");
		back = _getch() - 48;
		if (back == 1)
		{
			system("cls");
			temp = true;
		}
		else if (back == 0)
		{
			rez = 0;
			system("cls");
			temp = true;
		}
		else
		{
			cout << endl << endl;
			middle("��������, �� ����� ������� �� ����������!");
			cout << endl;
		}
	} while (!temp);
	return rez;
}

// ������� ���������� ����� BMW
void createBMW()
{
	string name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price;

	name = "BMW M2";
	bodyIndex = "F87";
	bodyType = "����";
	color = "�����";
	engineCapacity = "3.0 �";
	hp = "410";
	gearbox = "����������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "4.2 �";
	price = "4380000";
	cars.push_back(BMW(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "BMW M3";
	bodyIndex = "F80";
	bodyType = "�����";
	color = "�������";
	engineCapacity = "3.0 �";
	hp = "431";
	gearbox = "����������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "4.1 �";
	price = "4500000";
	cars.push_back(BMW(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "BMW M4";
	bodyIndex = "F82";
	bodyType = "�����";
	color = "�������";
	engineCapacity = "3.0 �";
	hp = "431";
	gearbox = "����������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "4.1 �";
	price = "5120000";
	cars.push_back(BMW(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "BMW M5";
	bodyIndex = "F90";
	bodyType = "�����";
	color = "��������";
	engineCapacity = "4.4 �";
	hp = "600";
	gearbox = "��������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "3.4 �";
	price = "9550000";
	cars.push_back(BMW(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "BMW M6";
	bodyIndex = "F12";
	bodyType = "����";
	color = "׸����";
	engineCapacity = "4.4 �";
	hp = "560";
	gearbox = "����������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "4.2 �";
	price = "3000000";
	cars.push_back(BMW(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "BMW X5M";
	bodyIndex = "F85";
	bodyType = "�����������";
	color = "�����";
	engineCapacity = "4.4 �";
	hp = "575";
	gearbox = "��������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "4.2 �";
	price = "7560000";
	cars.push_back(BMW(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "BMW X6M";
	bodyIndex = "F86";
	bodyType = "�����������";
	color = "�������";
	engineCapacity = "4.4 �";
	hp = "575";
	gearbox = "��������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "4.2 �";
	price = "7650000";
	cars.push_back(BMW(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "BMW Z4M";
	bodyIndex = "E85";
	bodyType = "�������";
	color = "�������";
	engineCapacity = "3.3 �";
	hp = "343";
	gearbox = "������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "5.0 �";
	price = "1500000";
	cars.push_back(BMW(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));
}

// ������� ���������� ����� Mercedes
void createMercedes()
{
	string name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price;

	name = "Mercedes C63 AMG";
	bodyIndex = "W205";
	bodyType = "�����";
	color = "�����";
	engineCapacity = "3.0 �";
	hp = "390";
	gearbox = "��������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "4.7 �";
	price = "5300000";
	cars.push_back(Mercedes(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Mercedes E63 AMG";
	bodyIndex = "W213";
	bodyType = "�����";
	color = "׸����";
	engineCapacity = "4.0 �";
	hp = "612";
	gearbox = "��������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "3.4 �";
	price = "9250000";
	cars.push_back(Mercedes(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Mercedes S63 AMG";
	bodyIndex = "W222";
	bodyType = "�����";
	color = "׸����";
	engineCapacity = "4.0 �";
	hp = "612";
	gearbox = "��������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "3.5 �";
	price = "12100000";
	cars.push_back(Mercedes(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Mercedes G63 AMG";
	bodyIndex = "W464";
	bodyType = "�����������";
	color = "׸����";
	engineCapacity = "5.5 �";
	hp = "585";
	gearbox = "��������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "4.5 �";
	price = "14200000";
	cars.push_back(Mercedes(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Mercedes CLS63 AMG";
	bodyIndex = "�257";
	bodyType = "�����";
	color = "׸����";
	engineCapacity = "3.0 �";
	hp = "435";
	gearbox = "��������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "4.5 �";
	price = "7600000";
	cars.push_back(Mercedes(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Mercedes GLE63 AMG";
	bodyIndex = "W166";
	bodyType = "�����������";
	color = "�����";
	engineCapacity = "5.5 �";
	hp = "585";
	gearbox = "��������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "4.2 �";
	price = "8470000";
	cars.push_back(Mercedes(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Mercedes GLC63 AMG";
	bodyIndex = "X253";
	bodyType = "�����������";
	color = "׸����";
	engineCapacity = "4.0 �";
	hp = "510";
	gearbox = "��������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "3.8 �";
	price = "6500000";
	cars.push_back(Mercedes(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Mercedes GLS63 AMG";
	bodyIndex = "X166";
	bodyType = "�����������";
	color = "�����";
	engineCapacity = "5.5 �";
	hp = "585";
	gearbox = "��������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "4.6 �";
	price = "11440000";
	cars.push_back(Mercedes(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));
}

// ������� ���������� ����� Audi
void createAudi()
{
	string name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price;

	name = "Audi RS2";
	bodyIndex = "�����������";
	bodyType = "���������";
	color = "�����";
	engineCapacity = "2.2 �";
	hp = "215";
	gearbox = "������������";
	driveUnit = "������";
	maxSpeed = "262 ��/�";
	overclocking = "5.4 �";
	price = "2000000";
	cars.push_back(Audi(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Audi RS3";
	bodyIndex = "�����������";
	bodyType = "�������";
	color = "׸����";
	engineCapacity = "2.5 �";
	hp = "367";
	gearbox = "��������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "4.5 �";
	price = "2700000";
	cars.push_back(Audi(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Audi RS4";
	bodyIndex = "B9";
	bodyType = "���������";
	color = "�����";
	engineCapacity = "2.9 �";
	hp = "450";
	gearbox = "��������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "4.1 �";
	price = "6300000";
	cars.push_back(Audi(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Audi RS5";
	bodyIndex = "�����������";
	bodyType = "����";
	color = "������";
	engineCapacity = "2.9 �";
	hp = "450";
	gearbox = "��������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "3.9 �";
	price = "6500000";
	cars.push_back(Audi(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Audi RS6";
	bodyIndex = "C7";
	bodyType = "���������";
	color = "�����";
	engineCapacity = "4.0 �";
	hp = "605";
	gearbox = "��������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "3.7 �";
	price = "9400000";
	cars.push_back(Audi(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Audi RS7";
	bodyIndex = "�����������";
	bodyType = "�������";
	color = "�����������";
	engineCapacity = "4.0 �";
	hp = "605";
	gearbox = "��������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "3.7 �";
	price = "8600000";
	cars.push_back(Audi(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Audi RSQ3";
	bodyIndex = "�����������";
	bodyType = "�����������";
	color = "�������";
	engineCapacity = "5.5 �";
	hp = "585";
	gearbox = "����������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "4.8 �";
	price = "2470000";
	cars.push_back(Audi(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Audi TT RS";
	bodyIndex = "8S";
	bodyType = "����";
	color = "�����";
	engineCapacity = "2.5 �";
	hp = "400";
	gearbox = "����������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "3.7 �";
	price = "5460000";
	cars.push_back(Audi(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));
}

// ������� ���������� ����� Porsche
void createPorsche()
{
	string name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price;

	name = "Porshe 911 Turbo S";
	bodyIndex = "991";
	bodyType = "����";
	color = "Ƹ����";
	engineCapacity = "3.8 �";
	hp = "580";
	gearbox = "����������������";
	driveUnit = "������";
	maxSpeed = "330 ��/�";
	overclocking = "3.0 �";
	price = "10250000";
	cars.push_back(Porsche(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Porsche Macan GTS";
	bodyIndex = "�����������";
	bodyType = "�����������";
	color = "׸����";
	engineCapacity = "3.0 �";
	hp = "360";
	gearbox = "����������������";
	driveUnit = "������";
	maxSpeed = "256 ��/�";
	overclocking = "5.2 �";
	price = "4400000";
	cars.push_back(Porsche(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Porsche Cayenne Turbo";
	bodyIndex = "�����������";
	bodyType = "�����������";
	color = "׸����";
	engineCapacity = "4.0 �";
	hp = "550";
	gearbox = "��������������";
	driveUnit = "������";
	maxSpeed = "250 ��/�";
	overclocking = "4.1 �";
	price = "12100000";
	cars.push_back(Porsche(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Porsche Cayman GTS";
	bodyIndex = "981";
	bodyType = "����";
	color = "�����";
	engineCapacity = "3.4 �";
	hp = "340";
	gearbox = "����������������";
	driveUnit = "������";
	maxSpeed = "283 ��/�";
	overclocking = "5.0 �";
	price = "3900000";
	cars.push_back(Porsche(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Porsche Carrera GT";
	bodyIndex = "�����������";
	bodyType = "�����";
	color = "�����";
	engineCapacity = "5.7 �";
	hp = "612";
	gearbox = "������������";
	driveUnit = "������";
	maxSpeed = "330 ��/�";
	overclocking = "3.9 �";
	price = "38500000";
	cars.push_back(Porsche(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Porsche Panamera GTS";
	bodyIndex = "�����������";
	bodyType = "�������";
	color = "׸����";
	engineCapacity = "5.0 �";
	hp = "550";
	gearbox = "����������������";
	driveUnit = "������";
	maxSpeed = "306 ��/�";
	overclocking = "3.8 �";
	price = "12500000";
	cars.push_back(Porsche(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Porsche Boxter S";
	bodyIndex = "981";
	bodyType = "�������";
	color = "�����";
	engineCapacity = "3.4 �";
	hp = "315";
	gearbox = "����������������";
	driveUnit = "������";
	maxSpeed = "277 ��/�";
	overclocking = "5.0 �";
	price = "3900000";
	cars.push_back(Porsche(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Porsche 911 GT2 RS";
	bodyIndex = "991";
	bodyType = "����";
	color = "�������";
	engineCapacity = "3.8 �";
	hp = "700";
	gearbox = "����������������";
	driveUnit = "������";
	maxSpeed = "340 ��/�";
	overclocking = "2.8 �";
	price = "27000000";
	cars.push_back(Porsche(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));
}