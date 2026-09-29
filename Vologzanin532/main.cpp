#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	const int row = 4;
	const int col = 4;

	int first = 0, second = 0;
	
	int arr[row][col];

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10 + 1;
			std::cout << arr[i][j] << " ";
		}

		std::cout << "\n";
	}

	return 0;;
}


/*const int size = 10;
int number = 0;
int arr[size]{};
double sumPositive = 0;
double sumNegativ = 0;

for (int i = 0; i < size; i++)
{
	number = rand() % 21 - 10;
	arr[i] = number;
}

for (int i = 0; i < size; i++)
{
	std::cout << arr[i] << " ";

	if (arr[i] > 0)
	{
		sumPositive += arr[i];
	}
	else if (arr[i] < 0)
	{
		sumNegativ += arr[i];
	}
}

std::cout << "\n\nСумма всех положителных чисел: ";
std::cout << sumPositive;

std::cout << "\n\nСумма всех отицательных чисел: ";
std::cout << sumNegativ;

std::cout << "\n\nСреднее всех чисел: ";
std::cout << (sumNegativ + sumPositive) / size;*/

/*
	Типы данных:

		bool					true/false				0 - false

		char					'+'						43
		unsigned char			'+'						43		0 - 255

		short					123						-32768 -- 32767
		unsigned short			123						0 - 65536

		int						123456789				-2147483648 -- 2147483647
		unsigned int			123456789				0 - 4294967295
		long long int			23423525234				большой

		float					12312.56798				3.4E-38 -- 3.4E+38
		double					120956,8176784			1.7E-308 -- 1.7E+308
		long double				257364756234573546724	3.4E-4932 - 1.1E+4932

	Операторы:

		Математические: + - * / = % ++ -- += -= /= *= ()

		Сравнительные: < > <= >= == !=		<=>

		Логические: && (и)	|| (или)	! (не)

		ТАБУ:	goto	and or not	int имяПеременной

	Работа if:

		int a = 0;
		int b = 0;

		if (true)
		{
			std::cout << 1;
		}
		else if (b > 0)
		{
			std::cout << 2;
		}
		else
		{
			std::cout << 3;
		}

		std::cin >> a;
		std::cin >> b;

		std::cout << a << "\n" << b << "\n";

	Практика:

		SetConsoleCP(CP_UTF8);
		SetConsoleOutputCP(CP_UTF8);

		double numberOfRubles;

		double euroExchangeRate = 100.50;
		double dollarExchangeRate = 85.70;
		double faritExchangeRate = 57.97;
		double yuanExchangeRate = 12.79;

		int euroNumber = 1;
		int dollarNumber = 2;
		int faritNumber = 3;
		int yuanNumber = 4;
		int currencyCode;
		double commission;
		double result;


		std::cout << "Введите количество рублей - ";
		std::cin >> numberOfRubles;
		std::cout << "Выберите валюту для перевода:\n\t" << euroNumber << ".Евро\n\t"
				  << dollarNumber <<".Доллар\n\t"<< faritNumber
				  <<".Фарит\n\t" << yuanNumber <<".Юань\n";

		commission = numberOfRubles - numberOfRubles * 0.95;
		numberOfRubles -= commission;

		std::cin >> currencyCode;

		if (currencyCode == euroNumber)
		{
			result = numberOfRubles / euroExchangeRate;
			std::cout << "Количество евро: - " << result;
		}
		else if (currencyCode == dollarNumber)
		{
			result = numberOfRubles / dollarExchangeRate;
			std::cout << "Количество долларов: - " << result;
		}
		else if (currencyCode == faritNumber)
		{
			result = numberOfRubles / faritExchangeRate;
			std::cout << "Количество фаритов: - " << result;
		}
		else if (currencyCode == yuanNumber)
		{
			result = numberOfRubles / yuanExchangeRate;
			std::cout << "Количество юаней: - " << result;
		}
		else
		{
			std::cout << "Ошибка. Повторите запуск программы";
		}


		double a = 0, b = 0, c = 0, d = 0, x1 = 0, x2 = 0;

		std::cout << "Решение полного квадратного настроения\n\n";
		std::cout << "ax^bx + c = 0\n\n";

		std::cout << "Введите A: ";
		std::cin >> a;
		std::cout << "Введите B: ";
		std::cin >> b;
		std::cout << "Введите C: ";
		std::cin >> c;

		std::cout << a << "x^2 + " << b << "x + " << c << " = 0\n\n";

		d = std::pow(b, 2) - 4 * a * c;
		std::cout << "Дискримнант: " << d << "\n\n";

		if (d < 0)
		{
			std::cout << "Корней нет";
		}
		else if (d == 0)
		{
			x1 = -b / (2 * a);
			std::cout << "Один корень. x = " << x1 << "\n\n";
		}
		else
		{
			x1 = (-b + std::sqrt(d)) / (2 * a);
			x2 = (-b - std::sqrt(d)) / (2 * a);

			std::cout << "первый корень. x1 = " << x1 << "\n\n";
			std::cout << "второй корень. x2 = " << x2 << "\n\n";
		}

		SetConsoleCP(CP_UTF8);
		SetConsoleOutputCP(CP_UTF8);
		srand(time(NULL));

		int choose = 0, hp = 0, number = 0, randomNumber = 0;
		int maxHp = 25, maxHpHard = 25, chance = 25;

		while (true)
		{
			system("cls");

			std::cout << "\n\n\n\t\tИгра \"Угадай число\"\n\n\n";

			std::cout << "1 - Начать игру\n";
			std::cout << "2 - Настройки\n";
			std::cout << "0 - Выход\n\n";
			std::cout << "Ввод: ";
			std::cin >> choose;

			if (choose == 1)
			{
				while (true)
				{
					system("cls");
					std::cout << "\n\n\n\t\tВыберите уровень сложности\n\n\n";

					std::cout << "1 - Легкий(1 - 500)\n";
					std::cout << "2 - Сложный(1 - 5000)\n";
					std::cout << "0 - Выход в главное меню\n\n";
					std::cout << "Ввод: ";
					std::cin >> choose;

					if (choose == 1)
					{
						randomNumber = rand() % 500 + 1;
						hp = maxHp;

						while (true)
						{
							system("cls");
							std::cout << "Количество жизней: " << hp << "\n";
							std::cout << "Введите число от 1 до 500: ";
							std::cin >> number;

							if (number == randomNumber)
							{
								std::cout << "Вы угадали число! Поздравляем!\n";
								system("pause");
								std::cout << "Осталаось  жизней - " << hp << "\n";
								break;
							}
							else if (number < 1 || number > 500)
							{
								std::cout << "Вы вышли за лимиты";
								Sleep(1200);
							}
							else
							{
								hp--;

								if (hp == 0)
								{
									std::cout << "Вы проиграли";
									std::cout << "Число компьютера: " << randomNumber << "\n";
									system("pause");
									break;
								}

								std::cout << "Неверно";
								std::cout << "Ваше здоровье: " << hp << "\n";

								std::cout << "Взять подсказку за 1 жизнь";
								std::cout << "1 - да\nЛюбое число - нет\nВвод: ";
								std::cin >> choose;

								if (choose == 1)
								{
									hp--;

									if (hp == 0)
									{
										std::cout << "Вы проиграли";
										std::cout << "Число компьютера: " << randomNumber << "\n";
										system("pause");
										break;;
									}

									if (number < randomNumber)
									{
										std::cout << "Ваше число меньше числа компьютера";
									}
									else
									{
										std::cout << "Ваше число больше числа компьютера";
									}

									Sleep(2000);
								}
								else
								{
									std::cout << "Отказ от подсказки";
									Sleep(500);
								}
							}
						}
					}
					else if (choose == 2)
					{
						randomNumber = rand() % 5000 + 1;
						hp = maxHpHard;

						while (true)
						{
							system("cls");
							std::cout << "Количество жизней: " << hp << "\n";
							std::cout << "Введите число от 1 до 5000: ";
							std::cin >> number;

							if (number == randomNumber)
							{
								std::cout << "Вы угадали число! Поздравляем!\n";
								system("pause");
								std::cout << "Осталаось  жизней - " << hp << "\n";
								break;
							}
							else if (number < 1 || number > 5000)
							{
								std::cout << "Вы вышли за лимиты";
								Sleep(1200);
							}
							else
							{
								hp--;

								if (hp == 0)
								{
									std::cout << "Вы проиграли";
									std::cout << "Число компьютера: " << randomNumber << "\n";
									system("pause");
									break;
								}

								std::cout << "Неверно";
								std::cout << "Ваше здоровье: " << hp << "\n";

								std::cout << "Взять подсказку за 1 жизнь\n";
								std::cout << "1 - да\nЛюбое число - нет\nВвод: ";
								std::cin >> choose;

								if (choose == 1)
								{
									if (rand() % 101 <= chance)
									{
										std::cout << "Бесплатная подсказка";
										Sleep(1000);
									}
									else
									{
										hp--;

										if (hp == 0)
										{
											std::cout << "Вы проиграли";
											std::cout << "Число компьютера: " << randomNumber << "\n";
											system("pause");
											break;;
										}
									}


									if (number < randomNumber)
									{
										std::cout << "Ваше число меньше числа компьютера";
									}
									else
									{
										std::cout << "Ваше число больше числа компьютера";
									}

									Sleep(2000);
								}
								else
								{
									std::cout << "Отказ от подсказки";
									Sleep(500);
								}
							}
						}
					}
					else if (choose == 0)
					{
						break;
					}
					else
					{
						std::cout << "\nНекорректный ввод\n\n";
						Sleep(1500);
					}
				}
			}
			else if (choose == 2)
			{
				while (true)
				{
					system("cls");
					std::cout << "\n\n\n\t\tНастройки игры\n\n\n";
					std::cout << "1 - Изменить количество жизни для легкой игры\n";
					std::cout << "2 - Изменить количество жизни для сложной игры\n";
					std::cout << "3 - Изменить шанс бесплатной подсказки для сложной игры\n";
					std::cout << "0 - Выход\n";
					std::cout << "Ввод: ";
					std::cin >> choose;


					if (choose == 1)
					{
						while (true)
						{
							std::cout << "Введите новое количество здоровья для легкой игры: ";
							std::cin >> choose;

							if (choose < 1 || choose > 100)
							{
								std::cout << "Допустимый лимит от 0 до 100\n";
								Sleep(1000);
							}
							else
							{
								std::cout << "Успешно\n";
								maxHp = choose;
								Sleep(1000);
								break;
							}
						}

					}
					else if (choose == 2)
					{
						while (true)
						{
							std::cout << "Введите новое количество здоровья для сложной игры: ";
							std::cin >> choose;

							if (choose < 1 || choose > 100)
							{
								std::cout << "Допустимый лимит от 1 до 100\n";
								Sleep(1000);
							}
							else
							{
								std::cout << "Успешно\n";
								maxHpHard = choose;
								Sleep(1000);
								break;
							}
						}
					}
					else if (choose == 3)
					{
						while (true)
						{
							std::cout << "Введите новой шанс бесплатной подсказки для сложной игры: ";
							std::cin >> choose;

							if (choose < 0 || choose > 100)
							{
								std::cout << "Допустимый лимит от 0 до 100\n";
								Sleep(1000);
							}
							else
							{
								std::cout << "Успешно\n";
								chance = choose;
								Sleep(1000);
								break;
							}
						}
					}
					else if (choose == 0)
					{
						break;
					}
					else
					{
						std::cout << "\nНекорректный ввод\n\n";
						Sleep(1500);
					}
				}
			}
			else if (choose == 0)
			{
				system("cls");
				std::cout << "\n\n\n\t\tСпасибо за игру\n\n\n";

				break;
			}
			else
			{
				std::cout << "\nНекорректный ввод\n\n";
				Sleep(1500);
			}
		}

*/

/*const int size = 4;

	int arr[size];

	for (int i = 0; i < std::size(arr); i++)
	{
		std::cout << "Введите число: ";
		std::cin >> arr[i];
	}

	std::cout << "Введенные числа: \n";

	for (int i = 0; i < std::size(arr); i++)
	{
		std::cout << arr[i] << " ";
	}*/