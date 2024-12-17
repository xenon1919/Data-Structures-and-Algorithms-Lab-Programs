#include <iostream>
using namespace std;

// Element class representing a non-zero element in the sparse matrix
class Element {
public:
    int row; // Row index
    int col; // Column index
    int value; // Value of the element
};

// Sparse class representing a sparse matrix
class Sparse {
private:
    int rows; // Number of rows in the matrix
    int cols; // Number of columns in the matrix
    int numElements; // Number of non-zero elements in the matrix
    Element *elements; // Array of non-zero elements

public:
    // Constructor
    Sparse(int rows, int cols, int numElements) {
        this->rows = rows;
        this->cols = cols;
        this->numElements = numElements;
        elements = new Element[this->numElements];
    }

    // Destructor
    ~Sparse() {
        delete[] elements;
    }

    // Overloading the addition operator
    Sparse operator+(Sparse &s);

    // Overloading the input and output operators
    friend istream& operator>>(istream &is, Sparse &s);
    friend ostream& operator<<(ostream &os, Sparse &s);
};

// Overloaded addition operator to add two sparse matrices
Sparse Sparse::operator+(Sparse &s) {
    if (rows != s.rows || cols != s.cols)
        return Sparse(0, 0, 0);

    Sparse *sum = new Sparse(rows, cols, numElements + s.numElements);

    int i = 0, j = 0, k = 0;
    while (i < numElements && j < s.numElements) {
        if (elements[i].row < s.elements[j].row)
            sum->elements[k++] = elements[i++];
        else if (elements[i].row > s.elements[j].row)
            sum->elements[k++] = s.elements[j++];
        else {
            if (elements[i].col < s.elements[j].col)
                sum->elements[k++] = elements[i++];
            else if (elements[i].col > s.elements[j].col)
                sum->elements[k++] = s.elements[j++];
            else {
                sum->elements[k] = elements[i];
                sum->elements[k++].value = elements[i++].value + s.elements[j++].value;
            }
        }
    }
    for (; i < numElements; i++) sum->elements[k++] = elements[i];
    for (; j < s.numElements; j++) sum->elements[k++] = s.elements[j];
    sum->numElements = k;

    return *sum;
}

// Overloaded input operator to read a sparse matrix
istream& operator>>(istream &is, Sparse &s) {
    cout << "Enter non-zero elements (row column value):" << endl;
    for (int i = 0; i < s.numElements; i++)
        is >> s.elements[i].row >> s.elements[i].col >> s.elements[i].value;
    return is;
}

// Overloaded output operator to print a sparse matrix
ostream& operator<<(ostream &os, Sparse &s) {
    int k = 0;
    for (int i = 0; i < s.rows; i++) {
        for (int j = 0; j < s.cols; j++) {
            if (k < s.numElements && s.elements[k].row == i && s.elements[k].col == j)
                os << s.elements[k++].value << " ";
            else
                os << "0 ";
        }
        os << endl;
    }
    return os;
}

// Main function
int main() {
    Sparse s1(5, 5, 5);
    Sparse s2(5, 5, 5);

    cout << "Enter elements for the first matrix:" << endl;
    cin >> s1;
    cout << "Enter elements for the second matrix:" << endl;
    cin >> s2;

    Sparse sum = s1 + s2;

    cout << "First Matrix:" << endl << s1;
    cout << "Second Matrix:" << endl << s2;
    cout << "Sum Matrix:" << endl << sum;

    return 0;
}
