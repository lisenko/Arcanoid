

#include "pch.h"
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class Puck {
private:
	int value;
public:
	Puck(int val1) {
		value = val1;
	}
	Puck() {}
	operator int() const
	{
		return value;
	}
	Puck& operator=(const Puck* right) {

		if (this == right) {
			return *this;
		}
		value = right->value;
		return *this;
	}
};


class Brick {
private:
	int value;
public:
	Brick(int val1) {
		value = val1;
	}
	Brick& operator=(const Brick* right) {

		if (this == right) {
			return *this;
		}
		value = right->value;
		return *this;
	}
	operator int() const
	{
		return value;
	}
	
	Brick() {};
};

class PuckSupply {
private:
	Puck pucks[3];
	int count;
public:
	PuckSupply(int n) {
		if (n > 3) {
			cout << "ERROR. THERE ARE CANT BE MORE THAN 3 PUCKS" << endl;
		}
		else {
			for (int i = 0; i < n; i++) {
				pucks[i] = new Puck;
			}
			count = n;
		}
	}

	int size() {
		return count;
	}
	Puck get() {
		if (count-1 != 0) {
			return pucks[count-1];
		}
		count = count -1;
	}

};


class BrickPile {
private:
	int count = 90;
	int value;
	Brick bricks[30][30];
public:
	
	BrickPile() {
		for (int i = 0; i < 30; i++) {
			for (int j = 0; j < 30; j++) {
				bricks[i][j] = new Brick;
			}
		}
	}
	
	int size() {
		return count;
	}
	Brick destroy() {
		if (count-1 <= 0) {
			return 0;
		}
		else {
			count = count - 1;
			return count;
		}
	}


};

int main()
{
	PuckSupply p1(3);
	cout << p1.get() << endl;

}

