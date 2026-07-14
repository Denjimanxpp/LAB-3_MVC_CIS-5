#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int scores[10] = {85, 72, 64, 91, 58, 77, 99, 70, 83, 66};

    int sum = 0;
    int passed = 0;
    int highest = scores[0];
    int lowest = scores[0];

    for (int i = 0; i < 10; i++)
    {
        sum += scores[i];

        if (scores[i] >= 70)
        {
            passed++;
        }

        if (scores[i] > highest)
        {
            highest = scores[i];
        }

        if (scores[i] < lowest)
        {
            lowest = scores[i];
        }
    }

    double average = (double)sum / 10;

    cout << "Student Scores: ";
    for (int score : scores)
    {
        cout << score << " ";
    }

    cout << " ";
    cout << "Sum: " << sum << endl;
    cout << fixed << setprecision(2);
    cout << "Average: " << average << endl;
    cout << "Students Passed (70 or higher): " << passed << endl;
    cout << "Highest Score: " << highest << endl;
    cout << "Lowest Score: " << lowest << endl;

    return 0;
}
