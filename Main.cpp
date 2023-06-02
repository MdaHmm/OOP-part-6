#include <iostream>
#include <map>

// Конструктор копирования
/*
class Client
{
private:
	int _age;
	int _id;
public:
	Client(int age, int id) : _age(age), _id(id) {}

	Client(Client& client)
	{
		_age = client._age;
		_id = client._id;
	}

	void ShowData()
	{
		std::cout << "Возраст: " << _age << '\n';
		std::cout << "id: " << _id << '\n';
	}
};
*/

// Контейнер библиотеки stl


int main() {

	setlocale(LC_ALL, "Russian");
	
	// Конструктор копирования 
	/*
	Client client(24, 1);
	Client client2(client);
	client.ShowData();
	client2.ShowData();
	*/

	// Map

	// 23 - Санек
	// 26 - Александр
	std::map<int, std::string>clients =
	{
		{23, "Санёк"},
		{26, "Александр"},
		{30, "Саня"}
	};

	auto it = clients.begin();

	//Пример вывода
	
	//std::cout << it->first << '\n'; // выводит ключ
	//std::cout << it->second << '\n'; // выводит значение
	//it++; 
	//std::cout << it->first << '\n'; // выводит ключ второго элемента
	//std::cout << it->second << '\n'; // выводит значение
	//it--;

	//std::advance(it, 2); // передвижение итератора
	//std::cout << it->first << '\n'; 
	//std::cout << it->second << '\n';
	
	clients.insert(std::make_pair(40, "Искандер")); // Добавляем запись в мап
	clients[55] = "Саша"; // Так же добавляем клиента но проще

	for (; it != clients.end(); it++) {
		std::cout << it->first << " - ";
		std::cout << it->second << '\n';
	}

	std::cout << "Вывод по обращению к ключу 23 - " << clients[23] << '\n';

	it = clients.find(23); // поиск по ключу

	clients.erase(it);

	for (it = clients.begin(); it != clients.end(); it++) {
		std::cout << it->first << " - ";
		std::cout << it->second << '\n';
	}


	return 0;
}
