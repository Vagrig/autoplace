#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <ctime>
#include <vector>
#include <Windows.h>

using namespace std;

// Прототипы функций
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

// Класс Авто
class Auto
{
public:
	string name, bodyIndex, bodyType, color, engineСapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price;

	void show()
	{
		system("cls");
		cout << endl;
		middle("Технические характеристики");
		cout << endl << endl;
		cout << "\t\t\t\t\t\tНазвание             " + name << endl << endl;
		cout << "\t\t\t\t\t\tИндекс кузова        " + bodyIndex << endl << endl;
		cout << "\t\t\t\t\t\tТип кузова           " + bodyType << endl << endl;
		cout << "\t\t\t\t\t\tЦвет                 " + color << endl << endl;
		cout << "\t\t\t\t\t\tОбъём двигателя      " + engineСapacity << endl << endl;
		cout << "\t\t\t\t\t\tКоличество л/с       " + hp << endl << endl;
		cout << "\t\t\t\t\t\tКПП                  " + gearbox << endl << endl;
		cout << "\t\t\t\t\t\tПривод               " + driveUnit << endl << endl;
		cout << "\t\t\t\t\t\tМакс.скорость        " + maxSpeed << endl << endl;
		cout << "\t\t\t\t\t\tРазгон до 100 км/ч   " + overclocking << endl << endl;
		cout << "\t\t\t\t\t\tЦена                 " + price << endl << endl;
	}
};

// Класс БМВ
class BMW : public Auto
{
public:
	BMW()
	{

	}
	BMW(string name, string bodyIndex, string bodyType, string color, string engineСapacity, string hp,
		string gearbox, string driveUnit, string maxSpeed, string overclocking, string price)
	{
		this->name = name;
		this->bodyIndex = bodyIndex;
		this->bodyType = bodyType;
		this->color = color;
		this->engineСapacity = engineСapacity;
		this->hp = hp;
		this->gearbox = gearbox;
		this->driveUnit = driveUnit;
		this->maxSpeed = maxSpeed;
		this->overclocking = overclocking;
		this->price = price;
	}
};

// Класс Мерседес
class Mercedes : public Auto
{
public:
	Mercedes()
	{

	}
	Mercedes(string name, string bodyIndex, string bodyType, string color, string engineСapacity, string hp,
		string gearbox, string driveUnit, string maxSpeed, string overclocking, string price)
	{
		this->name = name;
		this->bodyIndex = bodyIndex;
		this->bodyType = bodyType;
		this->color = color;
		this->engineСapacity = engineСapacity;
		this->hp = hp;
		this->gearbox = gearbox;
		this->driveUnit = driveUnit;
		this->maxSpeed = maxSpeed;
		this->overclocking = overclocking;
		this->price = price;
	}
};

// Класс Ауди
class Audi : public Auto
{
public:
	Audi()
	{

	}
	Audi(string name, string bodyIndex, string bodyType, string color, string engineСapacity, string hp,
		string gearbox, string driveUnit, string maxSpeed, string overclocking, string price)
	{
		this->name = name;
		this->bodyIndex = bodyIndex;
		this->bodyType = bodyType;
		this->color = color;
		this->engineСapacity = engineСapacity;
		this->hp = hp;
		this->gearbox = gearbox;
		this->driveUnit = driveUnit;
		this->maxSpeed = maxSpeed;
		this->overclocking = overclocking;
		this->price = price;
	}
};

// Класс Порше
class Porsche : public Auto
{
public:
	Porsche()
	{

	}
	Porsche(string name, string bodyIndex, string bodyType, string color, string engineСapacity, string hp,
		string gearbox, string driveUnit, string maxSpeed, string overclocking, string price)
	{
		this->name = name;
		this->bodyIndex = bodyIndex;
		this->bodyType = bodyType;
		this->color = color;
		this->engineСapacity = engineСapacity;
		this->hp = hp;
		this->gearbox = gearbox;
		this->driveUnit = driveUnit;
		this->maxSpeed = maxSpeed;
		this->overclocking = overclocking;
		this->price = price;
	}
};

// Вектор всех машин
vector<Auto>cars;

// Вектор машин по параметрам
vector<Auto>tempCars;

