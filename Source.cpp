#include <iostream>
#include <string>
using namespace std;
struct User
{
    string name;
    string surename;
    string email;
    int age;
    int id;
};
void sort(User* users, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (users[i].age > users[j].age)
            {
                char x = users[i].age;
                users[i] = users[j];
                users[j].age = x;
            }
        }
    }
}

int main()
{
    int kol = 1;
    int kolvo = 1;
    int size;
    cout << "pls login" << endl;
    cout << "how many users do you need: " << endl;
    cin >> size;
    User* users = new User[size];
    for (int i = 0; i < size; i++)
    {
        cout << kolvo << endl << "write your name: " << endl;
        cin >> users[i].name;

        cout << "write your surename: " << endl;
        cin >> users[i].surename;

        cout << "write your age: " << endl;
        cin >> users[i].age;
        kolvo++;
    }
    for (int i = 0; i < size; i++)
    {
        sort(users, size);
        cout << kol << endl << "your name: " << users[i].name << endl << "your surename: " << users[i].surename << endl << "your age: " << users[i].age << endl << endl;
        kol++;
    }
    return 0;
}
