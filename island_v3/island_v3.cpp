#include "pch.h"
#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

class Animal {
public:
	int x;
	int y;

	Animal(int x, int y) : x(x), y(y) {

	}

	Animal() {

	}



	void walk(Animal& wolfs_arr, Animal& rabbits_arr, Animal& wolfess_arr) {
		int next_x = x, next_y = y;
		if (x > 0 && y > 0 && y < 20 && x < 20) {
			int move = rand() % 8 + 1;

			if (move == 1) {
				next_x = x - 1;
				next_y = y - 1;
			}
			if (move == 2) {
				next_x = x;
				next_y = y - 1;
			}
			if (move == 3) {
				next_x = x + 1;
				next_y = y - 1;
			}
			if (move == 4) {
				next_x = x - 1;
				next_y = y;
			}
			if (move == 5) {
				next_x = x + 1;
				next_y = y;
			}
			if (move == 6) {
				next_x = x - 1;
				next_y = y + 1;
			}
			if (move == 7) {
				next_x = x;
				next_y = y - 1;
			}
			if (move == 8) {
				next_x = x + 1;
				next_y = y + 1;
			}
		}

		if (y == 0 && x > 0 && x < 19)
		{
			int move = rand() % 5 + 1;

			if (move == 1) {
				next_x = x - 1;
				next_y = y;
			}
			if (move == 2) {
				next_x = x + 1;
				next_y = y;
			}
			if (move == 3) {
				next_x = x - 1;
				next_y = y + 1;
			}
			if (move == 4) {
				next_x = x;
				next_y = y + 1;
			}
			if (move == 5) {
				next_x = x + 1;
				next_y = y + 1;
			}
		}
		if (y == 19 && x > 0 && x < 19) {
			int move = rand() % 5 + 1;

			if (move == 1) {
				next_x = x - 1;
				next_y = y - 1;
			}

			if (move == 2) {
				next_x = x;
				next_y = y - 1;
			}

			if (move == 3) {
				next_x = x + 1;
				next_y = y - 1;
			}

			if (move == 4) {
				next_x = x - 1;
				next_y = y;
			}

			if (move == 5) {
				next_x = x + 1;
				next_y = y;
			}
		}

		if (x == 0 && y > 0 && y < 19) {
			int move = rand() % 5 + 1;

			if (move == 1) {
				next_x = x;
				next_y = y - 1;
			}
			if (move == 2) {
				next_x = x + 1;
				next_y = y - 1;
			}
			if (move == 3) {
				next_x = x + 1;
				next_y = y;
			}
			if (move == 4) {
				next_x = x + 1;
				next_y = y - 1;
			}
			if (move == 5) {
				next_x = x;
				next_y = y + 1;
			}

		}
		if (x == 19 && y > 0 && y < 19) {
			int move = rand() % 5 + 1;

			if (move == 1) {
				next_x = x - 1;
				next_y = y - 1;
			}
			if (move == 2) {
				next_x = x;
				next_y = y - 1;
			}
			if (move == 3) {
				next_x = x - 1;
				next_y = y;
			}
			if (move == 4) {
				next_x = x - 1;
				next_y = y + 1;
			}
			if (move == 5) {
				next_x = x;
				next_y = y + 1;
			}
		}

		if (x == 0 && y == 0) {
			int move = rand() % 3 + 1;


			if (move == 1) {
				next_x = x + 1;
				next_y = y;
			}
			if (move == 2) {
				next_x = x;
				next_y = y + 1;
			}
			if (move == 3) {
				next_x = x + 1;
				next_y = y + 1;
			}
		}
		if (x == 0 && y == 19) {
			int move = rand() % 3 + 1;


			if (move == 1) {
				next_x = x;
				next_y = y - 1;
			}
			if (move == 2) {
				next_x = x + 1;
				next_y = y - 1;
			}
			if (move == 3) {
				next_x = x + 1;
				next_y = y;
			}
		}
		if (x == 19 && y == 0) {
			int move = rand() % 3 + 1;


			if (move == 1) {
				next_x = x - 1;
				next_y = y;
			}
			if (move == 2) {
				next_x = x - 1;
				next_y = y + 1;
			}
			if (move == 3) {
				next_x = x;
				next_y = y + 1;
			}
		}
		if (x == 19 && y == 19) {
			int move = rand() % 3 + 1;
			if (move == 1) {
				next_x = x - 1;
				next_y = y - 1;
			}
			if (move == 2) {
				next_x = x;
				next_y = y - 1;
			}
			if (move == 3) {
				next_x = x - 1;
				next_y = y;
			}
		}

		x = next_x;
		y = next_y;

	}

