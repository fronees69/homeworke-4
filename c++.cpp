#include <iostream>
using namespace std;

void sort(char word[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (word[i] > word[j])
            {
                char x = word[i];
                word[i] = word[j];
                word[j] = x;
            }
        }
    }
}

void sorta(char* word)
{
    for (int i = 0; word[i]; ++i)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            word[i] += 'a' - 'A';
        }
    }
}

void sorti(const char word[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            cout << word[i];
        }
    }

    for (int i = 0; i < size - 1; i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            cout << word[i];
        }
    }
}


int main()
{
    char word[256];

    cout << "write: ";
    cin >> word;

    int size = 0;
    while (word[size] != '\0')
    {
        size++;
    }

    sort(word, size);
    sorta(word);

    cout << "Result: " << word << endl;

    return 0;
}
