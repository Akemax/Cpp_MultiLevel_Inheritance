#include <iostream>

using namespace std;

class Person {
private:
	string name;
	int age;
	string occupation;
public:

	Person(string _name, int _age, string _occupation) : name(_name), age(_age), occupation(_occupation) {}

	string GetName()
	{
		return name;
	}

	int GetAge()
	{
		return age;
	}

	string GetOccupation()
	{
		return occupation;
	}
};

class Superhero : public Person {
public:
	Superhero(string n, int a, string o, string s, string
		ne) : Person(n, a, o) {
		secret_identity = s;
		nemesis = ne;
	}
	string GetSecretIdentity() {
		return secret_identity;
	}
	void SetSecretIdentity(string new_secret_identity) {
		secret_identity = new_secret_identity;
	}
	string GetNemesis() {
		return nemesis;
	}
	void SetNemesis(string new_nemesis) {
		nemesis = new_nemesis;
	}
private:
	string secret_identity;
	string nemesis;
};

int main() 
{
	Superhero hero("Spider-Man", 16, "student", "Peter Parker", "Doc Octopus");
	cout << hero.GetName() << endl;
	cout << hero.GetAge() << endl;
	cout << hero.GetOccupation() << endl;
	cout << hero.GetSecretIdentity() << endl;
	cout << hero.GetNemesis() << endl;

	return 0;
}