	void die() {
		cout << endl << "Rabbit die on: [" << x << " " << y << "]";
	}
};


class Wolf : public Animal {
public:
	Wolf(int x, int y) : Animal(x, y) {

	}

	Wolf() : Animal() {

	}

	void hunt(int x, int y) {

	}

	void reproduct() {

	}

	double getFullness() {
		return fullness;
	}

	void incFullnes() {
		fullness++;
	}

	void update() {
		fullness = fullness - 0.1;
	}

private:
	double fullness = 1;
};

class Wolfess : public Wolf {
public:
	
	Wolfess(int x, int y) : Wolf(x, y) {

	}

	Wolfess() : Wolf() {

	}
private:
	double fullness = 1;
};

class Rabbit : public Animal {
public:
	Rabbit(int x, int y) : Animal(x, y) {

	}

	Rabbit() : Animal() {

	}

	void update(Animal *rabbits_arr, Animal& wolfs_arr, Animal& wolfess_arr, int& counter) {
		this->walk(wolfs_arr, *rabbits_arr, wolfess_arr);	
	}

	bool reproduct() {
		int chance = rand() % 20 + 1;
	
		if (chance == 3) {
			//cout << "1 rabbit was born..." << endl;
			return true;
		}

		return false;

	}
};

class Enviroment {
public:
	// Counters:
	int wolfs_counter;
	int rabbits_counter;
	int wolfesses_counter;

	int* ptr_rabbits = &rabbits_counter;


	Wolf *wolfs_arr = new Wolf[wolfs_counter];
	Rabbit *rabbits_arr = new Rabbit[rabbits_counter];
	Wolfess *wolfess_arr = new Wolfess[wolfesses_counter];

	int timeout = 1000;

	Enviroment(int wolfs, int rabbits, int wolfesses) : wolfs_counter(wolfs), rabbits_counter(rabbits), wolfesses_counter(wolfesses) {


		for (int i = 0; i < wolfs_counter; i++) {
			wolfs_arr[i] = Wolf(rand() % 19 + 0, rand() % 19 + 0);
		}
		for (int i = 0; i < rabbits_counter; i++) {
			rabbits_arr[i] = Rabbit(rand() % 19 + 0, rand() % 19 + 0);
		}
		for (int i = 0; i < wolfesses_counter; i++) {
			wolfess_arr[i] = Wolfess(rand() % 19 + 0, rand() % 19 + 0);
		}

	}

	void check() {
		for (int i = 0; i < wolfs_counter; i++) {
				for (int q = 0; q < rabbits_counter; q++) {
					if (wolfs_arr[i].x == rabbits_arr[q].x && wolfs_arr[i].y == rabbits_arr[q].y) {
						rabbits_arr[q].die();
						this->deleteRabbit(rabbits_arr, rabbits_counter, q);
						wolfs_arr[i].incFullnes();
					}
			}
		}

		for (int i = 0; i < wolfesses_counter; i++) {
			for (int q = 0; q < rabbits_counter; q++) {
				if (wolfess_arr[i].x == rabbits_arr[q].x && wolfess_arr[i].y == rabbits_arr[q].y) {
					rabbits_arr[q].die();
					this->deleteRabbit(rabbits_arr, rabbits_counter, q);
					wolfess_arr[i].incFullnes();
				}
			}
		}

		for (int i = 0; i < wolfs_counter; i++) {
			cout << wolfs_arr[i].getFullness() << endl;
			if (wolfs_arr[i].getFullness() <= 0) {
				this->deleteWolf(wolfs_arr, wolfs_counter, i);
			// ? ? ?
				i = -1;
			}
		}

		for (int i = 0; i < wolfesses_counter; i++) {
			cout << wolfess_arr[i].getFullness() << endl;
			if (wolfess_arr[i].getFullness() <= 0) {
				this->deleteWolfess(wolfess_arr, wolfesses_counter, i);
				// ? ? ?
				i = -1;
			}
		}
	}


