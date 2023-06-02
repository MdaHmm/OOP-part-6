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

class Client
{
private:
	int _id;
	std::string _name;
	float _bill;
public:
	Client(int id, std::string name, float bill, std::map<int, Client*>&map) : _id(id), _name(name), _bill(bill)
	{
		map[_id] = this; // в мап записывается айди и тот, кто вызвал этот мап
	}

	Client(Client& client)
	{
		_id = client._id;
		_name = client._name;
		_bill = client._bill;
	}

	void ShowData()
	{
		std::cout << "id: " << _id << '\n';
		std::cout << "Имя: " << _name << '\n';
		std::cout << "Счет: " << _bill << '\n';
	}

	/*void Foo() {
		this->_id;
	}*/
};



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
	
	// map clients 
	/*
	std::map<int, std::string>clients =
	{
		{23, "Санёк"},
		{26, "Александр"},
		{30, "Саня"}
	};
	
	auto it = clients.begin();
	*/
	
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
	
	//Пример
	/*
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
	*/

	std::map<int, Client*>clients;
	Client* client = new Client(12, "Саня", 123321.2f, clients);
	Client* client2 = new Client(25, "Санчез", 21.66f, clients);
	Client* client3 = new Client(43, "Александр", 46521.32f, clients);
	//client->Foo();
	
	auto it = clients.begin();

	for (; it != clients.end(); ++it) {
		std::cout << "Id клиента - " << it->first << " :\n";
		it->second->ShowData();
		std::cout << "\n\n";
	}



	return 0;
}
