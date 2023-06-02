#include <iostream>
#include <map>

// ����������� �����������
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
		std::cout << "�������: " << _age << '\n';
		std::cout << "id: " << _id << '\n';
	}
};
*/

// ��������� ���������� stl


int main() {

	setlocale(LC_ALL, "Russian");
	
	// ����������� ����������� 
	/*
	Client client(24, 1);
	Client client2(client);
	client.ShowData();
	client2.ShowData();
	*/

	// Map

	// 23 - �����
	// 26 - ���������
	std::map<int, std::string>clients =
	{
		{23, "����"},
		{26, "���������"},
		{30, "����"}
	};

	auto it = clients.begin();

	//������ ������
	
	//std::cout << it->first << '\n'; // ������� ����
	//std::cout << it->second << '\n'; // ������� ��������
	//it++; 
	//std::cout << it->first << '\n'; // ������� ���� ������� ��������
	//std::cout << it->second << '\n'; // ������� ��������
	//it--;

	//std::advance(it, 2); // ������������ ���������
	//std::cout << it->first << '\n'; 
	//std::cout << it->second << '\n';
	
	clients.insert(std::make_pair(40, "��������")); // ��������� ������ � ���
	clients[55] = "����"; // ��� �� ��������� ������� �� �����

	for (; it != clients.end(); it++) {
		std::cout << it->first << " - ";
		std::cout << it->second << '\n';
	}

	std::cout << "����� �� ��������� � ����� 23 - " << clients[23] << '\n';

	it = clients.find(23); // ����� �� �����

	clients.erase(it);

	for (it = clients.begin(); it != clients.end(); it++) {
		std::cout << it->first << " - ";
		std::cout << it->second << '\n';
	}


	return 0;
}
