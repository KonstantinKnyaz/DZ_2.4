#include <iostream>
#include <clocale>
#include <string>

using namespace std;

short int obj = 0;

class Tiles {
private:
	string brand{};
	int size_h{};
	int size_w{};
	float price{};
public:
	Tiles(int size_h, int size_w) {
		this->size_h = size_h;
		this->size_w = size_w;
	}

	Tiles(int size_h, int size_w, double price) {
		this->size_h = size_h;
		this->size_w = size_w;
		this->price = price;
	}

	Tiles() { // Пустой конструктор
		cout << "Empty constructor!" << endl;
	}

	void setAll(string brand, int size_h, int size_w, double price) {
		this->brand = brand;
		this->size_h = size_h;
		this->size_w = size_w;
		this->price = price;
	}

	void getData() {
		cout << brand << ": " << endl;
		if (size_h != 0)
			cout << size_h << "x";
		if (size_w != 0)
			cout << size_w << endl;
		if (price > 0)
			cout << price << "$" << endl;
	}

	~Tiles() {
		cout << "Работа с объектом завершена. ";
		obj++;
		cout << obj << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");

	Tiles getstol(50, 25);

	//getstol.setAll("Getstol", 50, 25, 13.200);
	getstol.getData();

	Tiles newbrand(47, 29, 12.7);

	//newbrand.setAll("Newbrand", 47, 29, 12.7);
	newbrand.getData();

	Tiles newbrand2;
	newbrand2.getData();
	return 0;
}

