#include <iostream>

using namespace std;

int main()
{
    int n, m, sum = 0;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr= new int[n];
    cout << "\nEnter Elements of Array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "\nAverage: " << (float) sum / n;
    return 0;
}