// Главная функция
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
		middle("1 - Просмотреть автомобили    2 - Расширенный поиск    0 - Покинуть приложение");
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
				middle("Просмотр автомобилей");
				cout << endl << endl;
				middle("Выберите марку: ");
				mark();
				selection = _getch() - 48;
				cout << endl;
				classSelectionMark(selection);
				cout << endl;
				int intTemp = 0;
				do {
					intTemp = 0;
					middle("1 - Просмотреть другие автомобили     0 - Назад в главное меню");
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
						middle("Извините, но такой команды не существует!");
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
			middle("Всего доброго!");
			cout << endl;
			break;
		}
		default:
		{
			cout << endl;
			middle("Извините, но такой команды не существует!");
			cout << endl << endl;
			break;
		}
		}
	} while (switcher != 0);
	return 0;
}

// Приветствие
void firstPage()
{
	cout << endl;
	middle("Добро пожаловать на Autoplace");
	cout << endl;
}

// Функция вывода марок автомобилей
void mark()
{
	cout << endl;
	cout << "\t\t\t\t\t\t\t 1. BMW\n" << endl;
	cout << "\t\t\t\t\t\t\t 2. Mercedes\n" << endl;
	cout << "\t\t\t\t\t\t\t 3. Audi\n" << endl;
	cout << "\t\t\t\t\t\t\t 4. Porsche\n" << endl;
}

// Функция вывода моделей БМВ
void modelBMW()
{
	cout << endl;
	cout << "\t\t\t\t\t\t    1. M2           5. M6\n" << endl;
	cout << "\t\t\t\t\t\t    2. M3           6. X5M\n" << endl;
	cout << "\t\t\t\t\t\t    3. M4           7. X6M\n" << endl;
	cout << "\t\t\t\t\t\t    4. M5           8. Z4M\n" << endl;
}

// Функция вывода моделей Мерседеса
void modelMercedes()
{
	cout << endl;
	cout << "\t\t\t\t\t       1. C63 AMG          5. CLS63 AMG\n" << endl;
	cout << "\t\t\t\t\t       2. E63 AMG          6. GLE63 AMG\n" << endl;
	cout << "\t\t\t\t\t       3. S63 AMG          7. GLC63 AMG\n" << endl;
	cout << "\t\t\t\t\t       4. G63 AMG          8. GLS63 AMG\n" << endl;
}

// Функция вывода моделей Ауди
void modelAudi()
{
	cout << endl;
	cout << "\t\t\t\t\t\t   1. RS2          5. RS6\n" << endl;
	cout << "\t\t\t\t\t\t   2. RS3          6. RS7\n" << endl;
	cout << "\t\t\t\t\t\t   3. RS4          7. RS Q3\n" << endl;
	cout << "\t\t\t\t\t\t   4. RS5          8. TT RS\n" << endl;
}

// Функция вывода моделей Порше
void modelPorsche()
{
	cout << endl;
	cout << "\t\t\t\t\t    1. 911 Turbo S          5. Carrera GT\n" << endl;
	cout << "\t\t\t\t\t    2. Macan GTS            6. Panamera GTS\n" << endl;
	cout << "\t\t\t\t\t    3. Cayenne Turbo        7. Boxter S\n" << endl;
	cout << "\t\t\t\t\t    4. Cayman GTS           8. 911 GT2 RS\n" << endl;
}

// Вывод текста на центр экрана
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

// Функция выбора марок автомобилей
void classSelectionMark(int choice)
{
	switch (choice)
	{
		int value;
	case 1:
	{
		middle("Выберите модель:");
		modelBMW();
		value = _getch() - 48;
		cout << endl;
		classSelectionBMW(value);
		break;
	}
	case 2:
	{
		middle("Выберите модель:");
		modelMercedes();
		value = _getch() - 48;
		cout << endl;
		classSelectionMercedes(value);
		break;
	}
	case 3:
	{
		middle("Выберите модель:");
		modelAudi();
		value = _getch() - 48;
		cout << endl;
		classSelectionAudi(value);
		break;
	}
	case 4:
	{
		middle("Выберите модель:");
		modelPorsche();
		value = _getch() - 48;
		cout << endl;
		classSelectionPorsche(value);
		break;
	}
	default:
	{
		middle("Извините, но такой команды не существует!");
		cout << endl;
	}
	}
}

// Функция выбора моделей БМВ
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
		middle("Извините, но такой команды не существует!");
		cout << endl;
	}
	}
}

// Функция выбора моделей Мерседес
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
		middle("Извините, но такой команды не существует!");
		cout << endl;
	}
	}
}

// Функция выбора моделей Ауди
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
		middle("Извините, но такой команды не существует!");
		cout << endl;
	}
	}
}

