#include <iostream>
#include <string>
using namespace std;

int main()
{
    string names[] = {"Zuck", "Shayd", "Emely", "Amjed", "Esther", "Manar", "Anne"};

    int n = 7;

    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (names[j] > names[j + 1])
            {
                swap(names[j], names[j + 1]);
            }
        }
    }

    cout << "Ascending Order:\n";

    for (int i = 0; i < n; i++)
    {
        cout << names[i] << " ";
    }

    return 0;
}
