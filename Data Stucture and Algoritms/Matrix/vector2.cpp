// #include <iostream>
// using namespace std;
// // #include "Vector.h"
// // #ifndef Vector_h
// // #define Vector_h
// class Vector
// {
// public:
//     Vector() // default constructor
//     {
//         total = 5;
//         used = 0;
//         numbers = new int[total];

//     }
//     void insert(const int val)
//     {
//        while( used!= total)
//        {
//         int i ;
//             cin>>numbers[i];
//         used ++ ;
//        }

//     }
//     bool remove(const int val)
//     {
//         bool result = false;
//         for (int i = 0; i < total; i++)
//         {
//             if (search(const int val) == true )
//             {
//                 numbers[i] ;
//             }

//         }

//         return result;
//     }
//     bool search(const int val) const // this word declare that this function is constant
//     {
//         bool result = false;
//         // write code to search
//         for (int i = 0; i < total ; i++)
//         {
//         if (numbers[i] == val)
//         {
//             return result=true ;
//         }

//         }

//         return result;
//     }
//     void printAll() const
//     {
//         // write code to print all values
//     }
//     ~Vector()
//     {
//         delete[] numbers;
//     }

// private:
//     int *numbers;
//     int total;
//     int used;
// };

// int main(int argc, const char *argv[])
// {
//     Vector v;
//     // write code to take input from the user until he enters -1
//     v.insert(4);
//     v.insert(3);
//     v.remove(4);
//     v.printAll();
//     return 0;
// }

#ifndef Vector_h
#define Vector_h
#include <iostream>
using namespace std;
class Vector
{
public:
    Vector() // default constructor
    {
        total = 5;
        used = 0;
        numbers = new int[total];
    }
    void take_input()
    {
        cout << "Enter your number :";
        cin >> numbers[used];
        while (numbers[used] != -1)
        {
            used++;
            if (used >= total)
            {
                total = total * 2;
                int *temp = new int[total];
                for (int i = 0; i < used; i++)
                {
                    temp[i] = numbers[i];
                }
                delete[] numbers;
                numbers = temp;
            }

            cout << "Enter your number :";

            cin >> numbers[used];
        }
        used--;
    }
    void insert(const int val)
    {
        used++;
        if (used >= total)
        {
            total = total * 2;
            int *temp = new int[total];
            for (int i = 0; i < used; i++)
            {
                temp[i] = numbers[i];
            }
            delete[] numbers;
            numbers = temp;
        }
        numbers[used] = val;
    }
    bool remove(const int val)
    {
        bool result = false;

        for (int i = 0; i < used; i++)
        {
            if (numbers[i] == val)
            {
                for (int j = i; j < used; j++)
                {
                    numbers[j] = numbers[j + 1];
                }
                used--;
                result = true;
            }
        }
        return result;
    }
    bool search(const int val) const
    {
        bool result = false;
        for (int i = 0; i < used; i++)
        {
            if (numbers[i] == val)
            {
                result = true;
            }
        }

        return result;
    }
    // write code to print all values

    void printAll()
    {

        for (int i = 0; i <= used; i++)
        {
            cout << numbers[i] << " ";
        }
        cout << endl;
    }
    ~Vector()
    {
        delete[] numbers;
    }

private:
    int *numbers;
    int total;
    int used;
};
#endif
int main(int argc, const char *argv[])
{
    Vector v;
    // write code to take input from the user until he enters -1
    v.insert(4);
    v.insert(3);
    v.remove(4);
    v.printAll();
    return 0;
}