// Функция выбора моделей Порше
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
		middle("Извините, но такой команды не существует!");
		cout << endl;
	}
	}
}

// Перегрузка оператора "<<"
ostream& operator<<(ostream& os, const Auto point)
{
	{
		os << point.name << endl;
	}
	return os;
}

// Функция расширенного поиска
void findCars()
{
	system("cls");
	cout << endl;
	middle("Расширенный поиск");
	cout << endl;
	int command;
	string index, bloom, type, before, from, from2, before2;
	do {
		cout << endl;
		middle("Выберите параметры поиска:");
		parameters();
		command = _getch() - 48;
		switch (command)
		{
		case 1:
		{
			system("cls");
			cout << endl;
			middle("Поиск по мощности");
			cout << "\n\t\t\t\t\t\t Введите мощность автомобиля:" << endl;
			cout << "\n\t\t\t\t\t\t    Мощность, л.с. от: ";
			cin >> from;
			cout << "\n\t\t\t\t\t\t    Мощность, л.с. до: ";
			cin >> before;
			search("hp", from, before);
			command = back(command);

			break;
		}
		case 2:
		{
			system("cls");
			cout << endl;
			middle("Поиск по типу кузова");
			cout << "\n\t\t\t\t  Введите тип кузова автомобиля с заглавной буквы: ";
			cin >> type;
			search("bodyType", type);
			command = back(command);
			break;
		}
		case 3:
		{
			system("cls");
			cout << endl;
			middle("Поиск по индексу кузова");
			cout << "\n\t\t\t      Введите индекс кузова автомобиля с заглавной буквы (если присутствует): ";
			cin >> index;
			search("bodyIndex", index);
			command = back(command);
			break;
		}
		case 4:
		{
			system("cls");
			cout << endl;
			middle("Поиск по цвету");
			cout << "\n\t\t\t\t\tВведите цвет автомобиля c заглавной буквы: ";
			cin >> bloom;
			search("colour", bloom);
			command = back(command);
			break;
		}
		case 5:
		{
			system("cls");
			cout << endl;
			middle("Поиск по цене");
			cout << "\n\t\t\t\t\t\t   Введите цену автомобиля:" << endl;
			cout << "\n\t\t\t\t\t\t      Цена, от: ";
			cin >> from2;
			cout << "\n\t\t\t\t\t\t      Цена, до: ";
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
			middle("Извините, но такой команды не существует!");
			cout << endl;
			break;
		}
		}
	} while (command != 0);
}

// Функция вывода параметров поиска
void parameters()
{
	cout << endl;
	cout << "\t\t\t\t\t\t     1. Поиск по мощности\n" << endl;
	cout << "\t\t\t\t\t\t     2. Поиск по типу кузова\n" << endl;
	cout << "\t\t\t\t\t\t     3. Поиск по индексу кузова\n" << endl;
	cout << "\t\t\t\t\t\t     4. Поиск по цвету\n" << endl;
	cout << "\t\t\t\t\t\t     5. Поиск по цене\n" << endl;
	cout << "\t\t\t\t\t\t     0. Назад в главное меню\n" << endl;
}

// Функция расширенного поиска по параметрам
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
					cout << "\t\t\t\t\t\t  " << counter << ". Автомобиль ";
				}
				else
				{
					cout << "\t\t\t\t\t\t " << counter << ". Автомобиль ";
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
					cout << "\t\t\t\t\t\t  " << counter << ". Автомобиль ";
				}
				else
				{
					cout << "\t\t\t\t\t\t " << counter << ". Автомобиль ";
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
					cout << "\t\t\t\t\t\t  " << counter << ". Автомобиль ";
				}
				else
				{
					cout << "\t\t\t\t\t\t " << counter << ". Автомобиль ";
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
					cout << "\t\t\t\t\t\t  " << counter << ". Автомобиль ";
				}
				else
				{
					cout << "\t\t\t\t\t\t " << counter << ". Автомобиль ";
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
					cout << "\t\t\t\t\t\t  " << counter << ". Автомобиль ";
				}
				else
				{
					cout << "\t\t\t\t\t\t " << counter << ". Автомобиль ";
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
		middle("Ничего не найдено!");
		cout << endl;
	}
}

// Функция просмотра автомобиля подробнее
void Selection()
{
	bool temp = false;
	int count;
	string tempCount;
	cout << endl;
	middle("Какой автомобиль желаете просмотреть подробнее?");
	cout << endl;
	do {
		cout << "\t\t\t\t\t\t\tВведите номер: ";
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
			middle("Автомобиль под таким номером не найден!");
			cout << endl;
		}
	} while (!temp);
}

