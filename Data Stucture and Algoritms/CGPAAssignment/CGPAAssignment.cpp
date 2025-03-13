#include <iostream>
using namespace std;
void selectionsort(float* arr, const int size);
void swap(float& f1, float& f2);
void findmaxindex(float cgpa[], const int start_index, const int eindex);

int main()
{
    float cgpas[10];
    float maximum;
    float minimum;
    float sum = 0;
    float average;
    cout << "Enter the value of cgpas : ";
    for (auto& f : cgpas)
    {
        cin >> f;
        sum = sum + f;
    }

    for (int i = 0; i < 10; i++)
    {
        findmaxindex(cgpas, i, 10);
    }

    maximum = cgpas[0];
    minimum = cgpas[9];
    average = sum / 10.0;
    cout << " sort array is " << endl;
    for (auto& f : cgpas)
    {
        cout << f << " ";
    }
    cout << endl;

    cout << "maximum cgpa is :" << maximum << endl;
    cout << "minimum cgpa is :" << minimum << endl;
    cout << "average cgpa is :" << average << endl;
}


void findmaxindex(float cgpa[], const int start_index, const int eindex)
{
    int max = cgpa[start_index];
    for (int i = start_index; i < eindex; i++)
    {
        if (cgpa[i] > max)
        {
            max = cgpa[i];
            swap(cgpa[start_index], cgpa[i]);
        }
    }
}
void swap(float& f1, float& f2)
{
    float temp = f1;
    f1 = f2;
    f2 = temp;
}