# include <iostream>

using namespace std;

// initialize a 2d multidimensional array
// * This array is three rows by three columns*
int aGlobal [3] [3];

// add the value of x to every element in the aGlobal matrix
void addMatrix (int x)
{
    // We need a nested loop to iterate the multidemnsional array
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            aGlobal [i] [j] += x;
        }
    }
}

// return the sum of all elements of aGlobal
int sumMatrix ()
{
    int sumElem = 0;
    for (int i = 0; i  <3; ++i)
    {
        for (int j =0 ; j < 3; ++j)
        {
            sumElem += aGlobal [i] [j];
        }
    }
    return sumElem;
}

// Main method
int main()
{
    // increment each element in matrix with value of x passed in
    addMatrix (1);

    addMatrix (10);

    addMatrix (100);

    // Now let's find the sum after the arrays have been populated completely
    int sumElem = sumMatrix();

    // Print out our sum result
    cout << sumElem;

    return 0;
}