#include <iostream>
using namespace std;

int main()
{
    int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int stojnost[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int t = 0;
    int i = 0;
    int a = 0;
    int b = 0;
    string ex = "";

    for (b = a; b < 9; b++)
    {
        for (a = 0; a < 9; a++)
        {
            for (t = 0; t < 9; t++)
            {
                for (i = 0; i < 9; i++)
                {
                    if (stojnost[t] + stojnost[b] == stojnost[i] + stojnost[a])
                    {
                        if (num[t] != num[i])
                        {
                            cout << num[b] << num[t] << " ------> " << num[a] << num[i] << endl;
                        }
                    }
                }
            }
        }
    }
    cout << "Press any key and then Enter to exit: ";
    cin >> ex;
    return 0;
}