	// Update function
	void Tick() {
		system("cls");
		this->Draw();
		this->check();

		for (int i = 0; i < rabbits_counter; i++) {
			if (rabbits_arr[i].reproduct()) {
				this->addRabbit(rabbits_arr, rabbits_counter, rabbits_arr[i].x, rabbits_arr[i].y);
			}
			rabbits_arr[i].update(rabbits_arr, *wolfs_arr, *wolfess_arr, *ptr_rabbits);
		}

		for (int i = 0; i < wolfs_counter; i++) {
			wolfs_arr[i].update();
		}

		for (int i = 0; i < wolfesses_counter; i++) {
			wolfess_arr[i].update();
		}

		Sleep(timeout);
		this->Tick();
	}

	void addRabbit(Rabbit *&arr, int &size, int x, int y) {
		Rabbit *newArray = new Rabbit[size + 1];

		for (int i = 0; i < size; i++) {
			newArray[i] = arr[i];
		}

		newArray[size].x = x;
		newArray[size].y = x;
		
		size++;
		arr = newArray;
	}

	void addWolf(Wolf *&arr, int &size, int x, int y) {
		Wolf *newArray = new Wolf[size + 1];

		for (int i = 0; i < size; i++) {
			newArray[i] = arr[i];
		}

		newArray[size].x = x;
		newArray[size].y = x;

		size++;
		arr = newArray;
	}

	void addWolfess(Wolfess *&arr, int &size, int x, int y) {
		Wolfess *newArray = new Wolfess[size + 1];

		for (int i = 0; i < size; i++) {
			newArray[i] = arr[i];
		}

		newArray[size].x = x;
		newArray[size].y = x;

		size++;
		arr = newArray;
	}

	void deleteRabbit(Rabbit *&arr, int &count, int element) {
		Rabbit *newArr = new Rabbit[count - 1];

		for (int i = 0; i < element; i++) {
			newArr[i] = arr[i];
		}

		for (int i = element; i < count - 1; i++) {
			newArr[i] = arr[i + 1];
		}

		count--;
		arr = newArr;
	}

	void deleteWolf(Wolf *&arr, int &count, int element) {
		Wolf *newArr = new Wolf[count - 1];

		for (int i = 0; i < element; i++) {
			newArr[i] = arr[i];
		}

		for (int i = element; i < count - 1; i++) {
			newArr[i] = arr[i + 1];
		}

		count--;
		arr = newArr;
	}


	void deleteWolfess(Wolfess *&arr, int &count, int element) {
		Wolfess *newArr = new Wolfess[count - 1];

		for (int i = 0; i < element; i++) {
			newArr[i] = arr[i];
		}

		for (int i = element; i < count - 1; i++) {
			newArr[i] = arr[i + 1];
		}

		count--;
		arr = newArr;
	}

	void Draw() {
		int board[20][20] = {
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, },
		};

		for (int i = 0; i < rabbits_counter; i++) {
			board[rabbits_arr[i].x][rabbits_arr[i].y] = 2;
		}

		for (int i = 0; i < wolfs_counter; i++) {
			board[wolfs_arr[i].x][wolfs_arr[i].y] = 1;
		}


		for (int i = 0; i < wolfesses_counter; i++) {
			board[wolfess_arr[i].x][wolfess_arr[i].y] = 3;
		}

		for (int i = 0; i < 20; i++) {
			for (int q = 0; q < 20; q++) {
				SetColor(board[i][q] + 1, 0);
				cout << board[i][q] << " ";
				if (q == 19) {
					cout << endl;
				}
			}
		}

		SetColor(2, 0);
		cout << "Wolfs: " << wolfs_counter << endl;
		SetColor(5, 0);
		cout << "Rabbits: " << rabbits_counter << endl;
		SetColor(4, 0);
		cout << "Wolfesses: " << wolfesses_counter << endl;

	}

	~Enviroment() {
		delete[] wolfess_arr;
		delete[] rabbits_arr;
		delete[] wolfs_arr;
	}

};



int main()
{
	srand(time(0));
	Enviroment Island(0, 10, 3);
	Island.Tick();

	return 0;
}