// Функция выхода
int back(int command)
{
	bool temp = false;
	int back, rez = command;
	do {
		cout << endl;
		middle("1 - Назад в расширенный поиск    0 - Назад в главное меню");
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
			middle("Извините, но такой команды не существует!");
			cout << endl;
		}
	} while (!temp);
	return rez;
}

// Функция заполнения полей BMW
void createBMW()
{
	string name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price;

	name = "BMW M2";
	bodyIndex = "F87";
	bodyType = "Купе";
	color = "Синий";
	engineCapacity = "3.0 л";
	hp = "410";
	gearbox = "Роботизированная";
	driveUnit = "Задний";
	maxSpeed = "250 км/ч";
	overclocking = "4.2 с";
	price = "4380000";
	cars.push_back(BMW(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "BMW M3";
	bodyIndex = "F80";
	bodyType = "Седан";
	color = "Голубой";
	engineCapacity = "3.0 л";
	hp = "431";
	gearbox = "Роботизированная";
	driveUnit = "Задний";
	maxSpeed = "250 км/ч";
	overclocking = "4.1 с";
	price = "4500000";
	cars.push_back(BMW(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "BMW M4";
	bodyIndex = "F82";
	bodyType = "Седан";
	color = "Золотой";
	engineCapacity = "3.0 л";
	hp = "431";
	gearbox = "Роботизированная";
	driveUnit = "Задний";
	maxSpeed = "250 км/ч";
	overclocking = "4.1 с";
	price = "5120000";
	cars.push_back(BMW(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "BMW M5";
	bodyIndex = "F90";
	bodyType = "Седан";
	color = "Бордовый";
	engineCapacity = "4.4 л";
	hp = "600";
	gearbox = "Автоматическая";
	driveUnit = "Полный";
	maxSpeed = "250 км/ч";
	overclocking = "3.4 с";
	price = "9550000";
	cars.push_back(BMW(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "BMW M6";
	bodyIndex = "F12";
	bodyType = "Купе";
	color = "Чёрный";
	engineCapacity = "4.4 л";
	hp = "560";
	gearbox = "Роботизированная";
	driveUnit = "Задний";
	maxSpeed = "250 км/ч";
	overclocking = "4.2 с";
	price = "3000000";
	cars.push_back(BMW(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "BMW X5M";
	bodyIndex = "F85";
	bodyType = "Внедорожник";
	color = "Белый";
	engineCapacity = "4.4 л";
	hp = "575";
	gearbox = "Автоматическая";
	driveUnit = "Полный";
	maxSpeed = "250 км/ч";
	overclocking = "4.2 с";
	price = "7560000";
	cars.push_back(BMW(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "BMW X6M";
	bodyIndex = "F86";
	bodyType = "Внедорожник";
	color = "Голубой";
	engineCapacity = "4.4 л";
	hp = "575";
	gearbox = "Автоматическая";
	driveUnit = "Полный";
	maxSpeed = "250 км/ч";
	overclocking = "4.2 с";
	price = "7650000";
	cars.push_back(BMW(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "BMW Z4M";
	bodyIndex = "E85";
	bodyType = "Родстер";
	color = "Красный";
	engineCapacity = "3.3 л";
	hp = "343";
	gearbox = "Механическая";
	driveUnit = "Задний";
	maxSpeed = "250 км/ч";
	overclocking = "5.0 с";
	price = "1500000";
	cars.push_back(BMW(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));
}

// Функция заполнения полей Mercedes
void createMercedes()
{
	string name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price;

	name = "Mercedes C63 AMG";
	bodyIndex = "W205";
	bodyType = "Седан";
	color = "Синий";
	engineCapacity = "3.0 л";
	hp = "390";
	gearbox = "Автоматическая";
	driveUnit = "Задний";
	maxSpeed = "250 км/ч";
	overclocking = "4.7 с";
	price = "5300000";
	cars.push_back(Mercedes(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Mercedes E63 AMG";
	bodyIndex = "W213";
	bodyType = "Седан";
	color = "Чёрный";
	engineCapacity = "4.0 л";
	hp = "612";
	gearbox = "Автоматическая";
	driveUnit = "Полный";
	maxSpeed = "250 км/ч";
	overclocking = "3.4 с";
	price = "9250000";
	cars.push_back(Mercedes(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Mercedes S63 AMG";
	bodyIndex = "W222";
	bodyType = "Седан";
	color = "Чёрный";
	engineCapacity = "4.0 л";
	hp = "612";
	gearbox = "Автоматическая";
	driveUnit = "Полный";
	maxSpeed = "250 км/ч";
	overclocking = "3.5 с";
	price = "12100000";
	cars.push_back(Mercedes(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Mercedes G63 AMG";
	bodyIndex = "W464";
	bodyType = "Внедорожник";
	color = "Чёрный";
	engineCapacity = "5.5 л";
	hp = "585";
	gearbox = "Автоматическая";
	driveUnit = "Полный";
	maxSpeed = "250 км/ч";
	overclocking = "4.5 с";
	price = "14200000";
	cars.push_back(Mercedes(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Mercedes CLS63 AMG";
	bodyIndex = "С257";
	bodyType = "Седан";
	color = "Чёрный";
	engineCapacity = "3.0 л";
	hp = "435";
	gearbox = "Автоматическая";
	driveUnit = "Полный";
	maxSpeed = "250 км/ч";
	overclocking = "4.5 с";
	price = "7600000";
	cars.push_back(Mercedes(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Mercedes GLE63 AMG";
	bodyIndex = "W166";
	bodyType = "Внедорожник";
	color = "Белый";
	engineCapacity = "5.5 л";
	hp = "585";
	gearbox = "Автоматическая";
	driveUnit = "Полный";
	maxSpeed = "250 км/ч";
	overclocking = "4.2 с";
	price = "8470000";
	cars.push_back(Mercedes(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Mercedes GLC63 AMG";
	bodyIndex = "X253";
	bodyType = "Внедорожник";
	color = "Чёрный";
	engineCapacity = "4.0 л";
	hp = "510";
	gearbox = "Автоматическая";
	driveUnit = "Полный";
	maxSpeed = "250 км/ч";
	overclocking = "3.8 с";
	price = "6500000";
	cars.push_back(Mercedes(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Mercedes GLS63 AMG";
	bodyIndex = "X166";
	bodyType = "Внедорожник";
	color = "Синий";
	engineCapacity = "5.5 л";
	hp = "585";
	gearbox = "Автоматическая";
	driveUnit = "Полный";
	maxSpeed = "250 км/ч";
	overclocking = "4.6 с";
	price = "11440000";
	cars.push_back(Mercedes(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));
}

// Функция заполнения полей Audi
void createAudi()
{
	string name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price;

	name = "Audi RS2";
	bodyIndex = "Отсутствует";
	bodyType = "Универсал";
	color = "Синий";
	engineCapacity = "2.2 л";
	hp = "215";
	gearbox = "Механическая";
	driveUnit = "Полный";
	maxSpeed = "262 км/ч";
	overclocking = "5.4 с";
	price = "2000000";
	cars.push_back(Audi(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Audi RS3";
	bodyIndex = "Отсутствует";
	bodyType = "Хэтчбек";
	color = "Чёрный";
	engineCapacity = "2.5 л";
	hp = "367";
	gearbox = "Автоматическая";
	driveUnit = "Полный";
	maxSpeed = "250 км/ч";
	overclocking = "4.5 с";
	price = "2700000";
	cars.push_back(Audi(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Audi RS4";
	bodyIndex = "B9";
	bodyType = "Универсал";
	color = "Серый";
	engineCapacity = "2.9 л";
	hp = "450";
	gearbox = "Автоматическая";
	driveUnit = "Полный";
	maxSpeed = "250 км/ч";
	overclocking = "4.1 с";
	price = "6300000";
	cars.push_back(Audi(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Audi RS5";
	bodyIndex = "Отсутствует";
	bodyType = "Купе";
	color = "Зелёный";
	engineCapacity = "2.9 л";
	hp = "450";
	gearbox = "Автоматическая";
	driveUnit = "Полный";
	maxSpeed = "250 км/ч";
	overclocking = "3.9 с";
	price = "6500000";
	cars.push_back(Audi(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Audi RS6";
	bodyIndex = "C7";
	bodyType = "Универсал";
	color = "Синий";
	engineCapacity = "4.0 л";
	hp = "605";
	gearbox = "Автоматическая";
	driveUnit = "Полный";
	maxSpeed = "250 км/ч";
	overclocking = "3.7 с";
	price = "9400000";
	cars.push_back(Audi(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Audi RS7";
	bodyIndex = "Отсутствует";
	bodyType = "Лифтбек";
	color = "Серебристый";
	engineCapacity = "4.0 л";
	hp = "605";
	gearbox = "Автоматическая";
	driveUnit = "Полный";
	maxSpeed = "250 км/ч";
	overclocking = "3.7 с";
	price = "8600000";
	cars.push_back(Audi(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Audi RSQ3";
	bodyIndex = "Отсутствует";
	bodyType = "Внедорожник";
	color = "Красный";
	engineCapacity = "5.5 л";
	hp = "585";
	gearbox = "Роботизированная";
	driveUnit = "Полный";
	maxSpeed = "250 км/ч";
	overclocking = "4.8 с";
	price = "2470000";
	cars.push_back(Audi(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Audi TT RS";
	bodyIndex = "8S";
	bodyType = "Купе";
	color = "Синий";
	engineCapacity = "2.5 л";
	hp = "400";
	gearbox = "Роботизированная";
	driveUnit = "Полный";
	maxSpeed = "250 км/ч";
	overclocking = "3.7 с";
	price = "5460000";
	cars.push_back(Audi(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));
}

// Функция заполнения полей Porsche
void createPorsche()
{
	string name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price;

	name = "Porshe 911 Turbo S";
	bodyIndex = "991";
	bodyType = "Купе";
	color = "Жёлтый";
	engineCapacity = "3.8 л";
	hp = "580";
	gearbox = "Роботизированная";
	driveUnit = "Полный";
	maxSpeed = "330 км/ч";
	overclocking = "3.0 с";
	price = "10250000";
	cars.push_back(Porsche(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Porsche Macan GTS";
	bodyIndex = "Отсутствует";
	bodyType = "Внедорожник";
	color = "Чёрный";
	engineCapacity = "3.0 л";
	hp = "360";
	gearbox = "Роботизированная";
	driveUnit = "Полный";
	maxSpeed = "256 км/ч";
	overclocking = "5.2 с";
	price = "4400000";
	cars.push_back(Porsche(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Porsche Cayenne Turbo";
	bodyIndex = "Отсутствует";
	bodyType = "Внедорожник";
	color = "Чёрный";
	engineCapacity = "4.0 л";
	hp = "550";
	gearbox = "Автоматическая";
	driveUnit = "Полный";
	maxSpeed = "250 км/ч";
	overclocking = "4.1 с";
	price = "12100000";
	cars.push_back(Porsche(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Porsche Cayman GTS";
	bodyIndex = "981";
	bodyType = "Купе";
	color = "Белый";
	engineCapacity = "3.4 л";
	hp = "340";
	gearbox = "Роботизированная";
	driveUnit = "Задний";
	maxSpeed = "283 км/ч";
	overclocking = "5.0 с";
	price = "3900000";
	cars.push_back(Porsche(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Porsche Carrera GT";
	bodyIndex = "Отсутствует";
	bodyType = "Тарга";
	color = "Серый";
	engineCapacity = "5.7 л";
	hp = "612";
	gearbox = "Механическая";
	driveUnit = "Задний";
	maxSpeed = "330 км/ч";
	overclocking = "3.9 с";
	price = "38500000";
	cars.push_back(Porsche(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Porsche Panamera GTS";
	bodyIndex = "Отсутствует";
	bodyType = "Хэтчбек";
	color = "Чёрный";
	engineCapacity = "5.0 л";
	hp = "550";
	gearbox = "Роботизированная";
	driveUnit = "Полный";
	maxSpeed = "306 км/ч";
	overclocking = "3.8 с";
	price = "12500000";
	cars.push_back(Porsche(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Porsche Boxter S";
	bodyIndex = "981";
	bodyType = "Родстер";
	color = "Синий";
	engineCapacity = "3.4 л";
	hp = "315";
	gearbox = "Роботизированная";
	driveUnit = "Задний";
	maxSpeed = "277 км/ч";
	overclocking = "5.0 с";
	price = "3900000";
	cars.push_back(Porsche(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));

	name = "Porsche 911 GT2 RS";
	bodyIndex = "991";
	bodyType = "Купе";
	color = "Голубой";
	engineCapacity = "3.8 л";
	hp = "700";
	gearbox = "Роботизированная";
	driveUnit = "Задний";
	maxSpeed = "340 км/ч";
	overclocking = "2.8 с";
	price = "27000000";
	cars.push_back(Porsche(name, bodyIndex, bodyType, color, engineCapacity, hp, gearbox, driveUnit, maxSpeed, overclocking, price));
}