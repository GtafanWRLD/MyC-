#include "stdafx.h"
#include <iostream>
#include <string>




using namespace std;

class A {
public:
	A() 
	{
		cout << "A" << endl;
	}
	~A() 
	{

	}
};
class B : public A {
public:
	B() 
	{
		cout << "B" << endl;
	}
	~B() 
	{

	}
};
class C : public B {
public:
	C() 
	{
		cout << "C" << endl;
	}
	~C() 
	{

	}
};
class D : public C {
public:
	D() {
		cout << "D" << endl;
	}
	~D() {

	}
};
class Base1 {
public:
	Base1() 
	{
		cout << "Base1" << endl;
	}
	~Base1() {

	}
};
class Base2 {
public:
	Base2() 
	{
		cout << "Base2" << endl;
	}
	~Base2() 
	{

	}
};
class Klasa_Pochodna : public Base1, Base2 {
public:
	Klasa_Pochodna() 
	{
		cout << "Pochodna" << endl;
	}
	~Klasa_Pochodna() 
	{

	}
};
class Complex {
	double cos, cos2;
public:
	Complex() : cos(0), cos2(0) 
	{

	}
	Complex(double x, double y) 
	{
		cos = x;
		cos2 = y;
	}
	Complex(double x) 
	{
		cos = x;
		cos2 = x;
	}
	void wyswietlanie() 
	{
		cout << cos << " " << cos2 << endl;
	}
};
class KlasaE {
public:
	virtual void Print() = 0;
};
class KlasaF : public KlasaE {
public:
	virtual void Print() { cout << "F"; }
};
class KlasaG : public KlasaE {
public:
	virtual void Print() { cout << "G"; }
};
class KlasaH {
protected:
	int e;
public:
	int d, f;
	KlasaH() : d(1), e(2), f(0) { f = d + e; }
	KlasaH(int a, int b) : d(a), e(b) { f = d + e; }
	void Print1() { cout << f; }
};
class KlasaI : public KlasaH {
public:
	int e;
	KlasaI() : KlasaH() { }
	KlasaI(int a, int b) : KlasaH(a, b) { }
	void Print1() { cout << f; }
};
class KlasaJ {
public:
	void Print2() { cout << "J"; }
};
class KlasaK : public KlasaJ {
public:
	virtual void Print2() { cout << "K"; }
};
class KlasaL : public KlasaK {
public:
	void Print2() { cout << "L"; }
};
class KlasaM {
public:
	KlasaM() {
		cout << "M no parameter" << endl;
	}
	KlasaM(string s) {
		cout << "M string parameter" << endl;
	}
	KlasaM copy(KlasaM) {
		cout << "M object M parameter" << endl;
	}
};
class KlasaN {
public:
	KlasaN() {
		cout << "N no parameter" << endl;
	}
	KlasaN(string s) {
		cout << "N string parameter" << endl;
	}
};
class BazaDanych {
public:
	virtual void polaczDB(string host, string user, string pass, string dbName) {
	}
};
class MySQL : public BazaDanych {
	void polaczDB(string host, string user, string pass, string dbName) {
		cout << "Tu baza MySQL" << endl;
	}
};
class PostgreSQL : public BazaDanych {
	void polaczDB(string host, string user, string pass, string dbName) {
		cout << "Tu baza PostgreSQL" << endl;
	}
};
int main() {
	
	D *obiekt = new D;
	delete obiekt;
	Klasa_Pochodna *obiekt1 = new Klasa_Pochodna;
	Complex c;
	
	c = 3.0;
	c.wyswietlanie();
	KlasaF ob2;
	KlasaG ob3;
	KlasaE *obj;
	obj = &ob2;
	obj->Print();
	obj = &ob3;
	obj->Print();
	cout << " " << endl;
	
	KlasaH b;
	b.Print1();
	cout << " " << endl;
	
	KlasaJ obx1;
	KlasaK obx2;
	KlasaL obx3;
	KlasaJ *objx;
	objx = &obx1;
	objx->Print2();
	objx = &obx2;
	objx->Print2();
	objx = &obx3;
	objx->Print2();
	KlasaM m2("Test");
	KlasaN n1("Alan");
	KlasaN n2(n1);
	cout << " " << endl;

	string nazwa;
	cout << "Podaj baze z ktora chcesz sie polaczyc" << endl;
	cin >> nazwa;
	
	
	
	
	if (nazwa == "MySQL")
	{
		BazaDanych *baza = new MySQL();
		baza->polaczDB("host", "user", "password", "MySQL");
	}
	
	else if (nazwa == "PostgreSQL")
	{
		BazaDanych *baza = new PostgreSQL();
		baza->polaczDB("host2", "user2", "password", "MySQL");
	}
	
	else {
		cout << "Nie mozna sie polaczyc z baza" << endl;
	}



	return 0;
}


