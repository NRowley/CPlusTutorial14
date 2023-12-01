#include <iostream>
using namespace std;

class Object
{
public:
	virtual void BeginPlay() {
		cout << "Object BeginPlay() called. \n";
	}
};

class Actor : public Object
{
public:
	virtual void BeginPlay() {
		cout << "Actor BeginPlay() called. \n";
		Object::BeginPlay();
	}
};

class Pawn : public Actor {
public:
	void BeginPlay() {
		cout << "Pawn BeginPlay() called. \n";
		Object::BeginPlay();
		Actor::BeginPlay();
	}
};

int main() {/*
	Object* obj = new Object;
	obj->BeginPlay();

	Actor* act = new Actor;
	act->BeginPlay();*/

	Pawn* pawn = new Pawn;
	pawn->BeginPlay();


	delete pawn;
	//delete obj;/*
	//delete act;*/
	system("pause");
}